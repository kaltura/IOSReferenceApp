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
#import "KalturaDropFolderClientPlugin.h"

///////////////////////// enums /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaWebexDropFolderFileOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)FILE_NAME_ASC;
+ (NSString*)FILE_SIZE_ASC;
+ (NSString*)FILE_SIZE_LAST_SET_AT_ASC;
+ (NSString*)ID_ASC;
+ (NSString*)PARSED_FLAVOR_ASC;
+ (NSString*)PARSED_SLUG_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)FILE_NAME_DESC;
+ (NSString*)FILE_SIZE_DESC;
+ (NSString*)FILE_SIZE_LAST_SET_AT_DESC;
+ (NSString*)ID_DESC;
+ (NSString*)PARSED_FLAVOR_DESC;
+ (NSString*)PARSED_SLUG_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWebexDropFolderOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)ID_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)ID_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

///////////////////////// classes /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaWebexDropFolder : KalturaDropFolder
@property (nonatomic,copy) NSString* webexUserId;
@property (nonatomic,copy) NSString* webexPassword;
@property (nonatomic,assign) int webexSiteId;
@property (nonatomic,copy) NSString* webexPartnerId;
@property (nonatomic,copy) NSString* webexServiceUrl;
@property (nonatomic,copy) NSString* webexHostIdMetadataFieldName;
- (KalturaFieldType)getTypeOfWebexUserId;
- (KalturaFieldType)getTypeOfWebexPassword;
- (KalturaFieldType)getTypeOfWebexSiteId;
- (KalturaFieldType)getTypeOfWebexPartnerId;
- (KalturaFieldType)getTypeOfWebexServiceUrl;
- (KalturaFieldType)getTypeOfWebexHostIdMetadataFieldName;
- (void)setWebexSiteIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWebexDropFolderFile : KalturaDropFolderFile
@property (nonatomic,assign) int recordingId;
@property (nonatomic,copy) NSString* webexHostId;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,copy) NSString* confId;
@property (nonatomic,copy) NSString* contentUrl;
- (KalturaFieldType)getTypeOfRecordingId;
- (KalturaFieldType)getTypeOfWebexHostId;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfConfId;
- (KalturaFieldType)getTypeOfContentUrl;
- (void)setRecordingIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWebexDropFolderContentProcessorJobData : KalturaDropFolderContentProcessorJobData
@property (nonatomic,copy) NSString* description;
@property (nonatomic,copy) NSString* webexHostId;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfWebexHostId;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWebexDropFolderBaseFilter : KalturaDropFolderFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWebexDropFolderFileBaseFilter : KalturaDropFolderFileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWebexDropFolderFileFilter : KalturaWebexDropFolderFileBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWebexDropFolderFilter : KalturaWebexDropFolderBaseFilter
@end

///////////////////////// services /////////////////////////
