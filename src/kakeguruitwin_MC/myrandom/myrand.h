﻿/*! \file myrand.h
    \brief 自作乱数クラスの宣言

    Copyright © 2015 @dc1394 All Rights Reserved.
    This software is released under the BSD 2-Clause License.
*/

#ifndef _MYRAND_H_
#define _MYRAND_H_

#pragma once

#include <cstdint>  // for std::int32_t
#include <random>   // for std::mt19937

namespace myrandom {
    //! A class.
    /*!
        自作乱数クラス
    */
    class MyRand final {
        // #region コンストラクタ・デストラクタ

    public:
        //! A constructor.
        /*!
            唯一のコンストラクタ
            \param min 乱数分布の最小値
            \param max 乱数分布の最大値
        */
        MyRand(std::int32_t min, std::int32_t max);

        //! A destructor.
        /*!
            デフォルトデストラクタ
        */
        ~MyRand() = default;

        // #endregion コンストラクタ・デストラクタ

        // #region メンバ関数

        //!  A public member function.
        /*!
            [min, max]の閉区間で一様乱数を生成する
        */
        std::int32_t myrand()
        {
            return distribution_(randengine_);
        }

        // #endregion メンバ関数

        // #region メンバ変数

    private:
        //! A private member variable.
        /*!
            乱数の分布
        */
        std::uniform_int_distribution<std::int32_t> distribution_;
        
        //! A private member variable.
        /*!
            乱数エンジン
        */
        std::mt19937 randengine_;

        // #region 禁止されたコンストラクタ・メンバ関数

        //! A private constructor (deleted).
        /*!
            デフォルトコンストラクタ（禁止）
        */
        MyRand() = delete;

        //! A private copy constructor (deleted).
        /*!
            コピーコンストラクタ（禁止）
            \param dummy コピー元のオブジェクト（未使用）
        */
        MyRand(MyRand const & dummy) = delete;

        //! A private member function (deleted).
        /*!
            operator=()の宣言（禁止）
            \param dummy コピー元のオブジェクト（未使用）
            \return コピー元のオブジェクト
        */
        MyRand & operator=(MyRand const & dummy) = delete;

        // #endregion 禁止されたコンストラクタ・メンバ関数
    };

    MyRand::MyRand(std::int32_t min, std::int32_t max) :
        distribution_(min, max)
    {
        // ランダムデバイス
        std::random_device rnd;

        // 乱数エンジン
        randengine_ = std::mt19937(rnd());
    }
}

#endif  // _MYRAND_H_
