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

/* private property goes here */
static tinywm_t *m_tw = NULL;

/* private function goes here */
static void m_foo(TINYWM_CALLBACK fptr, void *arg);
static void m_bar();

tinywm_t *tinywm_new() 
{
    m_tw = (tinywm_t*)malloc(sizeof(tinywm_t));
    if (!m_tw) return NULL;
    m_tw->foo = m_foo;
    m_tw->bar = m_bar;
    return m_tw;
}

void tinywm_delete(tinywm_t* tw) 
{ 
    if (!tw) return;
    tw->foo = NULL; tw->bar = NULL;
    free(tw); tw = NULL; 
}

/*
 * TODO: just call the function pointer
 * arg is often thisptr like C++ this->func() style
 */
static void m_foo(TINYWM_CALLBACK fptr, void *arg) 
{
    if (fptr) {
        fptr(m_tw, arg);
    }
}

static void m_bar() {}
