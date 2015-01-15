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
#import "KalturaCuePointClientPlugin.h"

///////////////////////// enums /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaThumbCuePointOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)START_TIME_ASC;
+ (NSString*)TRIGGERED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)START_TIME_DESC;
+ (NSString*)TRIGGERED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

///////////////////////// classes /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaThumbCuePoint : KalturaCuePoint
@property (nonatomic,copy) NSString* assetId;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,copy) NSString* title;
// The sub type of the ThumbCuePoint
@property (nonatomic,assign) int subType;	// enum KalturaThumbCuePointSubType
- (KalturaFieldType)getTypeOfAssetId;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfTitle;
- (KalturaFieldType)getTypeOfSubType;
- (void)setSubTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaTimedThumbAsset : KalturaThumbAsset
// Associated thumb cue point ID
@property (nonatomic,copy) NSString* cuePointId;	// insertonly
- (KalturaFieldType)getTypeOfCuePointId;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbCuePointBaseFilter : KalturaCuePointFilter
@property (nonatomic,copy) NSString* descriptionLike;
@property (nonatomic,copy) NSString* descriptionMultiLikeOr;
@property (nonatomic,copy) NSString* descriptionMultiLikeAnd;
@property (nonatomic,copy) NSString* titleLike;
@property (nonatomic,copy) NSString* titleMultiLikeOr;
@property (nonatomic,copy) NSString* titleMultiLikeAnd;
@property (nonatomic,assign) int subTypeEqual;	// enum KalturaThumbCuePointSubType
@property (nonatomic,copy) NSString* subTypeIn;
- (KalturaFieldType)getTypeOfDescriptionLike;
- (KalturaFieldType)getTypeOfDescriptionMultiLikeOr;
- (KalturaFieldType)getTypeOfDescriptionMultiLikeAnd;
- (KalturaFieldType)getTypeOfTitleLike;
- (KalturaFieldType)getTypeOfTitleMultiLikeOr;
- (KalturaFieldType)getTypeOfTitleMultiLikeAnd;
- (KalturaFieldType)getTypeOfSubTypeEqual;
- (KalturaFieldType)getTypeOfSubTypeIn;
- (void)setSubTypeEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbCuePointFilter : KalturaThumbCuePointBaseFilter
@end

///////////////////////// services /////////////////////////
