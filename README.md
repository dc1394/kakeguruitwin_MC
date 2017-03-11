﻿================================================================================
【 ソフト名 】kakegruitwin_MC
【  作成者  】@dc1394
================================================================================

★これは何？
　賭ケグルイ双(1)のpp.100-124の内容を、モンテカルロ・シミュレーションで確かめる
　コードです。ビルドには、以下のライブラリが必要です。
　・Boost C++ Libraries
　・Intel® Threading Building Blocks (Intel® TBB)

★更新履歴
　2017/3/11 ver.1.0   README.mdを書いて公開。

★ライセンス
　このソフトはフリーソフトウェアです（2条項BSDライセンス）。
--------------------------------------------------------------------------------
　kakegruitwin_MC
　Copyright (C) 2017 @dc1394

　ソースコード形式であれバイナリ形式であれ、変更の有無に関わらず、以下の条件を満
　たす限りにおいて、再配布および利用を許可します。

　1.ソースコード形式で再配布する場合、上記著作権表示、本条件書および第2項の責任
　限定規定を必ず含めてください。
　2.バイナリ形式で再配布する場合、上記著作権表示、 本条件書および下記責任限定規
　定を、配布物とともに提供される文書 および/または 他の資料に必ず含めてください。

　本ソフトウェアは著作権者およびコントリビューターによって「現状のまま」提供され
　ており、明示黙示を問わず、商用品として通常そなえるべき品質をそなえているとの保
　証も、特定の目的に適合するとの保証を含め、何の保証もなされません。著作権者もコ
　ントリビューターも、事由のいかんを問わず、損害発生の原因いかんを問わず、かつ責
　任の根拠が契約であるか厳格責任であるか (過失その他)不法行為であるかを問わず、
　仮にそのような損害が発生する可能性を知らされていたとしても、本ソフトウェアの使
　用によって発生した (代替品または代替サービスの提供、使用機会の喪失、データの喪
　失、利益の損失、業務の中断、またそれに限定されない)直接損害、間接損害、偶発的
　な損害、特別損害、懲罰的損害または結果損害のいずれに対しても一切責任を負いませ
　ん。

  Copyright (c) 2017, @dc1394
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:
  
  1. Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer. 
  2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution. 
  
  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------

  kakegruitwin_MCにはBoostコミュニティによるBoost C++ Librariesを使用してい
　ます。こちらのライセンスは Boostライセンス になります。

/* Boost Software License - Version 1.0 - August 17th, 2003
*
* Permission is hereby granted, free of charge, to any person or organization
* obtaining a copy of the software and accompanying documentation covered by
* this license (the "Software") to use, reproduce, display, distribute,
* execute, and transmit the Software, and to prepare derivative works of the
* Software, and to permit third-parties to whom the Software is furnished to
* do so, all subject to the following:

* The copyright notices in the Software and this entire statement, including
* the above license grant, this restriction and the following disclaimer,
* must be included in all copies of the Software, in whole or in part, and
* all derivative works of the Software, unless such copies or derivative
* works are solely in the form of machine-executable object code generated by
* a source language processor.

* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
* SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
* FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
* DEALINGS IN THE SOFTWARE.
*/

　kakegruitwin_MCにはIntel CorporationによるIntel® Threading Building
　Blocks(Intel® TBB)を使用しています。
  こちらのライセンスは GNU General Public License, version 2 になります。
