// File: ScopedVariable.hpp
// Author: Mario
// Created: 25.04.2021 12:38 PM
// Project: NominaxRuntime
// 
//                                  Apache License
//                            Version 2.0, January 2004
//                         http://www.apache.org/licenses/
// 
//    TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION
// 
//    1. Definitions.
// 
//       "License" shall mean the terms and conditions for use, reproduction,
//       and distribution as defined by Sections 1 through 9 of this document.
// 
//       "Licensor" shall mean the copyright owner or entity authorized by
//       the copyright owner that is granting the License.
// 
//       "Legal Entity" shall mean the union of the acting entity and all
//       other entities that control, are controlled by, or are under common
//       control with that entity. For the purposes of this definition,
//       "control" means (i) the power, direct or indirect, to cause the
//       direction or management of such entity, whether by contract or
//       otherwise, or (ii) ownership of fifty percent (50%) or more of the
//       outstanding shares, or (iii) beneficial ownership of such entity.
// 
//       "You" (or "Your") shall mean an individual or Legal Entity
//       exercising permissions granted by this License.
// 
//       "Source" form shall mean the preferred form for making modifications,
//       including but not limited to software source code, documentation
//       source, and configuration files.
// 
//       "Object" form shall mean any form resulting from mechanical
//       transformation or translation of a Source form, including but
//       not limited to compiled object code, generated documentation,
//       and conversions to other media types.
// 
//       "Work" shall mean the work of authorship, whether in Source or
//       Object form, made available under the License, as indicated by a
//       copyright notice that is included in or attached to the work
//       (an example is provided in the Appendix below).
// 
//       "Derivative Works" shall mean any work, whether in Source or Object
//       form, that is based on (or derived from) the Work and for which the
//       editorial revisions, annotations, elaborations, or other modifications
//       represent, as a whole, an original work of authorship. For the purposes
//       of this License, Derivative Works shall not include works that remain
//       separable from, or merely link (or bind by name) to the interfaces of,
//       the Work and Derivative Works thereof.
// 
//       "Contribution" shall mean any work of authorship, including
//       the original version of the Work and any modifications or additions
//       to that Work or Derivative Works thereof, that is intentionally
//       submitted to Licensor for inclusion in the Work by the copyright owner
//       or by an individual or Legal Entity authorized to submit on behalf of
//       the copyright owner. For the purposes of this definition, "submitted"
//       means any form of electronic, verbal, or written communication sent
//       to the Licensor or its representatives, including but not limited to
//       communication on electronic mailing lists, source code control systems,
//       and issue tracking systems that are managed by, or on behalf of, the
//       Licensor for the purpose of discussing and improving the Work, but
//       excluding communication that is conspicuously marked or otherwise
//       designated in writing by the copyright owner as "Not a Contribution."
// 
//       "Contributor" shall mean Licensor and any individual or Legal Entity
//       on behalf of whom a Contribution has been received by Licensor and
//       subsequently incorporated within the Work.
// 
//    2. Grant of Copyright License. Subject to the terms and conditions of
//       this License, each Contributor hereby grants to You a perpetual,
//       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
//       copyright license to reproduce, prepare Derivative Works of,
//       publicly display, publicly perform, sublicense, and distribute the
//       Work and such Derivative Works in Source or Object form.
// 
//    3. Grant of Patent License. Subject to the terms and conditions of
//       this License, each Contributor hereby grants to You a perpetual,
//       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
//       (except as stated in this section) patent license to make, have made,
//       use, offer to sell, sell, import, and otherwise transfer the Work,
//       where such license applies only to those patent claims licensable
//       by such Contributor that are necessarily infringed by their
//       Contribution(s) alone or by combination of their Contribution(s)
//       with the Work to which such Contribution(s) was submitted. If You
//       institute patent litigation against any entity (including a
//       cross-claim or counterclaim in a lawsuit) alleging that the Work
//       or a Contribution incorporated within the Work constitutes direct
//       or contributory patent infringement, then any patent licenses
//       granted to You under this License for that Work shall terminate
//       as of the date such litigation is filed.
// 
//    4. Redistribution. You may reproduce and distribute copies of the
//       Work or Derivative Works thereof in any medium, with or without
//       modifications, and in Source or Object form, provided that You
//       meet the following conditions:
// 
//       (a) You must give any other recipients of the Work or
//           Derivative Works a copy of this License; and
// 
//       (b) You must cause any modified files to carry prominent notices
//           stating that You changed the files; and
// 
//       (c) You must retain, in the Source form of any Derivative Works
//           that You distribute, all copyright, patent, trademark, and
//           attribution notices from the Source form of the Work,
//           excluding those notices that do not pertain to any part of
//           the Derivative Works; and
// 
//       (d) If the Work includes a "NOTICE" text file as part of its
//           distribution, then any Derivative Works that You distribute must
//           include a readable copy of the attribution notices contained
//           within such NOTICE file, excluding those notices that do not
//           pertain to any part of the Derivative Works, in at least one
//           of the following places: within a NOTICE text file distributed
//           as part of the Derivative Works; within the Source form or
//           documentation, if provided along with the Derivative Works; or,
//           within a display generated by the Derivative Works, if and
//           wherever such third-party notices normally appear. The contents
//           of the NOTICE file are for informational purposes only and
//           do not modify the License. You may add Your own attribution
//           notices within Derivative Works that You distribute, alongside
//           or as an addendum to the NOTICE text from the Work, provided
//           that such additional attribution notices cannot be construed
//           as modifying the License.
// 
//       You may add Your own copyright statement to Your modifications and
//       may provide additional or different license terms and conditions
//       for use, reproduction, or distribution of Your modifications, or
//       for any such Derivative Works as a whole, provided Your use,
//       reproduction, and distribution of the Work otherwise complies with
//       the conditions stated in this License.
// 
//    5. Submission of Contributions. Unless You explicitly state otherwise,
//       any Contribution intentionally submitted for inclusion in the Work
//       by You to the Licensor shall be under the terms and conditions of
//       this License, without any additional terms or conditions.
//       Notwithstanding the above, nothing herein shall supersede or modify
//       the terms of any separate license agreement you may have executed
//       with Licensor regarding such Contributions.
// 
//    6. Trademarks. This License does not grant permission to use the trade
//       names, trademarks, service marks, or product names of the Licensor,
//       except as required for reasonable and customary use in describing the
//       origin of the Work and reproducing the content of the NOTICE file.
// 
//    7. Disclaimer of Warranty. Unless required by applicable law or
//       agreed to in writing, Licensor provides the Work (and each
//       Contributor provides its Contributions) on an "AS IS" BASIS,
//       WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
//       implied, including, without limitation, any warranties or conditions
//       of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A
//       PARTICULAR PURPOSE. You are solely responsible for determining the
//       appropriateness of using or redistributing the Work and assume any
//       risks associated with Your exercise of permissions under this License.
// 
//    8. Limitation of Liability. In no event and under no legal theory,
//       whether in tort (including negligence), contract, or otherwise,
//       unless required by applicable law (such as deliberate and grossly
//       negligent acts) or agreed to in writing, shall any Contributor be
//       liable to You for damages, including any direct, indirect, special,
//       incidental, or consequential damages of any character arising as a
//       result of this License or out of the use or inability to use the
//       Work (including but not limited to damages for loss of goodwill,
//       work stoppage, computer failure or malfunction, or any and all
//       other commercial damages or losses), even if such Contributor
//       has been advised of the possibility of such damages.
// 
//    9. Accepting Warranty or Additional Liability. While redistributing
//       the Work or Derivative Works thereof, You may choose to offer,
//       and charge a fee for, acceptance of support, warranty, indemnity,
//       or other liability obligations and/or rights consistent with this
//       License. However, in accepting such obligations, You may act only
//       on Your own behalf and on Your sole responsibility, not on behalf
//       of any other Contributor, and only if You agree to indemnify,
//       defend, and hold each Contributor harmless for any liability
//       incurred by, or claims asserted against, such Contributor by reason
//       of your accepting any such warranty or additional liability.
// 
//    END OF TERMS AND CONDITIONS
// 
//    APPENDIX: How to apply the Apache License to your work.
// 
//       To apply the Apache License to your work, attach the following
//       boilerplate notice, with the fields enclosed by brackets "[]"
//       replaced with your own identifying information. (Don't include
//       the brackets!)  The text should be enclosed in the appropriate
//       comment syntax for the file format. We also recommend that a
//       file or class name and description of purpose be included on the
//       same "printed page" as the copyright notice for easier
//       identification within third-party archives.
// 
//    Copyright 2021 Mario Sieg "pinsrq" <mt3000@gmx.de>
// 
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.

#pragma once

#include <cmath>
#include <type_traits>

#include "OptBase.hpp"
#include "Instruction.hpp"
#include "Stream.hpp"
#include "StreamScalar.hpp"
#include "../Common/BranchHint.hpp"

namespace Nominax
{
	/// <summary>
	/// Single stack-bounded variable.
	/// When created it created a push instruction in the stream,
	/// when destroyed (RAII) it created a pop instruction.
	/// </summary>
	template <typename T> requires StreamScalar<T>
	struct ScopedVariable final
	{
		ScopedVariable(const ScopedVariable&) = delete;

		ScopedVariable(ScopedVariable&&) = delete;

		auto operator =(const ScopedVariable&) -> ScopedVariable& = delete;

		auto operator =(ScopedVariable&&) -> ScopedVariable& = delete;

		/// <summary>
		/// Arithmetic addition.
		/// Implemented for all types.
		/// self += value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto Add(T value) -> ScopedVariable&;

		/// <summary>
		/// Arithmetic addition.
		/// Implemented for all types.
		/// self += value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto operator +=(T value) -> ScopedVariable&;

		/// <summary>
		/// Arithmetic subtraction.
		/// Implemented for all types.
		/// self -= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto Sub(T value) -> ScopedVariable&;

		/// <summary>
		/// Arithmetic subtraction.
		/// Implemented for all types.
		/// self -= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto operator -=(T value) -> ScopedVariable&;

		/// <summary>
		/// Arithmetic multiplication.
		/// Implemented for all types.
		/// self *= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto Mul(T value) -> ScopedVariable&;

		/// <summary>
		/// Arithmetic multiplication.
		/// Implemented for all types.
		/// self *= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto operator *=(T value) -> ScopedVariable&;

		/// <summary>
		/// Arithmetic division.
		/// Implemented for all types.
		/// self /= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto Div(T value) -> ScopedVariable&;

		/// <summary>
		/// Arithmetic division.
		/// Implemented for all types.
		/// self /= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto operator /=(T value) -> ScopedVariable&;

		/// <summary>
		/// Arithmetic modulo.
		/// Implemented for all types.
		/// self %= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto Mod(T value) -> ScopedVariable&;

		/// <summary>
		/// Arithmetic modulo.
		/// Implemented for all types.
		/// self %= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto operator %=(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise &.
		/// Implemented for int and uint.
		/// self &= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto And(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise &.
		/// Implemented for int and uint.
		/// self &= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto operator &=(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise &.
		/// Implemented for int and uint.
		/// self |= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto Or(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise &.
		/// Implemented for int and uint.
		/// self |= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto operator |=(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise ^.
		/// Implemented for int and uint.
		/// self ^= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto Xor(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise ^.
		/// Implemented for int and uint.
		/// self ^= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto operator ^=(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise <<.
		/// Implemented for int and uint.
		/// self <<= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto ShiftLeft(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise <<.
		/// Implemented for int and uint.
		/// self <<= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto operator <<=(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise >>.
		/// Implemented for int and uint.
		/// self >>= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto ShiftRight(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise >>.
		/// Implemented for int and uint.
		/// self >>= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto operator >>=(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise <<<.
		/// Implemented for int and uint.
		/// self <<<= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto RotateLeft(T value) -> ScopedVariable&;

		/// <summary>
		/// Bitwise >>.
		/// Implemented for int and uint.
		/// self >>>= value
		/// </summary>
		/// <param name="value">The second operand.</param>
		/// <returns>self</returns>
		auto RotateRight(T value) -> ScopedVariable&;

		/// <summary>
		/// Pop variable from stack.
		/// </summary>
		~ScopedVariable();

		/// <summary>
		/// Returns the attached stream.
		/// </summary>
		/// <returns></returns>
		auto AttachedStream() const noexcept(true) -> const Stream&;

		auto Unwrap() const -> T;

	private:
		friend class Stream;

		/// <summary>
		/// Create a variable with specified value.
		/// </summary>
		/// <param name="attached"></param>
		/// <param name="value"></param>
		ScopedVariable(Stream& attached, T value);

		auto Push(T value) -> ScopedVariable&;
		auto DoNothing() -> ScopedVariable&;

		Stream& Attached_;
	};

	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::Unwrap() const -> T
	{
#if NOMINAX_DEBUG
		return this->Attached_.Back().template Unwrap<T>().value();
#else
        return *this->Attached_.Back().Unwrap<T>();
#endif
	}

	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::AttachedStream() const noexcept(true) -> const Stream&
	{
		return this->Attached_;
	}

	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::DoNothing() -> ScopedVariable&
	{
		if (NOMINAX_UNLIKELY(OptLevel == OptimizationLevel::Off))
		{
			// ReSharper disable once CppRedundantTemplateKeyword
			this->Attached_.template Do<Instruction::NOp>();
		}
		return *this;
	}

	template <>
	auto ScopedVariable<F64>::Push(F64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<I64>::Push(I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::Push(U64 value) -> ScopedVariable&;

	template <>
	inline ScopedVariable<F64>::ScopedVariable(Stream& attached, const F64 value) : Attached_ {attached}
	{
		this->Push(value);
	}

	template <>
	inline ScopedVariable<I64>::ScopedVariable(Stream& attached, const I64 value) : Attached_ {attached}
	{
		this->Push(value);
	}

	template <>
	inline ScopedVariable<U64>::ScopedVariable(Stream& attached, const U64 value) : Attached_ {attached}
	{
		this->Push(value);
	}

	template <>
	auto ScopedVariable<F64>::Add(F64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<I64>::Add(I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::Add(U64 value) -> ScopedVariable&;

	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::operator+=(const T value) -> ScopedVariable&
	{
		return this->Add(value);
	}

	template <>
	auto ScopedVariable<F64>::Sub(F64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<I64>::Sub(I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::Sub(U64 value) -> ScopedVariable&;

	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::operator-=(const T value) -> ScopedVariable&
	{
		return this->Add(value);
	}

	template <>
	auto ScopedVariable<F64>::Mul(F64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<I64>::Mul(I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::Mul(U64 value) -> ScopedVariable&;


	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::operator*=(const T value) -> ScopedVariable&
	{
		return this->Mul(value);
	}

	template <>
	auto ScopedVariable<F64>::Div(F64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<I64>::Div(I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::Div(U64 value) -> ScopedVariable&;


	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::operator/=(const T value) -> ScopedVariable&
	{
		return this->Div(value);
	}

	template <>
	auto ScopedVariable<F64>::Mod(F64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<I64>::Mod(I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::Mod(U64 value) -> ScopedVariable&;

	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::operator%=(const T value) -> ScopedVariable&
	{
		return this->Mod(value);
	}

	template <>
	auto ScopedVariable<I64>::And(I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::And(U64 value) -> ScopedVariable&;

	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::operator&=(const T value) -> ScopedVariable&
	{
		return this->And(value);
	}

	template <>
	auto ScopedVariable<I64>::Or(const I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::Or(const U64 value) -> ScopedVariable&;

	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::operator|=(const T value) -> ScopedVariable&
	{
		return this->Or(value);
	}

	template <>
	auto ScopedVariable<I64>::Xor(const I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::Xor(const U64 value) -> ScopedVariable&;

	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::operator^=(const T value) -> ScopedVariable&
	{
		return this->Xor(value);
	}

	template <>
	auto ScopedVariable<I64>::ShiftLeft(const I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::ShiftLeft(const U64 value) -> ScopedVariable&;

	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::operator<<=(const T value) -> ScopedVariable&
	{
		return this->ShiftLeft(value);
	}

	template <>
	auto ScopedVariable<I64>::ShiftRight(const I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::ShiftRight(const U64 value) -> ScopedVariable&;

	template <typename T> requires StreamScalar<T>
	inline auto ScopedVariable<T>::operator>>=(const T value) -> ScopedVariable&
	{
		return this->ShiftRight(value);
	}

	template <>
	auto ScopedVariable<I64>::RotateLeft(I64 value) -> ScopedVariable&;
	template <>
	auto ScopedVariable<U64>::RotateLeft(U64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<I64>::RotateRight(I64 value) -> ScopedVariable&;

	template <>
	auto ScopedVariable<U64>::RotateRight(U64 value) -> ScopedVariable&;

	template <typename T> requires StreamScalar<T>
	inline ScopedVariable<T>::~ScopedVariable()
	{
		Attached_.Do<Instruction::Pop>();
	}

	/// <summary>
	/// Stream variable with runtime type: int
	/// </summary>
	using ScopedInt = ScopedVariable<I64>;

	/// <summary>
	/// Stream variable with runtime type: uint
	/// </summary>
	using ScopedUInt = ScopedVariable<U64>;

	/// <summary>
	/// Stream variable with runtime type: F32
	/// </summary>
	using ScopedF32 = ScopedVariable<F64>;
}
