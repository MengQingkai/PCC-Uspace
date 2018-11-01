#include "pcc_ucalc_factory.h"

PccUtilityCalculator* PccUtilityCalculatorFactory::Create(const std::string& name,
        PccEventLogger* log) {
    if (name == "vivace") {
        std::cout << "Creating vivace utility calculator" << std::endl;
        return new PccVivaceUtilityCalculator(log);
    } else if (name == "linear") {
        return new PccLinearUtilityCalculator(log);
    } else if (name == "ixp") {
        return new PccIxpUtilityCalculator(log);
    }
    return new PccVivaceUtilityCalculator(log);
}
