/*                                                                              
 * Copyright (C) 2014 Leslie Zhai <xiang.zhai@i-soft.com.cn>                      
 *                                                                              
 * This program is free software: you can redistribute it and/or modify         
 * it under the terms of the GNU General Public License as published by         
 * the Free Software Foundation, either version 3 of the License, or            
 * any later version.                                                           
 *                                                                              
 * This program is distributed in the hope that it will be useful,              
 * but WITHOUT ANY WARRANTY; without even the implied warranty of               
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                
 * GNU General Public License for more details.                                 
 *                                                                              
 * You should have received a copy of the GNU General Public License            
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.        
 */

#include <stdlib.h>

#include "tinywm.h"

static void m_foo(TINYWM_CALLBACK fptr, void *arg);
static void m_bar();

tinywm_t *tinywm_new() 
{
    tinywm_t *ret = NULL;
    ret = (tinywm_t*)malloc(sizeof(tinywm_t));
    if (!ret) return ret;
    ret->foo = m_foo;
    ret->bar = m_bar;
    return ret;
}

void tinywm_delete(tinywm_t* tw) 
{ 
    if (!tw) return;
    tw->foo = NULL; tw->bar = NULL;
    free(tw); tw = NULL; 
}
