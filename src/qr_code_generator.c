/**
 * Copyright (C) 2015 NIPE-SYSTEMS
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <qrencode.h>

#include "gtk_window.h"
#include "qr_generator.h"
#include "vcard_generator.h"
#include "icalendar_generator.h"

int main(void)
{
	// bugfix for comma in floating point outputs with printf
	gtk_disable_setlocale();
	
	gtk_init(NULL, NULL);
	
	gtk_window_init();
	
	gtk_main();
	
	qr_free();
	
	return 0;
}