#include "Poly.h"

namespace openfhe
{

Poly::Poly(lbcrypto::Poly&& poly) noexcept
    : m_poly(std::move(poly))
{ }

PolyParams::PolyParams(const std::shared_ptr<lbcrypto::Poly::Params>& params) noexcept
    : m_params(params)
{ }

const std::shared_ptr<lbcrypto::Poly::Params>& PolyParams::GetRef() const noexcept
{
    return m_params;
}

// Generator functions
std::unique_ptr<PolyParams> PolyGenNullParams()
{
    return std::make_unique<PolyParams>();
}

} // openfhe