/*
 * DOSKit
 * Copyright (C) 2014  Matthew Vilim
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

#include "DSKDrive.h"

@class DSKEmulator, DSKDrive;

@interface DSKFileSystem : NSObject

@property (readonly) NSMutableArray *drives;

- (instancetype)initWithEmulator:(DSKEmulator *)emulator;
- (DSKDrive *)mountDriveLetter:(DSKDriveLetter)letter atURL:(NSURL *)url error:(NSError **)outError;

@end