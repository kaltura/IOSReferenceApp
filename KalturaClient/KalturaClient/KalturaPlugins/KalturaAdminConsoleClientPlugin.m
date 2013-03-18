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
#import "KalturaAdminConsoleClientPlugin.h"

///////////////////////// enums /////////////////////////
@implementation KalturaTrackEntryEventType
+ (int)UPLOADED_FILE
{
    return 1;
}
+ (int)WEBCAM_COMPLETED
{
    return 2;
}
+ (int)IMPORT_STARTED
{
    return 3;
}
+ (int)ADD_ENTRY
{
    return 4;
}
+ (int)UPDATE_ENTRY
{
    return 5;
}
+ (int)DELETED_ENTRY
{
    return 6;
}
@end

@implementation KalturaUiConfAdminOrderBy
+ (NSString*)CREATED_AT_ASC
{
    return @"+createdAt";
}
+ (NSString*)CREATED_AT_DESC
{
    return @"-createdAt";
}
+ (NSString*)UPDATED_AT_ASC
{
    return @"+updatedAt";
}
+ (NSString*)UPDATED_AT_DESC
{
    return @"-updatedAt";
}
@end

///////////////////////// classes /////////////////////////
@implementation KalturaTrackEntry
@synthesize id = _id;
@synthesize trackEventType = _trackEventType;
@synthesize psVersion = _psVersion;
@synthesize context = _context;
@synthesize partnerId = _partnerId;
@synthesize entryId = _entryId;
@synthesize hostName = _hostName;
@synthesize userId = _userId;
@synthesize changedProperties = _changedProperties;
@synthesize paramStr1 = _paramStr1;
@synthesize paramStr2 = _paramStr2;
@synthesize paramStr3 = _paramStr3;
@synthesize ks = _ks;
@synthesize description = _description;
@synthesize createdAt = _createdAt;
@synthesize updatedAt = _updatedAt;
@synthesize userIp = _userIp;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_id = KALTURA_UNDEF_INT;
    self->_trackEventType = KALTURA_UNDEF_INT;
    self->_partnerId = KALTURA_UNDEF_INT;
    self->_createdAt = KALTURA_UNDEF_INT;
    self->_updatedAt = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfTrackEventType
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPsVersion
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfContext
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPartnerId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfEntryId
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfHostName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfUserId
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfChangedProperties
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfParamStr1
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfParamStr2
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfParamStr3
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfKs
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDescription
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

- (KalturaFieldType)getTypeOfUserIp
{
    return KFT_String;
}

- (void)setIdFromString:(NSString*)aPropVal
{
    self.id = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setTrackEventTypeFromString:(NSString*)aPropVal
{
    self.trackEventType = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerIdFromString:(NSString*)aPropVal
{
    self.partnerId = [KalturaSimpleTypeParser parseInt:aPropVal];
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
        [aParams putKey:@"objectType" withString:@"KalturaTrackEntry"];
    [aParams addIfDefinedKey:@"id" withInt:self.id];
    [aParams addIfDefinedKey:@"trackEventType" withInt:self.trackEventType];
    [aParams addIfDefinedKey:@"psVersion" withString:self.psVersion];
    [aParams addIfDefinedKey:@"context" withString:self.context];
    [aParams addIfDefinedKey:@"partnerId" withInt:self.partnerId];
    [aParams addIfDefinedKey:@"entryId" withString:self.entryId];
    [aParams addIfDefinedKey:@"hostName" withString:self.hostName];
    [aParams addIfDefinedKey:@"userId" withString:self.userId];
    [aParams addIfDefinedKey:@"changedProperties" withString:self.changedProperties];
    [aParams addIfDefinedKey:@"paramStr1" withString:self.paramStr1];
    [aParams addIfDefinedKey:@"paramStr2" withString:self.paramStr2];
    [aParams addIfDefinedKey:@"paramStr3" withString:self.paramStr3];
    [aParams addIfDefinedKey:@"ks" withString:self.ks];
    [aParams addIfDefinedKey:@"description" withString:self.description];
    [aParams addIfDefinedKey:@"createdAt" withInt:self.createdAt];
    [aParams addIfDefinedKey:@"updatedAt" withInt:self.updatedAt];
    [aParams addIfDefinedKey:@"userIp" withString:self.userIp];
}

- (void)dealloc
{
    [self->_psVersion release];
    [self->_context release];
    [self->_entryId release];
    [self->_hostName release];
    [self->_userId release];
    [self->_changedProperties release];
    [self->_paramStr1 release];
    [self->_paramStr2 release];
    [self->_paramStr3 release];
    [self->_ks release];
    [self->_description release];
    [self->_userIp release];
    [super dealloc];
}

@end

@interface KalturaTrackEntryListResponse()
@property (nonatomic,retain) NSMutableArray* objects;
@property (nonatomic,assign) int totalCount;
@end

@implementation KalturaTrackEntryListResponse
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
    return @"KalturaTrackEntry";
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
        [aParams putKey:@"objectType" withString:@"KalturaTrackEntryListResponse"];
}

- (void)dealloc
{
    [self->_objects release];
    [super dealloc];
}

@end

@implementation KalturaUiConfAdmin
@synthesize isPublic = _isPublic;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_isPublic = KALTURA_UNDEF_BOOL;
    return self;
}

- (KalturaFieldType)getTypeOfIsPublic
{
    return KFT_Bool;
}

- (void)setIsPublicFromString:(NSString*)aPropVal
{
    self.isPublic = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaUiConfAdmin"];
    [aParams addIfDefinedKey:@"isPublic" withBool:self.isPublic];
}

@end

@interface KalturaUiConfAdminListResponse()
@property (nonatomic,retain) NSMutableArray* objects;
@property (nonatomic,assign) int totalCount;
@end

@implementation KalturaUiConfAdminListResponse
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
    return @"KalturaUiConfAdmin";
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
        [aParams putKey:@"objectType" withString:@"KalturaUiConfAdminListResponse"];
}

- (void)dealloc
{
    [self->_objects release];
    [super dealloc];
}

@end

@implementation KalturaUiConfAdminBaseFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaUiConfAdminBaseFilter"];
}

@end

@implementation KalturaUiConfAdminFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaUiConfAdminFilter"];
}

@end

///////////////////////// services /////////////////////////
@implementation KalturaEntryAdminService
- (KalturaBaseEntry*)getWithEntryId:(NSString*)aEntryId withVersion:(int)aVersion
{
    [self.client.params addIfDefinedKey:@"entryId" withString:aEntryId];
    [self.client.params addIfDefinedKey:@"version" withInt:aVersion];
    return [self.client queueObjectService:@"adminconsole_entryadmin" withAction:@"get" withExpectedType:@"KalturaBaseEntry"];
}

- (KalturaBaseEntry*)getWithEntryId:(NSString*)aEntryId
{
    return [self getWithEntryId:aEntryId withVersion:KALTURA_UNDEF_INT];
}

- (KalturaBaseEntry*)getByFlavorIdWithFlavorId:(NSString*)aFlavorId withVersion:(int)aVersion
{
    [self.client.params addIfDefinedKey:@"flavorId" withString:aFlavorId];
    [self.client.params addIfDefinedKey:@"version" withInt:aVersion];
    return [self.client queueObjectService:@"adminconsole_entryadmin" withAction:@"getByFlavorId" withExpectedType:@"KalturaBaseEntry"];
}

- (KalturaBaseEntry*)getByFlavorIdWithFlavorId:(NSString*)aFlavorId
{
    return [self getByFlavorIdWithFlavorId:aFlavorId withVersion:KALTURA_UNDEF_INT];
}

- (KalturaTrackEntryListResponse*)getTracksWithEntryId:(NSString*)aEntryId
{
    [self.client.params addIfDefinedKey:@"entryId" withString:aEntryId];
    return [self.client queueObjectService:@"adminconsole_entryadmin" withAction:@"getTracks" withExpectedType:@"KalturaTrackEntryListResponse"];
}

@end

@implementation KalturaUiConfAdminService
- (KalturaUiConfAdmin*)addWithUiConf:(KalturaUiConfAdmin*)aUiConf
{
    [self.client.params addIfDefinedKey:@"uiConf" withObject:aUiConf];
    return [self.client queueObjectService:@"adminconsole_uiconfadmin" withAction:@"add" withExpectedType:@"KalturaUiConfAdmin"];
}

- (KalturaUiConfAdmin*)updateWithId:(int)aId withUiConf:(KalturaUiConfAdmin*)aUiConf
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    [self.client.params addIfDefinedKey:@"uiConf" withObject:aUiConf];
    return [self.client queueObjectService:@"adminconsole_uiconfadmin" withAction:@"update" withExpectedType:@"KalturaUiConfAdmin"];
}

- (KalturaUiConfAdmin*)getWithId:(int)aId
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    return [self.client queueObjectService:@"adminconsole_uiconfadmin" withAction:@"get" withExpectedType:@"KalturaUiConfAdmin"];
}

- (void)deleteWithId:(int)aId
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    [self.client queueVoidService:@"adminconsole_uiconfadmin" withAction:@"delete"];
}

- (KalturaUiConfAdminListResponse*)listWithFilter:(KalturaUiConfFilter*)aFilter withPager:(KalturaFilterPager*)aPager
{
    [self.client.params addIfDefinedKey:@"filter" withObject:aFilter];
    [self.client.params addIfDefinedKey:@"pager" withObject:aPager];
    return [self.client queueObjectService:@"adminconsole_uiconfadmin" withAction:@"list" withExpectedType:@"KalturaUiConfAdminListResponse"];
}

- (KalturaUiConfAdminListResponse*)listWithFilter:(KalturaUiConfFilter*)aFilter
{
    return [self listWithFilter:aFilter withPager:nil];
}

- (KalturaUiConfAdminListResponse*)list
{
    return [self listWithFilter:nil];
}

@end

@implementation KalturaReportAdminService
- (KalturaReport*)addWithReport:(KalturaReport*)aReport
{
    [self.client.params addIfDefinedKey:@"report" withObject:aReport];
    return [self.client queueObjectService:@"adminconsole_reportadmin" withAction:@"add" withExpectedType:@"KalturaReport"];
}

- (KalturaReport*)getWithId:(int)aId
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    return [self.client queueObjectService:@"adminconsole_reportadmin" withAction:@"get" withExpectedType:@"KalturaReport"];
}

- (KalturaReportListResponse*)listWithFilter:(KalturaReportFilter*)aFilter withPager:(KalturaFilterPager*)aPager
{
    [self.client.params addIfDefinedKey:@"filter" withObject:aFilter];
    [self.client.params addIfDefinedKey:@"pager" withObject:aPager];
    return [self.client queueObjectService:@"adminconsole_reportadmin" withAction:@"list" withExpectedType:@"KalturaReportListResponse"];
}

- (KalturaReportListResponse*)listWithFilter:(KalturaReportFilter*)aFilter
{
    return [self listWithFilter:aFilter withPager:nil];
}

- (KalturaReportListResponse*)list
{
    return [self listWithFilter:nil];
}

- (KalturaReport*)updateWithId:(int)aId withReport:(KalturaReport*)aReport
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    [self.client.params addIfDefinedKey:@"report" withObject:aReport];
    return [self.client queueObjectService:@"adminconsole_reportadmin" withAction:@"update" withExpectedType:@"KalturaReport"];
}

- (void)deleteWithId:(int)aId
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    [self.client queueVoidService:@"adminconsole_reportadmin" withAction:@"delete"];
}

- (KalturaReportResponse*)executeDebugWithId:(int)aId withParams:(NSArray*)aParams
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    [self.client.params addIfDefinedKey:@"params" withArray:aParams];
    return [self.client queueObjectService:@"adminconsole_reportadmin" withAction:@"executeDebug" withExpectedType:@"KalturaReportResponse"];
}

- (KalturaReportResponse*)executeDebugWithId:(int)aId
{
    return [self executeDebugWithId:aId withParams:nil];
}

- (NSMutableArray*)getParametersWithId:(int)aId
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    return [self.client queueArrayService:@"adminconsole_reportadmin" withAction:@"getParameters" withExpectedType:@"KalturaString"];
}

- (NSString*)getCsvUrlWithId:(int)aId withReportPartnerId:(int)aReportPartnerId
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    [self.client.params addIfDefinedKey:@"reportPartnerId" withInt:aReportPartnerId];
    return [self.client queueStringService:@"adminconsole_reportadmin" withAction:@"getCsvUrl"];
}

@end

@implementation KalturaAdminConsoleClientPlugin
@synthesize client = _client;

- (id)initWithClient:(KalturaClient*)aClient
{
    self = [super init];
    if (self == nil)
        return nil;
    self.client = aClient;
    return self;
}

- (KalturaEntryAdminService*)entryAdmin
{
    if (self->_entryAdmin == nil)
    	self->_entryAdmin = [[KalturaEntryAdminService alloc] initWithClient:self.client];
    return self->_entryAdmin;
}

- (KalturaUiConfAdminService*)uiConfAdmin
{
    if (self->_uiConfAdmin == nil)
    	self->_uiConfAdmin = [[KalturaUiConfAdminService alloc] initWithClient:self.client];
    return self->_uiConfAdmin;
}

- (KalturaReportAdminService*)reportAdmin
{
    if (self->_reportAdmin == nil)
    	self->_reportAdmin = [[KalturaReportAdminService alloc] initWithClient:self.client];
    return self->_reportAdmin;
}

- (void)dealloc
{
    [self->_entryAdmin release];
    [self->_uiConfAdmin release];
    [self->_reportAdmin release];
	[super dealloc];
}

@end

