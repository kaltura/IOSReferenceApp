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
@interface KalturaEventNotificationTemplateStatus : NSObject
+ (int)DISABLED;
+ (int)ACTIVE;
+ (int)DELETED;
@end

// @package External
// @subpackage Kaltura
@interface KalturaEventNotificationTemplateOrderBy : NSObject
+ (NSString*)ID_ASC;
+ (NSString*)ID_DESC;
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package External
// @subpackage Kaltura
@interface KalturaEventNotificationTemplateType : NSObject
+ (NSString*)EMAIL;
@end

///////////////////////// classes /////////////////////////
// @package External
// @subpackage Kaltura
@interface KalturaEventNotificationDispatchJobData : KalturaJobData
@property (nonatomic,assign) int templateId;
- (KalturaFieldType)getTypeOfTemplateId;
- (void)setTemplateIdFromString:(NSString*)aPropVal;
@end

// @package External
// @subpackage Kaltura
@interface KalturaEventNotificationTemplateBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* partnerIdIn;
@property (nonatomic,copy) NSString* typeEqual;	// enum KalturaEventNotificationTemplateType
@property (nonatomic,copy) NSString* typeIn;
@property (nonatomic,assign) int statusEqual;	// enum KalturaEventNotificationTemplateStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdIn;
- (KalturaFieldType)getTypeOfTypeEqual;
- (KalturaFieldType)getTypeOfTypeIn;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package External
// @subpackage Kaltura
@interface KalturaEventNotificationTemplateFilter : KalturaEventNotificationTemplateBaseFilter
@end

///////////////////////// services /////////////////////////
