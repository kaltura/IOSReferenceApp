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

///////////////////////// enums /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaKontikiStorageProfileOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

///////////////////////// classes /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaKontikiStorageProfile : KalturaStorageProfile
@property (nonatomic,copy) NSString* serviceToken;
- (KalturaFieldType)getTypeOfServiceToken;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaKontikiStorageDeleteJobData : KalturaStorageDeleteJobData
// Unique Kontiki MOID for the content uploaded to Kontiki
@property (nonatomic,copy) NSString* contentMoid;
@property (nonatomic,copy) NSString* serviceToken;
- (KalturaFieldType)getTypeOfContentMoid;
- (KalturaFieldType)getTypeOfServiceToken;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaKontikiStorageExportJobData : KalturaStorageExportJobData
// Holds the id of the exported asset
@property (nonatomic,copy) NSString* flavorAssetId;
// Unique Kontiki MOID for the content uploaded to Kontiki
@property (nonatomic,copy) NSString* contentMoid;
@property (nonatomic,copy) NSString* serviceToken;
- (KalturaFieldType)getTypeOfFlavorAssetId;
- (KalturaFieldType)getTypeOfContentMoid;
- (KalturaFieldType)getTypeOfServiceToken;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaKontikiStorageProfileBaseFilter : KalturaStorageProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaKontikiStorageProfileFilter : KalturaKontikiStorageProfileBaseFilter
@end

///////////////////////// services /////////////////////////
