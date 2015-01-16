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
#import "KalturaDrmClientPlugin.h"

///////////////////////// enums /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaWidevineRepositorySyncMode : NSObject
+ (int)MODIFY;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorAssetOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)DELETED_AT_ASC;
+ (NSString*)SIZE_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)DELETED_AT_DESC;
+ (NSString*)SIZE_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorParamsOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorParamsOutputOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineProfileOrderBy : NSObject
+ (NSString*)ID_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)ID_DESC;
+ (NSString*)NAME_DESC;
@end

///////////////////////// classes /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaWidevineProfile : KalturaDrmProfile
@property (nonatomic,copy) NSString* key;
@property (nonatomic,copy) NSString* iv;
@property (nonatomic,copy) NSString* owner;
@property (nonatomic,copy) NSString* portal;
@property (nonatomic,assign) int maxGop;
@property (nonatomic,copy) NSString* regServerHost;
- (KalturaFieldType)getTypeOfKey;
- (KalturaFieldType)getTypeOfIv;
- (KalturaFieldType)getTypeOfOwner;
- (KalturaFieldType)getTypeOfPortal;
- (KalturaFieldType)getTypeOfMaxGop;
- (KalturaFieldType)getTypeOfRegServerHost;
- (void)setMaxGopFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineRepositorySyncJobData : KalturaJobData
@property (nonatomic,assign) int syncMode;	// enum KalturaWidevineRepositorySyncMode
@property (nonatomic,copy) NSString* wvAssetIds;
@property (nonatomic,copy) NSString* modifiedAttributes;
@property (nonatomic,assign) int monitorSyncCompletion;
- (KalturaFieldType)getTypeOfSyncMode;
- (KalturaFieldType)getTypeOfWvAssetIds;
- (KalturaFieldType)getTypeOfModifiedAttributes;
- (KalturaFieldType)getTypeOfMonitorSyncCompletion;
- (void)setSyncModeFromString:(NSString*)aPropVal;
- (void)setMonitorSyncCompletionFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorAsset : KalturaFlavorAsset
// License distribution window start date
@property (nonatomic,assign) int widevineDistributionStartDate;
// License distribution window end date
@property (nonatomic,assign) int widevineDistributionEndDate;
// Widevine unique asset id
@property (nonatomic,assign) int widevineAssetId;
- (KalturaFieldType)getTypeOfWidevineDistributionStartDate;
- (KalturaFieldType)getTypeOfWidevineDistributionEndDate;
- (KalturaFieldType)getTypeOfWidevineAssetId;
- (void)setWidevineDistributionStartDateFromString:(NSString*)aPropVal;
- (void)setWidevineDistributionEndDateFromString:(NSString*)aPropVal;
- (void)setWidevineAssetIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorParams : KalturaFlavorParams
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorParamsOutput : KalturaFlavorParamsOutput
// License distribution window start date
@property (nonatomic,assign) int widevineDistributionStartDate;
// License distribution window end date
@property (nonatomic,assign) int widevineDistributionEndDate;
- (KalturaFieldType)getTypeOfWidevineDistributionStartDate;
- (KalturaFieldType)getTypeOfWidevineDistributionEndDate;
- (void)setWidevineDistributionStartDateFromString:(NSString*)aPropVal;
- (void)setWidevineDistributionEndDateFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineProfileBaseFilter : KalturaDrmProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineProfileFilter : KalturaWidevineProfileBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorAssetBaseFilter : KalturaFlavorAssetFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorParamsBaseFilter : KalturaFlavorParamsFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorAssetFilter : KalturaWidevineFlavorAssetBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorParamsFilter : KalturaWidevineFlavorParamsBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorParamsOutputBaseFilter : KalturaFlavorParamsOutputFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidevineFlavorParamsOutputFilter : KalturaWidevineFlavorParamsOutputBaseFilter
@end

///////////////////////// services /////////////////////////
// @package Kaltura
// @subpackage Client
// WidevineDrmService serves as a license proxy to a Widevine license server
@interface KalturaWidevineDrmService : KalturaServiceBase
// Get license for encrypted content playback
- (NSString*)getLicenseWithFlavorAssetId:(NSString*)aFlavorAssetId withReferrer:(NSString*)aReferrer;
- (NSString*)getLicenseWithFlavorAssetId:(NSString*)aFlavorAssetId;
@end

@interface KalturaWidevineClientPlugin : KalturaClientPlugin
{
	KalturaWidevineDrmService* _widevineDrm;
}

@property (nonatomic, assign) KalturaClientBase* client;
@property (nonatomic, readonly) KalturaWidevineDrmService* widevineDrm;
@end

