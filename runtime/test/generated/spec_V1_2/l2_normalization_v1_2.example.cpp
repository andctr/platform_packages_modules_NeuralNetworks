// Generated from l2_normalization_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"

using namespace test_helper;

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim4_axis3() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f, 0.36f, 0.48f, 0.8f, 0.48f, 0.6f, 0.64f, 0.8f, 0.36f, 0.48f, 0.64f, 0.6f, 0.48f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim4_axis3_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f, 0.36f, 0.48f, 0.8f, 0.48f, 0.6f, 0.64f, 0.8f, 0.36f, 0.48f, 0.64f, 0.6f, 0.48f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim4_axis3_relaxed() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f, 0.36f, 0.48f, 0.8f, 0.48f, 0.6f, 0.64f, 0.8f, 0.36f, 0.48f, 0.64f, 0.6f, 0.48f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim4_axis3_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f, 0.36f, 0.48f, 0.8f, 0.48f, 0.6f, 0.64f, 0.8f, 0.36f, 0.48f, 0.64f, 0.6f, 0.48f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim4_axis3_float16() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.0f, 0.6000000238418579f, 0.36000001430511475f, 0.47999998927116394f, 0.800000011920929f, 0.47999998927116394f, 0.6000000238418579f, 0.6399999856948853f, 0.800000011920929f, 0.36000001430511475f, 0.47999998927116394f, 0.6399999856948853f, 0.6000000238418579f, 0.47999998927116394f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim4_axis3_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.0f, 0.6000000238418579f, 0.36000001430511475f, 0.47999998927116394f, 0.800000011920929f, 0.47999998927116394f, 0.6000000238418579f, 0.6399999856948853f, 0.800000011920929f, 0.36000001430511475f, 0.47999998927116394f, 0.6399999856948853f, 0.6000000238418579f, 0.47999998927116394f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim4_axis3_quant8() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72, 112, 92, 32, 152, 32, 122, 122, 152, 232, 152, 182, 192, 232, 122, 152, 192, 182, 152}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230, 230, 205, 128, 230, 128, 205, 174, 189, 230, 189, 205, 210, 230, 174, 189, 210, 205, 189}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim4_axis3_quant8_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230, 230, 205, 128, 230, 128, 205, 174, 189, 230, 189, 205, 210, 230, 174, 189, 210, 205, 189}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72, 112, 92, 32, 152, 32, 122, 122, 152, 232, 152, 182, 192, 232, 122, 152, 192, 182, 152}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim3_axis2() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim3_axis2_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim3_axis2_relaxed() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim3_axis2_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim3_axis2_float16() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.0f, 0.6000000238418579f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim3_axis2_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.0f, 0.6000000238418579f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim3_axis2_quant8() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72, 112, 92, 32, 152, 32, 122}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230, 230, 205, 128, 230, 128, 205}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim3_axis2_quant8_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230, 230, 205, 128, 230, 128, 205}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72, 112, 92, 32, 152, 32, 122}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim2_axis1() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim2_axis1_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim2_axis1_relaxed() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim2_axis1_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim2_axis1_float16() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim2_axis1_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim2_axis1_quant8() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim2_axis1_quant8_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim1_axis0() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim1_axis0_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim1_axis0_relaxed() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim1_axis0_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim1_axis0_float16() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim1_axis0_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim1_axis0_quant8() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_dim1_axis0_quant8_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim4_axis3() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f, 0.36f, 0.48f, 0.8f, 0.48f, 0.6f, 0.64f, 0.8f, 0.36f, 0.48f, 0.64f, 0.6f, 0.48f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim4_axis3_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f, 0.36f, 0.48f, 0.8f, 0.48f, 0.6f, 0.64f, 0.8f, 0.36f, 0.48f, 0.64f, 0.6f, 0.48f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim4_axis3_relaxed() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f, 0.36f, 0.48f, 0.8f, 0.48f, 0.6f, 0.64f, 0.8f, 0.36f, 0.48f, 0.64f, 0.6f, 0.48f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim4_axis3_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f, 0.36f, 0.48f, 0.8f, 0.48f, 0.6f, 0.64f, 0.8f, 0.36f, 0.48f, 0.64f, 0.6f, 0.48f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim4_axis3_float16() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.0f, 0.6000000238418579f, 0.36000001430511475f, 0.47999998927116394f, 0.800000011920929f, 0.47999998927116394f, 0.6000000238418579f, 0.6399999856948853f, 0.800000011920929f, 0.36000001430511475f, 0.47999998927116394f, 0.6399999856948853f, 0.6000000238418579f, 0.47999998927116394f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim4_axis3_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.0f, 0.6000000238418579f, 0.36000001430511475f, 0.47999998927116394f, 0.800000011920929f, 0.47999998927116394f, 0.6000000238418579f, 0.6399999856948853f, 0.800000011920929f, 0.36000001430511475f, 0.47999998927116394f, 0.6399999856948853f, 0.6000000238418579f, 0.47999998927116394f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f, 9.0f, 12.0f, 20.0f, 12.0f, 15.0f, 16.0f, 20.0f, 9.0f, 12.0f, 16.0f, 15.0f, 12.0f}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim4_axis3_quant8() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72, 112, 92, 32, 152, 32, 122, 122, 152, 232, 152, 182, 192, 232, 122, 152, 192, 182, 152}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230, 230, 205, 128, 230, 128, 205, 174, 189, 230, 189, 205, 210, 230, 174, 189, 210, 205, 189}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim4_axis3_quant8_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230, 230, 205, 128, 230, 128, 205, 174, 189, 230, 189, 205, 210, 230, 174, 189, 210, 205, 189}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72, 112, 92, 32, 152, 32, 122, 122, 152, 232, 152, 182, 192, 232, 122, 152, 192, 182, 152}),
                .dimensions = {2, 2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim3_axis2() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim3_axis2_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim3_axis2_relaxed() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim3_axis2_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f, 0.8f, 0.6f, 0.0f, 0.8f, 0.0f, 0.6f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim3_axis2_float16() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.0f, 0.6000000238418579f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim3_axis2_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f, 0.0f, 0.6000000238418579f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f, 8.0f, 6.0f, 0.0f, 12.0f, 0.0f, 9.0f}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim3_axis2_quant8() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72, 112, 92, 32, 152, 32, 122}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230, 230, 205, 128, 230, 128, 205}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim3_axis2_quant8_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230, 230, 205, 128, 230, 128, 205}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72, 112, 92, 32, 152, 32, 122}),
                .dimensions = {2, 2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim2_axis1() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim2_axis1_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim2_axis1_relaxed() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim2_axis1_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f, 0.6f, 0.0f, 0.8f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim2_axis1_float16() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim2_axis1_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f, 0.6000000238418579f, 0.0f, 0.800000011920929f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f, 3.0f, 0.0f, 4.0f}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim2_axis1_quant8() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim2_axis1_quant8_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230, 205, 128, 230}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72, 62, 32, 72}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim1_axis0() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim1_axis0_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim1_axis0_relaxed() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim1_axis0_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.6f, 0.8f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim1_axis0_float16() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim1_axis0_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.6000000238418579f, 0.800000011920929f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 3.0f, 4.0f}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim1_axis0_quant8() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2

namespace generated_tests::l2_normalization_v1_2 {

const TestModel& get_test_model_relaxed_dim1_axis0_quant8_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {2},
        .isRelaxed = true,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({128, 205, 230}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0078125f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32, 62, 72}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({32}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.1f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 32
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {2, 3, 4},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::L2_NORMALIZATION
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::l2_normalization_v1_2
