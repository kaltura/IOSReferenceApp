// ===================================================================================================
//                           _  __     _ _
//                          | |/ /__ _| | |_ _  _ _ _ __ _
//                          | ' </ _` | |  _| || | '_/ _` |
//                          |_|\_\__,_|_|\__|\_,_|_| \__,_|
//
// This file is part of the Kaltura Collaborative Media Suite which allows users
// to do with audio, video, and animation what Wiki platfroms allow them to do with
// text.
//
// Copyright (C) 2006-2011  Kaltura Inc.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// @ignore
// ===================================================================================================
// @package Kaltura
// @subpackage Client
#import "../KalturaClient.h"
#import "KalturaScheduledTaskClientPlugin.h"
#import "KalturaMetadataClientPlugin.h"

///////////////////////// enums /////////////////////////
///////////////////////// classes /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaExecuteMetadataXsltObjectTask : KalturaObjectTask
// Metadata profile id to lookup the metadata object
@property (nonatomic,assign) int metadataProfileId;
// Metadata object type to lookup the metadata object
@property (nonatomic,copy) NSString* metadataObjectType;	// enum KalturaMetadataObjectType
// The XSLT to execute
@property (nonatomic,copy) NSString* xslt;
- (KalturaFieldType)getTypeOfMetadataProfileId;
- (KalturaFieldType)getTypeOfMetadataObjectType;
- (KalturaFieldType)getTypeOfXslt;
- (void)setMetadataProfileIdFromString:(NSString*)aPropVal;
@end

///////////////////////// services /////////////////////////
