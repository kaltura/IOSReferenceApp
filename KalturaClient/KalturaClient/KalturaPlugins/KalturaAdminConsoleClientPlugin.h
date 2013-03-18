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
// @package External
// @subpackage Kaltura
#import "../KalturaClient.h"

///////////////////////// enums /////////////////////////
// @package External
// @subpackage Kaltura
@interface KalturaTrackEntryEventType : NSObject
+ (int)UPLOADED_FILE;
+ (int)WEBCAM_COMPLETED;
+ (int)IMPORT_STARTED;
+ (int)ADD_ENTRY;
+ (int)UPDATE_ENTRY;
+ (int)DELETED_ENTRY;
@end

// @package External
// @subpackage Kaltura
@interface KalturaUiConfAdminOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)UPDATED_AT_DESC;
@end

///////////////////////// classes /////////////////////////
// @package External
// @subpackage Kaltura
@interface KalturaTrackEntry : KalturaObjectBase
@property (nonatomic,assign) int id;
@property (nonatomic,assign) int trackEventType;	// enum KalturaTrackEntryEventType
@property (nonatomic,copy) NSString* psVersion;
@property (nonatomic,copy) NSString* context;
@property (nonatomic,assign) int partnerId;
@property (nonatomic,copy) NSString* entryId;
@property (nonatomic,copy) NSString* hostName;
@property (nonatomic,copy) NSString* userId;
@property (nonatomic,copy) NSString* changedProperties;
@property (nonatomic,copy) NSString* paramStr1;
@property (nonatomic,copy) NSString* paramStr2;
@property (nonatomic,copy) NSString* paramStr3;
@property (nonatomic,copy) NSString* ks;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,assign) int createdAt;
@property (nonatomic,assign) int updatedAt;
@property (nonatomic,copy) NSString* userIp;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfTrackEventType;
- (KalturaFieldType)getTypeOfPsVersion;
- (KalturaFieldType)getTypeOfContext;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfHostName;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfChangedProperties;
- (KalturaFieldType)getTypeOfParamStr1;
- (KalturaFieldType)getTypeOfParamStr2;
- (KalturaFieldType)getTypeOfParamStr3;
- (KalturaFieldType)getTypeOfKs;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfUserIp;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setTrackEventTypeFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
@end

// @package External
// @subpackage Kaltura
@interface KalturaTrackEntryListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaTrackEntry elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package External
// @subpackage Kaltura
@interface KalturaUiConfAdmin : KalturaUiConf
@property (nonatomic,assign) BOOL isPublic;
- (KalturaFieldType)getTypeOfIsPublic;
- (void)setIsPublicFromString:(NSString*)aPropVal;
@end

// @package External
// @subpackage Kaltura
@interface KalturaUiConfAdminListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaUiConfAdmin elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package External
// @subpackage Kaltura
@interface KalturaUiConfAdminBaseFilter : KalturaUiConfFilter
@end

// @package External
// @subpackage Kaltura
@interface KalturaUiConfAdminFilter : KalturaUiConfAdminBaseFilter
@end

///////////////////////// services /////////////////////////
// @package External
// @subpackage Kaltura
// Entry Admin service
@interface KalturaEntryAdminService : KalturaServiceBase
// Get base entry by ID with no filters.
- (KalturaBaseEntry*)getWithEntryId:(NSString*)aEntryId withVersion:(int)aVersion;
- (KalturaBaseEntry*)getWithEntryId:(NSString*)aEntryId;
// Get base entry by flavor ID with no filters.
- (KalturaBaseEntry*)getByFlavorIdWithFlavorId:(NSString*)aFlavorId withVersion:(int)aVersion;
- (KalturaBaseEntry*)getByFlavorIdWithFlavorId:(NSString*)aFlavorId;
// Get base entry by ID with no filters.
- (KalturaTrackEntryListResponse*)getTracksWithEntryId:(NSString*)aEntryId;
@end

// @package External
// @subpackage Kaltura
// UiConf Admin service
@interface KalturaUiConfAdminService : KalturaServiceBase
// Adds new UIConf with no partner limitation
- (KalturaUiConfAdmin*)addWithUiConf:(KalturaUiConfAdmin*)aUiConf;
// Update an existing UIConf with no partner limitation
- (KalturaUiConfAdmin*)updateWithId:(int)aId withUiConf:(KalturaUiConfAdmin*)aUiConf;
// Retrieve a UIConf by id with no partner limitation
- (KalturaUiConfAdmin*)getWithId:(int)aId;
// Delete an existing UIConf with no partner limitation
- (void)deleteWithId:(int)aId;
// Retrieve a list of available UIConfs  with no partner limitation
- (KalturaUiConfAdminListResponse*)listWithFilter:(KalturaUiConfFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaUiConfAdminListResponse*)listWithFilter:(KalturaUiConfFilter*)aFilter;
- (KalturaUiConfAdminListResponse*)list;
@end

// @package External
// @subpackage Kaltura
@interface KalturaReportAdminService : KalturaServiceBase
- (KalturaReport*)addWithReport:(KalturaReport*)aReport;
- (KalturaReport*)getWithId:(int)aId;
- (KalturaReportListResponse*)listWithFilter:(KalturaReportFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaReportListResponse*)listWithFilter:(KalturaReportFilter*)aFilter;
- (KalturaReportListResponse*)list;
- (KalturaReport*)updateWithId:(int)aId withReport:(KalturaReport*)aReport;
- (void)deleteWithId:(int)aId;
- (KalturaReportResponse*)executeDebugWithId:(int)aId withParams:(NSArray*)aParams;
- (KalturaReportResponse*)executeDebugWithId:(int)aId;
- (NSMutableArray*)getParametersWithId:(int)aId;
- (NSString*)getCsvUrlWithId:(int)aId withReportPartnerId:(int)aReportPartnerId;
@end

@interface KalturaAdminConsoleClientPlugin : KalturaClientPlugin
{
	KalturaEntryAdminService* _entryAdmin;
	KalturaUiConfAdminService* _uiConfAdmin;
	KalturaReportAdminService* _reportAdmin;
}

@property (nonatomic, assign) KalturaClientBase* client;
@property (nonatomic, readonly) KalturaEntryAdminService* entryAdmin;
@property (nonatomic, readonly) KalturaUiConfAdminService* uiConfAdmin;
@property (nonatomic, readonly) KalturaReportAdminService* reportAdmin;
@end

