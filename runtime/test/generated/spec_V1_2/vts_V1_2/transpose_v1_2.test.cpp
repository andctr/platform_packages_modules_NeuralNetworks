// Generated from transpose_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::transpose_v1_2 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::transpose_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2 {

TEST_F(GeneratedTest, transpose_v1_2) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model());
}

TEST_F(DynamicOutputShapeTest, transpose_v1_2) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model(), true);
}

TEST_F(ValidationTest, transpose_v1_2) {
    const Model model = createModel(::generated_tests::transpose_v1_2::get_test_model());
    const Request request = createRequest(::generated_tests::transpose_v1_2::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2


namespace generated_tests::transpose_v1_2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::transpose_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2 {

TEST_F(GeneratedTest, transpose_v1_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_v1_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_v1_2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_v1_2::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_v1_2::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2


namespace generated_tests::transpose_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::transpose_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2 {

TEST_F(GeneratedTest, transpose_v1_2_relaxed) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_v1_2_relaxed) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, transpose_v1_2_relaxed) {
    const Model model = createModel(::generated_tests::transpose_v1_2::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::transpose_v1_2::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2


namespace generated_tests::transpose_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::transpose_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2 {

TEST_F(GeneratedTest, transpose_v1_2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_v1_2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_v1_2_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_v1_2::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_v1_2::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2


namespace generated_tests::transpose_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::transpose_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2 {

TEST_F(GeneratedTest, transpose_v1_2_quant8) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_v1_2_quant8) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, transpose_v1_2_quant8) {
    const Model model = createModel(::generated_tests::transpose_v1_2::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::transpose_v1_2::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2


namespace generated_tests::transpose_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2 {

TEST_F(GeneratedTest, transpose_v1_2_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_v1_2_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_v1_2_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_v1_2::get_test_model_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_v1_2::get_test_model_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2


namespace generated_tests::transpose_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized();

} // namespace generated_tests::transpose_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2 {

TEST_F(GeneratedTest, transpose_v1_2_zero_sized) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_zero_sized());
}

TEST_F(DynamicOutputShapeTest, transpose_v1_2_zero_sized) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_zero_sized(), true);
}

TEST_F(ValidationTest, transpose_v1_2_zero_sized) {
    const Model model = createModel(::generated_tests::transpose_v1_2::get_test_model_zero_sized());
    const Request request = createRequest(::generated_tests::transpose_v1_2::get_test_model_zero_sized());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2


namespace generated_tests::transpose_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_relaxed();

} // namespace generated_tests::transpose_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2 {

TEST_F(GeneratedTest, transpose_v1_2_zero_sized_relaxed) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_zero_sized_relaxed());
}

TEST_F(DynamicOutputShapeTest, transpose_v1_2_zero_sized_relaxed) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_zero_sized_relaxed(), true);
}

TEST_F(ValidationTest, transpose_v1_2_zero_sized_relaxed) {
    const Model model = createModel(::generated_tests::transpose_v1_2::get_test_model_zero_sized_relaxed());
    const Request request = createRequest(::generated_tests::transpose_v1_2::get_test_model_zero_sized_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2


namespace generated_tests::transpose_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_quant8();

} // namespace generated_tests::transpose_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2 {

TEST_F(GeneratedTest, transpose_v1_2_zero_sized_quant8) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_zero_sized_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_v1_2_zero_sized_quant8) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_zero_sized_quant8(), true);
}

TEST_F(ValidationTest, transpose_v1_2_zero_sized_quant8) {
    const Model model = createModel(::generated_tests::transpose_v1_2::get_test_model_zero_sized_quant8());
    const Request request = createRequest(::generated_tests::transpose_v1_2::get_test_model_zero_sized_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2


namespace generated_tests::transpose_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_float16();

} // namespace generated_tests::transpose_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2 {

TEST_F(GeneratedTest, transpose_v1_2_zero_sized_float16) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_zero_sized_float16());
}

TEST_F(DynamicOutputShapeTest, transpose_v1_2_zero_sized_float16) {
    Execute(device, ::generated_tests::transpose_v1_2::get_test_model_zero_sized_float16(), true);
}

TEST_F(ValidationTest, transpose_v1_2_zero_sized_float16) {
    const Model model = createModel(::generated_tests::transpose_v1_2::get_test_model_zero_sized_float16());
    const Request request = createRequest(::generated_tests::transpose_v1_2::get_test_model_zero_sized_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_v1_2
