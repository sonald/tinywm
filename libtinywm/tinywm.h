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

#ifndef TINYWM_H
#define TINYWM_H

typedef void (*TINYWM_CALLBACK)(void*, void*);

typedef struct {
    /* public property goes here */
    int handler;

    /* public function goes here */
    void (*foo)(TINYWM_CALLBACK, void*);
    void (*bar)();
} tinywm_t;

/*
 * C++ style constructor/destructor
 * but it is not able to simulate polymorphic easily, isn' it?
 */
tinywm_t *tinywm_new();
void tinywm_delete(tinywm_t*);

#endif /* TINYWM_H */
