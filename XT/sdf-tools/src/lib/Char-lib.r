\literate
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
%
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
%
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
%
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

% $Id: Char-lib.r,v 1.1.1.1 2001/05/31 14:20:51 mdejonge Exp $

\begin{code}
module Char-lib
(*
	Author: Joost Visser (Joost.Visser@cwi.nl)

	This library module contains some auxiliary strategies
	for testing and manipulating characters.
*)

imports
  lib

rules
  
  isNum:	x	-> <leq>(48,x) where <leq>(x,57)
  isUpper:	x	-> <leq>(65,x) where <leq>(x,90)
  isLower:	x	-> <leq>(97,x) where <leq>(x,122)
  isHyphen:     45	-> ()

strategies

  isAlphaNumHyphen = isNum + isUpper + isLower + isHyphen
  isAlphaNum       = isNum + isUpper + isLower
  isAlpha	   =         isUpper + isLower
\end{code}
