// Copyright (C) 2018-2025 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <openvino/frontend/node_context.hpp>

ov::OutputVector translate_lookup_table_find_op(const ov::frontend::NodeContext& node);
ov::frontend::NamedOutputVector translate_string_split(const ov::frontend::NodeContext& node);
ov::OutputVector translate_sentencepiece_op(const ov::frontend::NodeContext& node);
ov::frontend::NamedOutputVector translate_ragged_tensor_to_sparse(const ov::frontend::NodeContext& node);
ov::OutputVector translate_static_regex_replace(const ov::frontend::NodeContext& node);
ov::OutputVector translate_regex_split_with_offsets(const ov::frontend::NodeContext& node);
ov::OutputVector translate_ragged_tensor_to_tensor(const ov::frontend::NodeContext& node);
ov::OutputVector translate_equal(const ov::frontend::NodeContext& node);
ov::OutputVector translate_string_to_hash_bucket_fast(const ov::frontend::NodeContext& node);
ov::OutputVector translate_wordpiece_tokenize_with_offsets(const ov::frontend::NodeContext& node);
ov::OutputVector translate_string_lower(const ov::frontend::NodeContext& node);
ov::OutputVector translate_case_fold_utf8(const ov::frontend::NodeContext& node);
ov::OutputVector translate_normalize_utf8(const ov::frontend::NodeContext& node);
