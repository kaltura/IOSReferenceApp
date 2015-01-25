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
#import "KalturaThumbCuePointClientPlugin.h"

///////////////////////// enums /////////////////////////
@implementation KalturaThumbCuePointOrderBy
+ (NSString*)CREATED_AT_ASC
{
    return @"+createdAt";
}
+ (NSString*)PARTNER_SORT_VALUE_ASC
{
    return @"+partnerSortValue";
}
+ (NSString*)START_TIME_ASC
{
    return @"+startTime";
}
+ (NSString*)TRIGGERED_AT_ASC
{
    return @"+triggeredAt";
}
+ (NSString*)UPDATED_AT_ASC
{
    return @"+updatedAt";
}
+ (NSString*)CREATED_AT_DESC
{
    return @"-createdAt";
}
+ (NSString*)PARTNER_SORT_VALUE_DESC
{
    return @"-partnerSortValue";
}
+ (NSString*)START_TIME_DESC
{
    return @"-startTime";
}
+ (NSString*)TRIGGERED_AT_DESC
{
    return @"-triggeredAt";
}
+ (NSString*)UPDATED_AT_DESC
{
    return @"-updatedAt";
}
@end

@implementation KalturaTimedThumbAssetOrderBy
+ (NSString*)CREATED_AT_ASC
{
    return @"+createdAt";
}
+ (NSString*)DELETED_AT_ASC
{
    return @"+deletedAt";
}
+ (NSString*)SIZE_ASC
{
    return @"+size";
}
+ (NSString*)UPDATED_AT_ASC
{
    return @"+updatedAt";
}
+ (NSString*)CREATED_AT_DESC
{
    return @"-createdAt";
}
+ (NSString*)DELETED_AT_DESC
{
    return @"-deletedAt";
}
+ (NSString*)SIZE_DESC
{
    return @"-size";
}
+ (NSString*)UPDATED_AT_DESC
{
    return @"-updatedAt";
}
@end

///////////////////////// classes /////////////////////////
@implementation KalturaThumbCuePoint
@synthesize assetId = _assetId;
@synthesize description = _description;
@synthesize title = _title;
@synthesize subType = _subType;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_subType = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfAssetId
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDescription
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTitle
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSubType
{
    return KFT_Int;
}

- (void)setSubTypeFromString:(NSString*)aPropVal
{
    self.subType = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaThumbCuePoint"];
    [aParams addIfDefinedKey:@"assetId" withString:self.assetId];
    [aParams addIfDefinedKey:@"description" withString:self.description];
    [aParams addIfDefinedKey:@"title" withString:self.title];
    [aParams addIfDefinedKey:@"subType" withInt:self.subType];
}

- (void)dealloc
{
    [self->_assetId release];
    [self->_description release];
    [self->_title release];
    [super dealloc];
}

@end

@implementation KalturaTimedThumbAsset
@synthesize cuePointId = _cuePointId;

- (KalturaFieldType)getTypeOfCuePointId
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaTimedThumbAsset"];
    [aParams addIfDefinedKey:@"cuePointId" withString:self.cuePointId];
}

- (void)dealloc
{
    [self->_cuePointId release];
    [super dealloc];
}

@end

@implementation KalturaThumbCuePointBaseFilter
@synthesize descriptionLike = _descriptionLike;
@synthesize descriptionMultiLikeOr = _descriptionMultiLikeOr;
@synthesize descriptionMultiLikeAnd = _descriptionMultiLikeAnd;
@synthesize titleLike = _titleLike;
@synthesize titleMultiLikeOr = _titleMultiLikeOr;
@synthesize titleMultiLikeAnd = _titleMultiLikeAnd;
@synthesize subTypeEqual = _subTypeEqual;
@synthesize subTypeIn = _subTypeIn;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_subTypeEqual = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfDescriptionLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDescriptionMultiLikeOr
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDescriptionMultiLikeAnd
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTitleLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTitleMultiLikeOr
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTitleMultiLikeAnd
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSubTypeEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfSubTypeIn
{
    return KFT_String;
}

- (void)setSubTypeEqualFromString:(NSString*)aPropVal
{
    self.subTypeEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaThumbCuePointBaseFilter"];
    [aParams addIfDefinedKey:@"descriptionLike" withString:self.descriptionLike];
    [aParams addIfDefinedKey:@"descriptionMultiLikeOr" withString:self.descriptionMultiLikeOr];
    [aParams addIfDefinedKey:@"descriptionMultiLikeAnd" withString:self.descriptionMultiLikeAnd];
    [aParams addIfDefinedKey:@"titleLike" withString:self.titleLike];
    [aParams addIfDefinedKey:@"titleMultiLikeOr" withString:self.titleMultiLikeOr];
    [aParams addIfDefinedKey:@"titleMultiLikeAnd" withString:self.titleMultiLikeAnd];
    [aParams addIfDefinedKey:@"subTypeEqual" withInt:self.subTypeEqual];
    [aParams addIfDefinedKey:@"subTypeIn" withString:self.subTypeIn];
}

- (void)dealloc
{
    [self->_descriptionLike release];
    [self->_descriptionMultiLikeOr release];
    [self->_descriptionMultiLikeAnd release];
    [self->_titleLike release];
    [self->_titleMultiLikeOr release];
    [self->_titleMultiLikeAnd release];
    [self->_subTypeIn release];
    [super dealloc];
}

@end

@implementation KalturaThumbCuePointFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaThumbCuePointFilter"];
}

@end

@implementation KalturaTimedThumbAssetBaseFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaTimedThumbAssetBaseFilter"];
}

@end

@implementation KalturaTimedThumbAssetFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaTimedThumbAssetFilter"];
}

@end

///////////////////////// services /////////////////////////
