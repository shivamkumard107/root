// @(#)root/reflex:$Name:$:$Id:$
// Author: Stefan Roiser 2004

// Copyright CERN, CH-1211 Geneva 23, 2004-2005, All rights reserved.
//
// Permission to use, copy, modify, and distribute this software for any
// purpose is hereby granted without fee, provided that this copyright and
// permissions notice appear in all copies and derivatives.
//
// This software is provided "as is" without express or implied warranty.

#ifndef ROOT_Reflex_FuncHandler
#define ROOT_Reflex_FuncHandler


// Include files
#include "Reflex/Kernel.h"
#include <string>


namespace ROOT {
  namespace Reflex {


    class FuncHandler {

    public:

      template < class R, class C >
        static const std::string demangleFunRetType(R(C::*)());

      template < class R, class C, class T0>
        static const std::string demangleFunRetType(R(C::*)(T0));

      template < class R, class C, class T0, class T1 >
        static const std::string demangleFunRetType(R(C::*)(T0,T1));

      template < class R, class C, class T0, class T1, class T2 >
        static const std::string demangleFunRetType(R(C::*)(T0,T1,T2));

      template < class R, class C, class T0, class T1, class T2, class T3 >
        static const std::string demangleFunRetType(R(C::*)(T0,T1,T2,T3));

      template < class R, class C, class T0, class T1, class T2, class T3, class T4 >
        static const std::string demangleFunRetType(R(C::*)(T0,T1,T2,T3,T4));


      template < class R, class C >
        static const std::string demangleFunParTypes(R(C::*)());

      template < class R, class C, class T0>
        static const std::string demangleFunParTypes(R(C::*)(T0));

      template < class R, class C, class T0, class T1 >
        static const std::string demangleFunParTypes(R(C::*)(T0,T1));

      template < class R, class C, class T0, class T1, class T2 >
        static const std::string demangleFunParTypes(R(C::*)(T0,T1,T2));

      template < class R, class C, class T0, class T1, class T2, class T3 >
        static const std::string demangleFunParTypes(R(C::*)(T0,T1,T2,T3));

      template < class R, class C, class T0, class T1, class T2, class T3, class T4 >
        static const std::string demangleFunParTypes(R(C::*)(T0,T1,T2,T3,T4));


      template < class R >
        static const std::string demangleFunRetType(R(*)());

      template < class R, class T0>
        static const std::string demangleFunRetType(R(*)(T0));

      template < class R, class T0, class T1 >
        static const std::string demangleFunRetType(R(*)(T0,T1));

      template < class R, class T0, class T1, class T2 >
        static const std::string demangleFunRetType(R(*)(T0,T1,T2));

      template < class R, class T0, class T1, class T2, class T3 >
        static const std::string demangleFunRetType(R(*)(T0,T1,T2,T3));

      template < class R, class T0, class T1, class T2, class T3, class T4 >
        static const std::string demangleFunRetType(R(*)(T0,T1,T2,T3,T4));

 
      template < class R >
        static const std::string demangleFunParTypes(R(*)());

      template < class R, class T0>
        static const std::string demangleFunParTypes(R(*)(T0));

      template < class R, class T0, class T1 >
        static const std::string demangleFunParTypes(R(*)(T0,T1));

      template < class R, class T0, class T1, class T2 >
        static const std::string demangleFunParTypes(R(*)(T0,T1,T2));

      template < class R, class T0, class T1, class T2, class T3 >
        static const std::string demangleFunParTypes(R(*)(T0,T1,T2,T3));

      template < class R, class T0, class T1, class T2, class T3, class T4 >
        static const std::string demangleFunParTypes(R(*)(T0,T1,T2,T3,T4));

    }; // class FuncHandler
  } // namespace Reflex
} // namespace ROOT

#endif // ROOT_Reflex_FuncHandler
