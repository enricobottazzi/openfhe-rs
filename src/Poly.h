#pragma once

#include "openfhe/core/lattice/hal/lat-backend.h"

namespace openfhe
{

class Poly final
{
    lbcrypto::Poly m_poly;
public:
    Poly(lbcrypto::Poly&& poly) noexcept;
    Poly(const Poly&) = delete;
    Poly(Poly&&) = delete;
    Poly& operator=(const Poly&) = delete;
    Poly& operator=(Poly&&) = delete;
};

class PolyParams final
{
    std::shared_ptr<lbcrypto::Poly::Params> m_params;
public:
    PolyParams() = default;
    PolyParams(const std::shared_ptr<lbcrypto::Poly::Params>& params) noexcept;
    PolyParams(const PolyParams&) = delete;
    PolyParams(PolyParams&&) = delete;
    PolyParams& operator=(const PolyParams&) = delete;
    PolyParams& operator=(PolyParams&&) = delete;

    [[nodiscard]] const std::shared_ptr<lbcrypto::Poly::Params>& GetRef() const noexcept;
};

// Generator functions
[[nodiscard]] std::unique_ptr<PolyParams> PolyGenNullParams();

} // openfhe