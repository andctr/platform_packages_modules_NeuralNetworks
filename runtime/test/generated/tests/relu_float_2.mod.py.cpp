// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace relu_float_2 {
std::vector<MixedTypedExample> examples = {
// Generated relu_float_2 test
#include "generated/examples/relu_float_2.example.cpp"
};
// Generated model constructor
#include "generated/models/relu_float_2.model.cpp"
} // namespace relu_float_2
TEST_F(GeneratedTests, relu_float_2) {
    execute(relu_float_2::CreateModel,
            relu_float_2::is_ignored,
            relu_float_2::examples);
}