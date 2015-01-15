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
#import "KalturaDrmClientPlugin.h"

///////////////////////// enums /////////////////////////
@implementation KalturaDrmLicenseExpirationPolicy
+ (int)FIXED_DURATION
{
    return 1;
}
+ (int)ENTRY_SCHEDULING_END
{
    return 2;
}
+ (int)UNLIMITED
{
    return 3;
}
@end

@implementation KalturaDrmPolicyStatus
+ (int)ACTIVE
{
    return 1;
}
+ (int)DELETED
{
    return 2;
}
@end

@implementation KalturaDrmProfileStatus
+ (int)ACTIVE
{
    return 1;
}
+ (int)DELETED
{
    return 2;
}
@end

@implementation KalturaDrmDeviceOrderBy
+ (NSString*)CREATED_AT_ASC
{
    return @"+createdAt";
}
+ (NSString*)CREATED_AT_DESC
{
    return @"-createdAt";
}
@end

@implementation KalturaDrmLicenseScenario
+ (NSString*)PROTECTION
{
    return @"playReady.PROTECTION";
}
+ (NSString*)PURCHASE
{
    return @"playReady.PURCHASE";
}
+ (NSString*)RENTAL
{
    return @"playReady.RENTAL";
}
+ (NSString*)SUBSCRIPTION
{
    return @"playReady.SUBSCRIPTION";
}
@end

@implementation KalturaDrmLicenseType
+ (NSString*)NON_PERSISTENT
{
    return @"playReady.NON_PERSISTENT";
}
+ (NSString*)PERSISTENT
{
    return @"playReady.PERSISTENT";
}
@end

@implementation KalturaDrmPolicyOrderBy
@end

@implementation KalturaDrmProfileOrderBy
+ (NSString*)ID_ASC
{
    return @"+id";
}
+ (NSString*)NAME_ASC
{
    return @"+name";
}
+ (NSString*)ID_DESC
{
    return @"-id";
}
+ (NSString*)NAME_DESC
{
    return @"-name";
}
@end

@implementation KalturaDrmProviderType
+ (NSString*)PLAY_READY
{
    return @"playReady.PLAY_READY";
}
+ (NSString*)WIDEVINE
{
    return @"widevine.WIDEVINE";
}
@end

///////////////////////// classes /////////////////////////
@interface KalturaDrmPolicy()
@property (nonatomic,assign) int id;
@property (nonatomic,assign) int createdAt;
@property (nonatomic,assign) int updatedAt;
@end

@implementation KalturaDrmPolicy
@synthesize id = _id;
@synthesize partnerId = _partnerId;
@synthesize name = _name;
@synthesize systemName = _systemName;
@synthesize description = _description;
@synthesize provider = _provider;
@synthesize status = _status;
@synthesize scenario = _scenario;
@synthesize licenseType = _licenseType;
@synthesize licenseExpirationPolicy = _licenseExpirationPolicy;
@synthesize duration = _duration;
@synthesize createdAt = _createdAt;
@synthesize updatedAt = _updatedAt;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_id = KALTURA_UNDEF_INT;
    self->_partnerId = KALTURA_UNDEF_INT;
    self->_status = KALTURA_UNDEF_INT;
    self->_licenseExpirationPolicy = KALTURA_UNDEF_INT;
    self->_duration = KALTURA_UNDEF_INT;
    self->_createdAt = KALTURA_UNDEF_INT;
    self->_updatedAt = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSystemName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDescription
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfProvider
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfStatus
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfScenario
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfLicenseType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfLicenseExpirationPolicy
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfDuration
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfCreatedAt
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUpdatedAt
{
    return KFT_Int;
}

- (void)setIdFromString:(NSString*)aPropVal
{
    self.id = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerIdFromString:(NSString*)aPropVal
{
    self.partnerId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setStatusFromString:(NSString*)aPropVal
{
    self.status = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setLicenseExpirationPolicyFromString:(NSString*)aPropVal
{
    self.licenseExpirationPolicy = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setDurationFromString:(NSString*)aPropVal
{
    self.duration = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setCreatedAtFromString:(NSString*)aPropVal
{
    self.createdAt = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUpdatedAtFromString:(NSString*)aPropVal
{
    self.updatedAt = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDrmPolicy"];
    [aParams addIfDefinedKey:@"partnerId" withInt:self.partnerId];
    [aParams addIfDefinedKey:@"name" withString:self.name];
    [aParams addIfDefinedKey:@"systemName" withString:self.systemName];
    [aParams addIfDefinedKey:@"description" withString:self.description];
    [aParams addIfDefinedKey:@"provider" withString:self.provider];
    [aParams addIfDefinedKey:@"status" withInt:self.status];
    [aParams addIfDefinedKey:@"scenario" withString:self.scenario];
    [aParams addIfDefinedKey:@"licenseType" withString:self.licenseType];
    [aParams addIfDefinedKey:@"licenseExpirationPolicy" withInt:self.licenseExpirationPolicy];
    [aParams addIfDefinedKey:@"duration" withInt:self.duration];
}

- (void)dealloc
{
    [self->_name release];
    [self->_systemName release];
    [self->_description release];
    [self->_provider release];
    [self->_scenario release];
    [self->_licenseType release];
    [super dealloc];
}

@end

@interface KalturaDrmPolicyListResponse()
@property (nonatomic,retain) NSMutableArray* objects;
@property (nonatomic,assign) int totalCount;
@end

@implementation KalturaDrmPolicyListResponse
@synthesize objects = _objects;
@synthesize totalCount = _totalCount;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_totalCount = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfObjects
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfObjects
{
    return @"KalturaDrmPolicy";
}

- (KalturaFieldType)getTypeOfTotalCount
{
    return KFT_Int;
}

- (void)setTotalCountFromString:(NSString*)aPropVal
{
    self.totalCount = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDrmPolicyListResponse"];
}

- (void)dealloc
{
    [self->_objects release];
    [super dealloc];
}

@end

@interface KalturaDrmProfile()
@property (nonatomic,assign) int id;
@property (nonatomic,assign) int createdAt;
@property (nonatomic,assign) int updatedAt;
@end

@implementation KalturaDrmProfile
@synthesize id = _id;
@synthesize partnerId = _partnerId;
@synthesize name = _name;
@synthesize description = _description;
@synthesize provider = _provider;
@synthesize status = _status;
@synthesize licenseServerUrl = _licenseServerUrl;
@synthesize defaultPolicy = _defaultPolicy;
@synthesize createdAt = _createdAt;
@synthesize updatedAt = _updatedAt;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_id = KALTURA_UNDEF_INT;
    self->_partnerId = KALTURA_UNDEF_INT;
    self->_status = KALTURA_UNDEF_INT;
    self->_createdAt = KALTURA_UNDEF_INT;
    self->_updatedAt = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDescription
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfProvider
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfStatus
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfLicenseServerUrl
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDefaultPolicy
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfCreatedAt
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUpdatedAt
{
    return KFT_Int;
}

- (void)setIdFromString:(NSString*)aPropVal
{
    self.id = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerIdFromString:(NSString*)aPropVal
{
    self.partnerId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setStatusFromString:(NSString*)aPropVal
{
    self.status = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setCreatedAtFromString:(NSString*)aPropVal
{
    self.createdAt = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUpdatedAtFromString:(NSString*)aPropVal
{
    self.updatedAt = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDrmProfile"];
    [aParams addIfDefinedKey:@"partnerId" withInt:self.partnerId];
    [aParams addIfDefinedKey:@"name" withString:self.name];
    [aParams addIfDefinedKey:@"description" withString:self.description];
    [aParams addIfDefinedKey:@"provider" withString:self.provider];
    [aParams addIfDefinedKey:@"status" withInt:self.status];
    [aParams addIfDefinedKey:@"licenseServerUrl" withString:self.licenseServerUrl];
    [aParams addIfDefinedKey:@"defaultPolicy" withString:self.defaultPolicy];
}

- (void)dealloc
{
    [self->_name release];
    [self->_description release];
    [self->_provider release];
    [self->_licenseServerUrl release];
    [self->_defaultPolicy release];
    [super dealloc];
}

@end

@interface KalturaDrmProfileListResponse()
@property (nonatomic,retain) NSMutableArray* objects;
@property (nonatomic,assign) int totalCount;
@end

@implementation KalturaDrmProfileListResponse
@synthesize objects = _objects;
@synthesize totalCount = _totalCount;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_totalCount = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfObjects
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfObjects
{
    return @"KalturaDrmProfile";
}

- (KalturaFieldType)getTypeOfTotalCount
{
    return KFT_Int;
}

- (void)setTotalCountFromString:(NSString*)aPropVal
{
    self.totalCount = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDrmProfileListResponse"];
}

- (void)dealloc
{
    [self->_objects release];
    [super dealloc];
}

@end

@implementation KalturaDrmDeviceBaseFilter
@synthesize partnerIdEqual = _partnerIdEqual;
@synthesize partnerIdIn = _partnerIdIn;
@synthesize deviceIdLike = _deviceIdLike;
@synthesize providerEqual = _providerEqual;
@synthesize providerIn = _providerIn;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_partnerIdEqual = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfPartnerIdEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerIdIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDeviceIdLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfProviderEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfProviderIn
{
    return KFT_String;
}

- (void)setPartnerIdEqualFromString:(NSString*)aPropVal
{
    self.partnerIdEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDrmDeviceBaseFilter"];
    [aParams addIfDefinedKey:@"partnerIdEqual" withInt:self.partnerIdEqual];
    [aParams addIfDefinedKey:@"partnerIdIn" withString:self.partnerIdIn];
    [aParams addIfDefinedKey:@"deviceIdLike" withString:self.deviceIdLike];
    [aParams addIfDefinedKey:@"providerEqual" withString:self.providerEqual];
    [aParams addIfDefinedKey:@"providerIn" withString:self.providerIn];
}

- (void)dealloc
{
    [self->_partnerIdIn release];
    [self->_deviceIdLike release];
    [self->_providerEqual release];
    [self->_providerIn release];
    [super dealloc];
}

@end

@implementation KalturaDrmPolicyBaseFilter
@synthesize partnerIdEqual = _partnerIdEqual;
@synthesize partnerIdIn = _partnerIdIn;
@synthesize nameLike = _nameLike;
@synthesize systemNameLike = _systemNameLike;
@synthesize providerEqual = _providerEqual;
@synthesize providerIn = _providerIn;
@synthesize statusEqual = _statusEqual;
@synthesize statusIn = _statusIn;
@synthesize scenarioEqual = _scenarioEqual;
@synthesize scenarioIn = _scenarioIn;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_partnerIdEqual = KALTURA_UNDEF_INT;
    self->_statusEqual = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfPartnerIdEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerIdIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfNameLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSystemNameLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfProviderEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfProviderIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfStatusEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfStatusIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfScenarioEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfScenarioIn
{
    return KFT_String;
}

- (void)setPartnerIdEqualFromString:(NSString*)aPropVal
{
    self.partnerIdEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setStatusEqualFromString:(NSString*)aPropVal
{
    self.statusEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDrmPolicyBaseFilter"];
    [aParams addIfDefinedKey:@"partnerIdEqual" withInt:self.partnerIdEqual];
    [aParams addIfDefinedKey:@"partnerIdIn" withString:self.partnerIdIn];
    [aParams addIfDefinedKey:@"nameLike" withString:self.nameLike];
    [aParams addIfDefinedKey:@"systemNameLike" withString:self.systemNameLike];
    [aParams addIfDefinedKey:@"providerEqual" withString:self.providerEqual];
    [aParams addIfDefinedKey:@"providerIn" withString:self.providerIn];
    [aParams addIfDefinedKey:@"statusEqual" withInt:self.statusEqual];
    [aParams addIfDefinedKey:@"statusIn" withString:self.statusIn];
    [aParams addIfDefinedKey:@"scenarioEqual" withString:self.scenarioEqual];
    [aParams addIfDefinedKey:@"scenarioIn" withString:self.scenarioIn];
}

- (void)dealloc
{
    [self->_partnerIdIn release];
    [self->_nameLike release];
    [self->_systemNameLike release];
    [self->_providerEqual release];
    [self->_providerIn release];
    [self->_statusIn release];
    [self->_scenarioEqual release];
    [self->_scenarioIn release];
    [super dealloc];
}

@end

@implementation KalturaDrmProfileBaseFilter
@synthesize idEqual = _idEqual;
@synthesize idIn = _idIn;
@synthesize partnerIdEqual = _partnerIdEqual;
@synthesize partnerIdIn = _partnerIdIn;
@synthesize nameLike = _nameLike;
@synthesize providerEqual = _providerEqual;
@synthesize providerIn = _providerIn;
@synthesize statusEqual = _statusEqual;
@synthesize statusIn = _statusIn;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_idEqual = KALTURA_UNDEF_INT;
    self->_partnerIdEqual = KALTURA_UNDEF_INT;
    self->_statusEqual = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfIdEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfIdIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPartnerIdEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerIdIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfNameLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfProviderEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfProviderIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfStatusEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfStatusIn
{
    return KFT_String;
}

- (void)setIdEqualFromString:(NSString*)aPropVal
{
    self.idEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerIdEqualFromString:(NSString*)aPropVal
{
    self.partnerIdEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setStatusEqualFromString:(NSString*)aPropVal
{
    self.statusEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDrmProfileBaseFilter"];
    [aParams addIfDefinedKey:@"idEqual" withInt:self.idEqual];
    [aParams addIfDefinedKey:@"idIn" withString:self.idIn];
    [aParams addIfDefinedKey:@"partnerIdEqual" withInt:self.partnerIdEqual];
    [aParams addIfDefinedKey:@"partnerIdIn" withString:self.partnerIdIn];
    [aParams addIfDefinedKey:@"nameLike" withString:self.nameLike];
    [aParams addIfDefinedKey:@"providerEqual" withString:self.providerEqual];
    [aParams addIfDefinedKey:@"providerIn" withString:self.providerIn];
    [aParams addIfDefinedKey:@"statusEqual" withInt:self.statusEqual];
    [aParams addIfDefinedKey:@"statusIn" withString:self.statusIn];
}

- (void)dealloc
{
    [self->_idIn release];
    [self->_partnerIdIn release];
    [self->_nameLike release];
    [self->_providerEqual release];
    [self->_providerIn release];
    [self->_statusIn release];
    [super dealloc];
}

@end

@implementation KalturaDrmDeviceFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDrmDeviceFilter"];
}

@end

@implementation KalturaDrmPolicyFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDrmPolicyFilter"];
}

@end

@implementation KalturaDrmProfileFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDrmProfileFilter"];
}

@end

///////////////////////// services /////////////////////////
@implementation KalturaDrmPolicyService
- (KalturaDrmPolicy*)addWithDrmPolicy:(KalturaDrmPolicy*)aDrmPolicy
{
    [self.client.params addIfDefinedKey:@"drmPolicy" withObject:aDrmPolicy];
    return [self.client queueObjectService:@"drm_drmpolicy" withAction:@"add" withExpectedType:@"KalturaDrmPolicy"];
}

- (KalturaDrmPolicy*)getWithDrmPolicyId:(int)aDrmPolicyId
{
    [self.client.params addIfDefinedKey:@"drmPolicyId" withInt:aDrmPolicyId];
    return [self.client queueObjectService:@"drm_drmpolicy" withAction:@"get" withExpectedType:@"KalturaDrmPolicy"];
}

- (KalturaDrmPolicy*)updateWithDrmPolicyId:(int)aDrmPolicyId withDrmPolicy:(KalturaDrmPolicy*)aDrmPolicy
{
    [self.client.params addIfDefinedKey:@"drmPolicyId" withInt:aDrmPolicyId];
    [self.client.params addIfDefinedKey:@"drmPolicy" withObject:aDrmPolicy];
    return [self.client queueObjectService:@"drm_drmpolicy" withAction:@"update" withExpectedType:@"KalturaDrmPolicy"];
}

- (KalturaDrmPolicy*)deleteWithDrmPolicyId:(int)aDrmPolicyId
{
    [self.client.params addIfDefinedKey:@"drmPolicyId" withInt:aDrmPolicyId];
    return [self.client queueObjectService:@"drm_drmpolicy" withAction:@"delete" withExpectedType:@"KalturaDrmPolicy"];
}

- (KalturaDrmPolicyListResponse*)listWithFilter:(KalturaDrmPolicyFilter*)aFilter withPager:(KalturaFilterPager*)aPager
{
    [self.client.params addIfDefinedKey:@"filter" withObject:aFilter];
    [self.client.params addIfDefinedKey:@"pager" withObject:aPager];
    return [self.client queueObjectService:@"drm_drmpolicy" withAction:@"list" withExpectedType:@"KalturaDrmPolicyListResponse"];
}

- (KalturaDrmPolicyListResponse*)listWithFilter:(KalturaDrmPolicyFilter*)aFilter
{
    return [self listWithFilter:aFilter withPager:nil];
}

- (KalturaDrmPolicyListResponse*)list
{
    return [self listWithFilter:nil];
}

@end

@implementation KalturaDrmProfileService
- (KalturaDrmProfile*)addWithDrmProfile:(KalturaDrmProfile*)aDrmProfile
{
    [self.client.params addIfDefinedKey:@"drmProfile" withObject:aDrmProfile];
    return [self.client queueObjectService:@"drm_drmprofile" withAction:@"add" withExpectedType:@"KalturaDrmProfile"];
}

- (KalturaDrmProfile*)getWithDrmProfileId:(int)aDrmProfileId
{
    [self.client.params addIfDefinedKey:@"drmProfileId" withInt:aDrmProfileId];
    return [self.client queueObjectService:@"drm_drmprofile" withAction:@"get" withExpectedType:@"KalturaDrmProfile"];
}

- (KalturaDrmProfile*)updateWithDrmProfileId:(int)aDrmProfileId withDrmProfile:(KalturaDrmProfile*)aDrmProfile
{
    [self.client.params addIfDefinedKey:@"drmProfileId" withInt:aDrmProfileId];
    [self.client.params addIfDefinedKey:@"drmProfile" withObject:aDrmProfile];
    return [self.client queueObjectService:@"drm_drmprofile" withAction:@"update" withExpectedType:@"KalturaDrmProfile"];
}

- (KalturaDrmProfile*)deleteWithDrmProfileId:(int)aDrmProfileId
{
    [self.client.params addIfDefinedKey:@"drmProfileId" withInt:aDrmProfileId];
    return [self.client queueObjectService:@"drm_drmprofile" withAction:@"delete" withExpectedType:@"KalturaDrmProfile"];
}

- (KalturaDrmProfileListResponse*)listWithFilter:(KalturaDrmProfileFilter*)aFilter withPager:(KalturaFilterPager*)aPager
{
    [self.client.params addIfDefinedKey:@"filter" withObject:aFilter];
    [self.client.params addIfDefinedKey:@"pager" withObject:aPager];
    return [self.client queueObjectService:@"drm_drmprofile" withAction:@"list" withExpectedType:@"KalturaDrmProfileListResponse"];
}

- (KalturaDrmProfileListResponse*)listWithFilter:(KalturaDrmProfileFilter*)aFilter
{
    return [self listWithFilter:aFilter withPager:nil];
}

- (KalturaDrmProfileListResponse*)list
{
    return [self listWithFilter:nil];
}

- (KalturaDrmProfile*)getByProviderWithProvider:(NSString*)aProvider
{
    [self.client.params addIfDefinedKey:@"provider" withString:aProvider];
    return [self.client queueObjectService:@"drm_drmprofile" withAction:@"getByProvider" withExpectedType:@"KalturaDrmProfile"];
}

@end

@implementation KalturaDrmClientPlugin
@synthesize client = _client;

- (id)initWithClient:(KalturaClient*)aClient
{
    self = [super init];
    if (self == nil)
        return nil;
    self.client = aClient;
    return self;
}

- (KalturaDrmPolicyService*)drmPolicy
{
    if (self->_drmPolicy == nil)
    	self->_drmPolicy = [[KalturaDrmPolicyService alloc] initWithClient:self.client];
    return self->_drmPolicy;
}

- (KalturaDrmProfileService*)drmProfile
{
    if (self->_drmProfile == nil)
    	self->_drmProfile = [[KalturaDrmProfileService alloc] initWithClient:self.client];
    return self->_drmProfile;
}

- (void)dealloc
{
    [self->_drmPolicy release];
    [self->_drmProfile release];
	[super dealloc];
}

@end

