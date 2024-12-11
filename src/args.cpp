#include <args.h>

#include <tmb_logs/logging.h>

namespace NArgs {

namespace {

////////////////////////////////////////////////////////////////////////////////

auto Logger = NLogging::TLogger("Main");

////////////////////////////////////////////////////////////////////////////////

} // namespace

////////////////////////////////////////////////////////////////////////////////

TArgs::TArgs(int argc, char** argv) {
    argparse::ArgumentParser program("my_program");

    program.add_argument("-c", "--config")
        .help("Path of config file for program")
        .store_into(configPath)
        .required();

    try {
        program.parse_args(argc, argv);
    } catch (std::exception& ex) {
        LOG_ERROR("Failed to parse arguments. {}", ex.what());
        std::exit(1);
    }
}

////////////////////////////////////////////////////////////////////////////////

} // namespace NArgs
