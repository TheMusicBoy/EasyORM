#include <args.h>

#include <tmb_logs/logging.h>
#include <tmb_logs/colors.h>
#include <tmb_logs/exception.h>
#include <argparse/argparse.hpp>

namespace {

////////////////////////////////////////////////////////////////////////////////

auto Logger = NLogging::TLogger("Main");

void InitLogging() {
    auto logging = NLogging::TLoggerPipes::GetInstance();

    NColors::TColors<char> colors;

    logging->SetLevelStyle("DEBUG", colors.Green());
    logging->SetLevelStyle("INFO", colors.Cyan());
    logging->SetLevelStyle("WARNING", colors.Yellow() + colors.Bold());
    logging->SetLevelStyle("ERROR", colors.Red() + colors.Bold());

    logging->InitStdout({{ .levels = { "ERROR", "INFO", "WARNING" } }});
    logging->InitFilePipe("logs/myservice/debug.log", {{}});
}

////////////////////////////////////////////////////////////////////////////////

} // namespace

int main(int argc, char** argv) {
    InitLogging();
    NArgs::TArgs args(argc, argv);

    
}
