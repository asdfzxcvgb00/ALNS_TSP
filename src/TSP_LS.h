/* ALNS_Framework - a framework to develop ALNS based solvers
 *
 * Copyright (C) 2012 Renaud Masson
 *
 * This library is free software; you can redistribute it and/or
 * modify it either under the terms of the GNU Lesser General Public
 * License version 3 as published by the Free Software Foundation
 * (the "LGPL"). If you do not alter this notice, a recipient may use
 * your version of this file under the LGPL.
 *
 * You should have received a copy of the LGPL along with this library
 * in the file COPYING-LGPL-3; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Suite 500, Boston, MA 02110-1335, USA
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY
 * OF ANY KIND, either express or implied. See the LGPL for
 * the specific language governing rights and limitations.
 *
 * The Original Code is the ALNS_Framework library.
 *
 *
 * Contributor(s):
 *	Renaud Masson
 */

#ifndef TSP_LS_H_
#define TSP_LS_H_

#include <iostream>
#include "ALNS_inc.h"

class ISolution;

class TSP_LS: public ILocalSearch {
public:
	TSP_LS(std::string name);
	virtual ~TSP_LS();
	virtual bool performLocalSearch(ISolution& sol);

	std::string getName(){return name;};
private:
	std::string name;
};

#endif /* TSP_LS_H_ */
