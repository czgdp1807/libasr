#ifndef LFORTRAN_ASR_TO_WASM_H
#define LFORTRAN_ASR_TO_WASM_H

#include <libasr/asr.h>

namespace LFortran {

    // Generates a wasm binary stream from ASR
    Result<Vec<uint8_t>> asr_to_wasm_bytes_stream(ASR::TranslationUnit_t &asr, Allocator &al);

    // Generates a wasm binary to `filename`
    Result<int> asr_to_wasm(ASR::TranslationUnit_t &asr, Allocator &al,
            const std::string &filename, bool time_report);

} // namespace LFortran

#endif // LFORTRAN_ASR_TO_WASM_H
