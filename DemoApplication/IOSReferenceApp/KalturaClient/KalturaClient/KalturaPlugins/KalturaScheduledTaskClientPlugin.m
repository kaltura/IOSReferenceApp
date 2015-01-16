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
#import "KalturaScheduledTaskClientPlugin.h"

///////////////////////// enums /////////////////////////
@implementation KalturaDeleteFlavorsLogicType
+ (int)KEEP_LIST_DELETE_OTHERS
{
    return 1;
}
+ (int)DELETE_LIST
{
    return 2;
}
+ (int)DELETE_KEEP_SMALLEST
{
    return 3;
}
@end

@implementation KalturaScheduledTaskAddOrRemoveType
+ (int)ADD
{
    return 1;
}
+ (int)REMOVE
{
    return 2;
}
@end

@implementation KalturaScheduledTaskProfileStatus
+ (int)DISABLED
{
    return 1;
}
+ (int)ACTIVE
{
    return 2;
}
+ (int)DELETED
{
    return 3;
}
+ (int)SUSPENDED
{
    return 4;
}
+ (int)DRY_RUN_ONLY
{
    return 5;
}
@end

@implementation KalturaObjectFilterEngineType
+ (NSString*)ENTRY
{
    return @"1";
}
@end

@implementation KalturaObjectTaskType
+ (NSString*)DISPATCH_EVENT_NOTIFICATION
{
    return @"scheduledTaskEventNotification.DispatchEventNotification";
}
+ (NSString*)EXECUTE_METADATA_XSLT
{
    return @"scheduledTaskMetadata.ExecuteMetadataXslt";
}
+ (NSString*)DELETE_ENTRY
{
    return @"1";
}
+ (NSString*)MODIFY_CATEGORIES
{
    return @"2";
}
+ (NSString*)DELETE_ENTRY_FLAVORS
{
    return @"3";
}
+ (NSString*)CONVERT_ENTRY_FLAVORS
{
    return @"4";
}
+ (NSString*)DELETE_LOCAL_CONTENT
{
    return @"5";
}
@end

@implementation KalturaScheduledTaskProfileOrderBy
+ (NSString*)CREATED_AT_ASC
{
    return @"+createdAt";
}
+ (NSString*)ID_ASC
{
    return @"+id";
}
+ (NSString*)LAST_EXECUTION_STARTED_AT_ASC
{
    return @"+lastExecutionStartedAt";
}
+ (NSString*)UPDATED_AT_ASC
{
    return @"+updatedAt";
}
+ (NSString*)CREATED_AT_DESC
{
    return @"-createdAt";
}
+ (NSString*)ID_DESC
{
    return @"-id";
}
+ (NSString*)LAST_EXECUTION_STARTED_AT_DESC
{
    return @"-lastExecutionStartedAt";
}
+ (NSString*)UPDATED_AT_DESC
{
    return @"-updatedAt";
}
@end

///////////////////////// classes /////////////////////////
@interface KalturaObjectTask()
@property (nonatomic,copy) NSString* type;
@end

@implementation KalturaObjectTask
@synthesize type = _type;

- (KalturaFieldType)getTypeOfType
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaObjectTask"];
}

- (void)dealloc
{
    [self->_type release];
    [super dealloc];
}

@end

@interface KalturaScheduledTaskProfile()
@property (nonatomic,assign) int id;
@property (nonatomic,assign) int partnerId;
@property (nonatomic,assign) int createdAt;
@property (nonatomic,assign) int updatedAt;
@end

@implementation KalturaScheduledTaskProfile
@synthesize id = _id;
@synthesize partnerId = _partnerId;
@synthesize name = _name;
@synthesize systemName = _systemName;
@synthesize description = _description;
@synthesize status = _status;
@synthesize objectFilterEngineType = _objectFilterEngineType;
@synthesize objectFilter = _objectFilter;
@synthesize objectTasks = _objectTasks;
@synthesize createdAt = _createdAt;
@synthesize updatedAt = _updatedAt;
@synthesize lastExecutionStartedAt = _lastExecutionStartedAt;
@synthesize maxTotalCountAllowed = _maxTotalCountAllowed;

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
    self->_lastExecutionStartedAt = KALTURA_UNDEF_INT;
    self->_maxTotalCountAllowed = KALTURA_UNDEF_INT;
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

- (KalturaFieldType)getTypeOfStatus
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfObjectFilterEngineType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfObjectFilter
{
    return KFT_Object;
}

- (NSString*)getObjectTypeOfObjectFilter
{
    return @"KalturaFilter";
}

- (KalturaFieldType)getTypeOfObjectTasks
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfObjectTasks
{
    return @"KalturaObjectTask";
}

- (KalturaFieldType)getTypeOfCreatedAt
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUpdatedAt
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfLastExecutionStartedAt
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfMaxTotalCountAllowed
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

- (void)setLastExecutionStartedAtFromString:(NSString*)aPropVal
{
    self.lastExecutionStartedAt = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setMaxTotalCountAllowedFromString:(NSString*)aPropVal
{
    self.maxTotalCountAllowed = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaScheduledTaskProfile"];
    [aParams addIfDefinedKey:@"name" withString:self.name];
    [aParams addIfDefinedKey:@"systemName" withString:self.systemName];
    [aParams addIfDefinedKey:@"description" withString:self.description];
    [aParams addIfDefinedKey:@"status" withInt:self.status];
    [aParams addIfDefinedKey:@"objectFilterEngineType" withString:self.objectFilterEngineType];
    [aParams addIfDefinedKey:@"objectFilter" withObject:self.objectFilter];
    [aParams addIfDefinedKey:@"objectTasks" withArray:self.objectTasks];
    [aParams addIfDefinedKey:@"lastExecutionStartedAt" withInt:self.lastExecutionStartedAt];
    [aParams addIfDefinedKey:@"maxTotalCountAllowed" withInt:self.maxTotalCountAllowed];
}

- (void)dealloc
{
    [self->_name release];
    [self->_systemName release];
    [self->_description release];
    [self->_objectFilterEngineType release];
    [self->_objectFilter release];
    [self->_objectTasks release];
    [super dealloc];
}

@end

@interface KalturaScheduledTaskProfileListResponse()
@property (nonatomic,retain) NSMutableArray* objects;
@property (nonatomic,assign) int totalCount;
@end

@implementation KalturaScheduledTaskProfileListResponse
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
    return @"KalturaScheduledTaskProfile";
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
        [aParams putKey:@"objectType" withString:@"KalturaScheduledTaskProfileListResponse"];
}

- (void)dealloc
{
    [self->_objects release];
    [super dealloc];
}

@end

@implementation KalturaConvertEntryFlavorsObjectTask
@synthesize flavorParamsIds = _flavorParamsIds;
@synthesize reconvert = _reconvert;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_reconvert = KALTURA_UNDEF_BOOL;
    return self;
}

- (KalturaFieldType)getTypeOfFlavorParamsIds
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfReconvert
{
    return KFT_Bool;
}

- (void)setReconvertFromString:(NSString*)aPropVal
{
    self.reconvert = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaConvertEntryFlavorsObjectTask"];
    [aParams addIfDefinedKey:@"flavorParamsIds" withString:self.flavorParamsIds];
    [aParams addIfDefinedKey:@"reconvert" withBool:self.reconvert];
}

- (void)dealloc
{
    [self->_flavorParamsIds release];
    [super dealloc];
}

@end

@implementation KalturaDeleteEntryFlavorsObjectTask
@synthesize deleteType = _deleteType;
@synthesize flavorParamsIds = _flavorParamsIds;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_deleteType = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfDeleteType
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfFlavorParamsIds
{
    return KFT_String;
}

- (void)setDeleteTypeFromString:(NSString*)aPropVal
{
    self.deleteType = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDeleteEntryFlavorsObjectTask"];
    [aParams addIfDefinedKey:@"deleteType" withInt:self.deleteType];
    [aParams addIfDefinedKey:@"flavorParamsIds" withString:self.flavorParamsIds];
}

- (void)dealloc
{
    [self->_flavorParamsIds release];
    [super dealloc];
}

@end

@implementation KalturaDeleteEntryObjectTask
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDeleteEntryObjectTask"];
}

@end

@implementation KalturaDeleteLocalContentObjectTask
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDeleteLocalContentObjectTask"];
}

@end

@implementation KalturaModifyCategoriesObjectTask
@synthesize addRemoveType = _addRemoveType;
@synthesize categoryIds = _categoryIds;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_addRemoveType = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfAddRemoveType
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfCategoryIds
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfCategoryIds
{
    return @"KalturaIntegerValue";
}

- (void)setAddRemoveTypeFromString:(NSString*)aPropVal
{
    self.addRemoveType = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaModifyCategoriesObjectTask"];
    [aParams addIfDefinedKey:@"addRemoveType" withInt:self.addRemoveType];
    [aParams addIfDefinedKey:@"categoryIds" withArray:self.categoryIds];
}

- (void)dealloc
{
    [self->_categoryIds release];
    [super dealloc];
}

@end

@implementation KalturaScheduledTaskJobData
@synthesize maxResults = _maxResults;
@synthesize resultsFilePath = _resultsFilePath;
@synthesize referenceTime = _referenceTime;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_maxResults = KALTURA_UNDEF_INT;
    self->_referenceTime = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfMaxResults
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfResultsFilePath
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfReferenceTime
{
    return KFT_Int;
}

- (void)setMaxResultsFromString:(NSString*)aPropVal
{
    self.maxResults = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setReferenceTimeFromString:(NSString*)aPropVal
{
    self.referenceTime = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaScheduledTaskJobData"];
    [aParams addIfDefinedKey:@"maxResults" withInt:self.maxResults];
    [aParams addIfDefinedKey:@"resultsFilePath" withString:self.resultsFilePath];
    [aParams addIfDefinedKey:@"referenceTime" withInt:self.referenceTime];
}

- (void)dealloc
{
    [self->_resultsFilePath release];
    [super dealloc];
}

@end

@implementation KalturaScheduledTaskProfileBaseFilter
@synthesize idEqual = _idEqual;
@synthesize idIn = _idIn;
@synthesize partnerIdEqual = _partnerIdEqual;
@synthesize partnerIdIn = _partnerIdIn;
@synthesize systemNameEqual = _systemNameEqual;
@synthesize systemNameIn = _systemNameIn;
@synthesize statusEqual = _statusEqual;
@synthesize statusIn = _statusIn;
@synthesize createdAtGreaterThanOrEqual = _createdAtGreaterThanOrEqual;
@synthesize createdAtLessThanOrEqual = _createdAtLessThanOrEqual;
@synthesize updatedAtGreaterThanOrEqual = _updatedAtGreaterThanOrEqual;
@synthesize updatedAtLessThanOrEqual = _updatedAtLessThanOrEqual;
@synthesize lastExecutionStartedAtGreaterThanOrEqual = _lastExecutionStartedAtGreaterThanOrEqual;
@synthesize lastExecutionStartedAtLessThanOrEqual = _lastExecutionStartedAtLessThanOrEqual;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_idEqual = KALTURA_UNDEF_INT;
    self->_partnerIdEqual = KALTURA_UNDEF_INT;
    self->_statusEqual = KALTURA_UNDEF_INT;
    self->_createdAtGreaterThanOrEqual = KALTURA_UNDEF_INT;
    self->_createdAtLessThanOrEqual = KALTURA_UNDEF_INT;
    self->_updatedAtGreaterThanOrEqual = KALTURA_UNDEF_INT;
    self->_updatedAtLessThanOrEqual = KALTURA_UNDEF_INT;
    self->_lastExecutionStartedAtGreaterThanOrEqual = KALTURA_UNDEF_INT;
    self->_lastExecutionStartedAtLessThanOrEqual = KALTURA_UNDEF_INT;
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

- (KalturaFieldType)getTypeOfSystemNameEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSystemNameIn
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

- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfLastExecutionStartedAtGreaterThanOrEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfLastExecutionStartedAtLessThanOrEqual
{
    return KFT_Int;
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

- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal
{
    self.createdAtGreaterThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal
{
    self.createdAtLessThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal
{
    self.updatedAtGreaterThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal
{
    self.updatedAtLessThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setLastExecutionStartedAtGreaterThanOrEqualFromString:(NSString*)aPropVal
{
    self.lastExecutionStartedAtGreaterThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setLastExecutionStartedAtLessThanOrEqualFromString:(NSString*)aPropVal
{
    self.lastExecutionStartedAtLessThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaScheduledTaskProfileBaseFilter"];
    [aParams addIfDefinedKey:@"idEqual" withInt:self.idEqual];
    [aParams addIfDefinedKey:@"idIn" withString:self.idIn];
    [aParams addIfDefinedKey:@"partnerIdEqual" withInt:self.partnerIdEqual];
    [aParams addIfDefinedKey:@"partnerIdIn" withString:self.partnerIdIn];
    [aParams addIfDefinedKey:@"systemNameEqual" withString:self.systemNameEqual];
    [aParams addIfDefinedKey:@"systemNameIn" withString:self.systemNameIn];
    [aParams addIfDefinedKey:@"statusEqual" withInt:self.statusEqual];
    [aParams addIfDefinedKey:@"statusIn" withString:self.statusIn];
    [aParams addIfDefinedKey:@"createdAtGreaterThanOrEqual" withInt:self.createdAtGreaterThanOrEqual];
    [aParams addIfDefinedKey:@"createdAtLessThanOrEqual" withInt:self.createdAtLessThanOrEqual];
    [aParams addIfDefinedKey:@"updatedAtGreaterThanOrEqual" withInt:self.updatedAtGreaterThanOrEqual];
    [aParams addIfDefinedKey:@"updatedAtLessThanOrEqual" withInt:self.updatedAtLessThanOrEqual];
    [aParams addIfDefinedKey:@"lastExecutionStartedAtGreaterThanOrEqual" withInt:self.lastExecutionStartedAtGreaterThanOrEqual];
    [aParams addIfDefinedKey:@"lastExecutionStartedAtLessThanOrEqual" withInt:self.lastExecutionStartedAtLessThanOrEqual];
}

- (void)dealloc
{
    [self->_idIn release];
    [self->_partnerIdIn release];
    [self->_systemNameEqual release];
    [self->_systemNameIn release];
    [self->_statusIn release];
    [super dealloc];
}

@end

@implementation KalturaScheduledTaskProfileFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaScheduledTaskProfileFilter"];
}

@end

///////////////////////// services /////////////////////////
@implementation KalturaScheduledTaskProfileService
- (KalturaScheduledTaskProfile*)addWithScheduledTaskProfile:(KalturaScheduledTaskProfile*)aScheduledTaskProfile
{
    [self.client.params addIfDefinedKey:@"scheduledTaskProfile" withObject:aScheduledTaskProfile];
    return [self.client queueObjectService:@"scheduledtask_scheduledtaskprofile" withAction:@"add" withExpectedType:@"KalturaScheduledTaskProfile"];
}

- (KalturaScheduledTaskProfile*)getWithId:(int)aId
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    return [self.client queueObjectService:@"scheduledtask_scheduledtaskprofile" withAction:@"get" withExpectedType:@"KalturaScheduledTaskProfile"];
}

- (KalturaScheduledTaskProfile*)updateWithId:(int)aId withScheduledTaskProfile:(KalturaScheduledTaskProfile*)aScheduledTaskProfile
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    [self.client.params addIfDefinedKey:@"scheduledTaskProfile" withObject:aScheduledTaskProfile];
    return [self.client queueObjectService:@"scheduledtask_scheduledtaskprofile" withAction:@"update" withExpectedType:@"KalturaScheduledTaskProfile"];
}

- (void)deleteWithId:(int)aId
{
    [self.client.params addIfDefinedKey:@"id" withInt:aId];
    [self.client queueVoidService:@"scheduledtask_scheduledtaskprofile" withAction:@"delete"];
}

- (KalturaScheduledTaskProfileListResponse*)listWithFilter:(KalturaScheduledTaskProfileFilter*)aFilter withPager:(KalturaFilterPager*)aPager
{
    [self.client.params addIfDefinedKey:@"filter" withObject:aFilter];
    [self.client.params addIfDefinedKey:@"pager" withObject:aPager];
    return [self.client queueObjectService:@"scheduledtask_scheduledtaskprofile" withAction:@"list" withExpectedType:@"KalturaScheduledTaskProfileListResponse"];
}

- (KalturaScheduledTaskProfileListResponse*)listWithFilter:(KalturaScheduledTaskProfileFilter*)aFilter
{
    return [self listWithFilter:aFilter withPager:nil];
}

- (KalturaScheduledTaskProfileListResponse*)list
{
    return [self listWithFilter:nil];
}

- (int)requestDryRunWithScheduledTaskProfileId:(int)aScheduledTaskProfileId withMaxResults:(int)aMaxResults
{
    [self.client.params addIfDefinedKey:@"scheduledTaskProfileId" withInt:aScheduledTaskProfileId];
    [self.client.params addIfDefinedKey:@"maxResults" withInt:aMaxResults];
    return [self.client queueIntService:@"scheduledtask_scheduledtaskprofile" withAction:@"requestDryRun"];
}

- (int)requestDryRunWithScheduledTaskProfileId:(int)aScheduledTaskProfileId
{
    return [self requestDryRunWithScheduledTaskProfileId:aScheduledTaskProfileId withMaxResults:KALTURA_UNDEF_INT];
}

- (KalturaObjectListResponse*)getDryRunResultsWithRequestId:(int)aRequestId
{
    [self.client.params addIfDefinedKey:@"requestId" withInt:aRequestId];
    return [self.client queueObjectService:@"scheduledtask_scheduledtaskprofile" withAction:@"getDryRunResults" withExpectedType:@"KalturaObjectListResponse"];
}

@end

@implementation KalturaScheduledTaskClientPlugin
@synthesize client = _client;

- (id)initWithClient:(KalturaClient*)aClient
{
    self = [super init];
    if (self == nil)
        return nil;
    self.client = aClient;
    return self;
}

- (KalturaScheduledTaskProfileService*)scheduledTaskProfile
{
    if (self->_scheduledTaskProfile == nil)
    	self->_scheduledTaskProfile = [[KalturaScheduledTaskProfileService alloc] initWithClient:self.client];
    return self->_scheduledTaskProfile;
}

- (void)dealloc
{
    [self->_scheduledTaskProfile release];
	[super dealloc];
}

@end

