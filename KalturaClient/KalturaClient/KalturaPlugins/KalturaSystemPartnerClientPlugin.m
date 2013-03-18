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
#import "KalturaSystemPartnerClientPlugin.h"

///////////////////////// enums /////////////////////////
@implementation KalturaSystemPartnerLimitType
+ (NSString*)ENTRIES
{
    return @"ENTRIES";
}
+ (NSString*)MONTHLY_STREAM_ENTRIES
{
    return @"MONTHLY_STREAM_ENTRIES";
}
+ (NSString*)MONTHLY_BANDWIDTH
{
    return @"MONTHLY_BANDWIDTH";
}
+ (NSString*)PUBLISHERS
{
    return @"PUBLISHERS";
}
+ (NSString*)ADMIN_LOGIN_USERS
{
    return @"ADMIN_LOGIN_USERS";
}
+ (NSString*)LOGIN_USERS
{
    return @"LOGIN_USERS";
}
+ (NSString*)USER_LOGIN_ATTEMPTS
{
    return @"USER_LOGIN_ATTEMPTS";
}
+ (NSString*)BULK_SIZE
{
    return @"BULK_SIZE";
}
+ (NSString*)MONTHLY_STORAGE
{
    return @"MONTHLY_STORAGE";
}
+ (NSString*)MONTHLY_STORAGE_AND_BANDWIDTH
{
    return @"MONTHLY_STORAGE_AND_BANDWIDTH";
}
+ (NSString*)END_USERS
{
    return @"END_USERS";
}
+ (NSString*)ACCESS_CONTROLS
{
    return @"ACCESS_CONTROLS";
}
@end

///////////////////////// classes /////////////////////////
@implementation KalturaSystemPartnerLimit
@synthesize type = _type;
@synthesize max = _max;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_max = KALTURA_UNDEF_FLOAT;
    return self;
}

- (KalturaFieldType)getTypeOfType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfMax
{
    return KFT_Float;
}

- (void)setMaxFromString:(NSString*)aPropVal
{
    self.max = [KalturaSimpleTypeParser parseFloat:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSystemPartnerLimit"];
    [aParams addIfDefinedKey:@"type" withString:self.type];
    [aParams addIfDefinedKey:@"max" withFloat:self.max];
}

- (void)dealloc
{
    [self->_type release];
    [super dealloc];
}

@end

@interface KalturaSystemPartnerConfiguration()
@property (nonatomic,assign) int id;
@end

@implementation KalturaSystemPartnerConfiguration
@synthesize id = _id;
@synthesize partnerName = _partnerName;
@synthesize description = _description;
@synthesize adminName = _adminName;
@synthesize adminEmail = _adminEmail;
@synthesize host = _host;
@synthesize cdnHost = _cdnHost;
@synthesize thumbnailHost = _thumbnailHost;
@synthesize partnerPackage = _partnerPackage;
@synthesize monitorUsage = _monitorUsage;
@synthesize moderateContent = _moderateContent;
@synthesize rtmpUrl = _rtmpUrl;
@synthesize storageDeleteFromKaltura = _storageDeleteFromKaltura;
@synthesize storageServePriority = _storageServePriority;
@synthesize kmcVersion = _kmcVersion;
@synthesize restrictThumbnailByKs = _restrictThumbnailByKs;
@synthesize supportAnimatedThumbnails = _supportAnimatedThumbnails;
@synthesize defThumbOffset = _defThumbOffset;
@synthesize defThumbDensity = _defThumbDensity;
@synthesize userSessionRoleId = _userSessionRoleId;
@synthesize adminSessionRoleId = _adminSessionRoleId;
@synthesize alwaysAllowedPermissionNames = _alwaysAllowedPermissionNames;
@synthesize importRemoteSourceForConvert = _importRemoteSourceForConvert;
@synthesize permissions = _permissions;
@synthesize notificationsConfig = _notificationsConfig;
@synthesize allowMultiNotification = _allowMultiNotification;
@synthesize loginBlockPeriod = _loginBlockPeriod;
@synthesize numPrevPassToKeep = _numPrevPassToKeep;
@synthesize passReplaceFreq = _passReplaceFreq;
@synthesize isFirstLogin = _isFirstLogin;
@synthesize partnerGroupType = _partnerGroupType;
@synthesize partnerParentId = _partnerParentId;
@synthesize limits = _limits;
@synthesize streamerType = _streamerType;
@synthesize mediaProtocol = _mediaProtocol;
@synthesize extendedFreeTrailExpiryReason = _extendedFreeTrailExpiryReason;
@synthesize extendedFreeTrailExpiryDate = _extendedFreeTrailExpiryDate;
@synthesize extendedFreeTrail = _extendedFreeTrail;
@synthesize crmId = _crmId;
@synthesize crmLink = _crmLink;
@synthesize verticalClasiffication = _verticalClasiffication;
@synthesize partnerPackageClassOfService = _partnerPackageClassOfService;
@synthesize enableBulkUploadNotificationsEmails = _enableBulkUploadNotificationsEmails;
@synthesize deliveryRestrictions = _deliveryRestrictions;
@synthesize bulkUploadNotificationsEmail = _bulkUploadNotificationsEmail;
@synthesize internalUse = _internalUse;
@synthesize defaultLiveStreamEntrySourceType = _defaultLiveStreamEntrySourceType;
@synthesize liveStreamProvisionParams = _liveStreamProvisionParams;
@synthesize autoModerateEntryFilter = _autoModerateEntryFilter;
@synthesize logoutUrl = _logoutUrl;
@synthesize defaultEntitlementEnforcement = _defaultEntitlementEnforcement;
@synthesize cacheFlavorVersion = _cacheFlavorVersion;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_id = KALTURA_UNDEF_INT;
    self->_partnerPackage = KALTURA_UNDEF_INT;
    self->_monitorUsage = KALTURA_UNDEF_INT;
    self->_moderateContent = KALTURA_UNDEF_BOOL;
    self->_storageDeleteFromKaltura = KALTURA_UNDEF_BOOL;
    self->_storageServePriority = KALTURA_UNDEF_INT;
    self->_kmcVersion = KALTURA_UNDEF_INT;
    self->_restrictThumbnailByKs = KALTURA_UNDEF_INT;
    self->_supportAnimatedThumbnails = KALTURA_UNDEF_BOOL;
    self->_defThumbOffset = KALTURA_UNDEF_INT;
    self->_defThumbDensity = KALTURA_UNDEF_INT;
    self->_userSessionRoleId = KALTURA_UNDEF_INT;
    self->_adminSessionRoleId = KALTURA_UNDEF_INT;
    self->_importRemoteSourceForConvert = KALTURA_UNDEF_BOOL;
    self->_allowMultiNotification = KALTURA_UNDEF_BOOL;
    self->_loginBlockPeriod = KALTURA_UNDEF_INT;
    self->_numPrevPassToKeep = KALTURA_UNDEF_INT;
    self->_passReplaceFreq = KALTURA_UNDEF_INT;
    self->_isFirstLogin = KALTURA_UNDEF_BOOL;
    self->_partnerGroupType = KALTURA_UNDEF_INT;
    self->_partnerParentId = KALTURA_UNDEF_INT;
    self->_extendedFreeTrailExpiryDate = KALTURA_UNDEF_INT;
    self->_extendedFreeTrail = KALTURA_UNDEF_INT;
    self->_enableBulkUploadNotificationsEmails = KALTURA_UNDEF_BOOL;
    self->_internalUse = KALTURA_UNDEF_BOOL;
    self->_defaultEntitlementEnforcement = KALTURA_UNDEF_BOOL;
    self->_cacheFlavorVersion = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDescription
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfAdminName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfAdminEmail
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfHost
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfCdnHost
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfThumbnailHost
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPartnerPackage
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfMonitorUsage
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfModerateContent
{
    return KFT_Bool;
}

- (KalturaFieldType)getTypeOfRtmpUrl
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfStorageDeleteFromKaltura
{
    return KFT_Bool;
}

- (KalturaFieldType)getTypeOfStorageServePriority
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfKmcVersion
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfRestrictThumbnailByKs
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfSupportAnimatedThumbnails
{
    return KFT_Bool;
}

- (KalturaFieldType)getTypeOfDefThumbOffset
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfDefThumbDensity
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUserSessionRoleId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfAdminSessionRoleId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfAlwaysAllowedPermissionNames
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfImportRemoteSourceForConvert
{
    return KFT_Bool;
}

- (KalturaFieldType)getTypeOfPermissions
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfPermissions
{
    return @"KalturaPermission";
}

- (KalturaFieldType)getTypeOfNotificationsConfig
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfAllowMultiNotification
{
    return KFT_Bool;
}

- (KalturaFieldType)getTypeOfLoginBlockPeriod
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfNumPrevPassToKeep
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPassReplaceFreq
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfIsFirstLogin
{
    return KFT_Bool;
}

- (KalturaFieldType)getTypeOfPartnerGroupType
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerParentId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfLimits
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfLimits
{
    return @"KalturaSystemPartnerLimit";
}

- (KalturaFieldType)getTypeOfStreamerType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfMediaProtocol
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfExtendedFreeTrailExpiryReason
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfExtendedFreeTrailExpiryDate
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfExtendedFreeTrail
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfCrmId
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfCrmLink
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfVerticalClasiffication
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPartnerPackageClassOfService
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfEnableBulkUploadNotificationsEmails
{
    return KFT_Bool;
}

- (KalturaFieldType)getTypeOfDeliveryRestrictions
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfBulkUploadNotificationsEmail
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfInternalUse
{
    return KFT_Bool;
}

- (KalturaFieldType)getTypeOfDefaultLiveStreamEntrySourceType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfLiveStreamProvisionParams
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfAutoModerateEntryFilter
{
    return KFT_Object;
}

- (NSString*)getObjectTypeOfAutoModerateEntryFilter
{
    return @"KalturaBaseEntryFilter";
}

- (KalturaFieldType)getTypeOfLogoutUrl
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDefaultEntitlementEnforcement
{
    return KFT_Bool;
}

- (KalturaFieldType)getTypeOfCacheFlavorVersion
{
    return KFT_Int;
}

- (void)setIdFromString:(NSString*)aPropVal
{
    self.id = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerPackageFromString:(NSString*)aPropVal
{
    self.partnerPackage = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setMonitorUsageFromString:(NSString*)aPropVal
{
    self.monitorUsage = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setModerateContentFromString:(NSString*)aPropVal
{
    self.moderateContent = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)setStorageDeleteFromKalturaFromString:(NSString*)aPropVal
{
    self.storageDeleteFromKaltura = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)setStorageServePriorityFromString:(NSString*)aPropVal
{
    self.storageServePriority = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setKmcVersionFromString:(NSString*)aPropVal
{
    self.kmcVersion = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setRestrictThumbnailByKsFromString:(NSString*)aPropVal
{
    self.restrictThumbnailByKs = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setSupportAnimatedThumbnailsFromString:(NSString*)aPropVal
{
    self.supportAnimatedThumbnails = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)setDefThumbOffsetFromString:(NSString*)aPropVal
{
    self.defThumbOffset = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setDefThumbDensityFromString:(NSString*)aPropVal
{
    self.defThumbDensity = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUserSessionRoleIdFromString:(NSString*)aPropVal
{
    self.userSessionRoleId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setAdminSessionRoleIdFromString:(NSString*)aPropVal
{
    self.adminSessionRoleId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setImportRemoteSourceForConvertFromString:(NSString*)aPropVal
{
    self.importRemoteSourceForConvert = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)setAllowMultiNotificationFromString:(NSString*)aPropVal
{
    self.allowMultiNotification = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)setLoginBlockPeriodFromString:(NSString*)aPropVal
{
    self.loginBlockPeriod = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setNumPrevPassToKeepFromString:(NSString*)aPropVal
{
    self.numPrevPassToKeep = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPassReplaceFreqFromString:(NSString*)aPropVal
{
    self.passReplaceFreq = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setIsFirstLoginFromString:(NSString*)aPropVal
{
    self.isFirstLogin = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)setPartnerGroupTypeFromString:(NSString*)aPropVal
{
    self.partnerGroupType = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerParentIdFromString:(NSString*)aPropVal
{
    self.partnerParentId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setExtendedFreeTrailExpiryDateFromString:(NSString*)aPropVal
{
    self.extendedFreeTrailExpiryDate = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setExtendedFreeTrailFromString:(NSString*)aPropVal
{
    self.extendedFreeTrail = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setEnableBulkUploadNotificationsEmailsFromString:(NSString*)aPropVal
{
    self.enableBulkUploadNotificationsEmails = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)setInternalUseFromString:(NSString*)aPropVal
{
    self.internalUse = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)setDefaultEntitlementEnforcementFromString:(NSString*)aPropVal
{
    self.defaultEntitlementEnforcement = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)setCacheFlavorVersionFromString:(NSString*)aPropVal
{
    self.cacheFlavorVersion = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSystemPartnerConfiguration"];
    [aParams addIfDefinedKey:@"partnerName" withString:self.partnerName];
    [aParams addIfDefinedKey:@"description" withString:self.description];
    [aParams addIfDefinedKey:@"adminName" withString:self.adminName];
    [aParams addIfDefinedKey:@"adminEmail" withString:self.adminEmail];
    [aParams addIfDefinedKey:@"host" withString:self.host];
    [aParams addIfDefinedKey:@"cdnHost" withString:self.cdnHost];
    [aParams addIfDefinedKey:@"thumbnailHost" withString:self.thumbnailHost];
    [aParams addIfDefinedKey:@"partnerPackage" withInt:self.partnerPackage];
    [aParams addIfDefinedKey:@"monitorUsage" withInt:self.monitorUsage];
    [aParams addIfDefinedKey:@"moderateContent" withBool:self.moderateContent];
    [aParams addIfDefinedKey:@"rtmpUrl" withString:self.rtmpUrl];
    [aParams addIfDefinedKey:@"storageDeleteFromKaltura" withBool:self.storageDeleteFromKaltura];
    [aParams addIfDefinedKey:@"storageServePriority" withInt:self.storageServePriority];
    [aParams addIfDefinedKey:@"kmcVersion" withInt:self.kmcVersion];
    [aParams addIfDefinedKey:@"restrictThumbnailByKs" withInt:self.restrictThumbnailByKs];
    [aParams addIfDefinedKey:@"supportAnimatedThumbnails" withBool:self.supportAnimatedThumbnails];
    [aParams addIfDefinedKey:@"defThumbOffset" withInt:self.defThumbOffset];
    [aParams addIfDefinedKey:@"defThumbDensity" withInt:self.defThumbDensity];
    [aParams addIfDefinedKey:@"userSessionRoleId" withInt:self.userSessionRoleId];
    [aParams addIfDefinedKey:@"adminSessionRoleId" withInt:self.adminSessionRoleId];
    [aParams addIfDefinedKey:@"alwaysAllowedPermissionNames" withString:self.alwaysAllowedPermissionNames];
    [aParams addIfDefinedKey:@"importRemoteSourceForConvert" withBool:self.importRemoteSourceForConvert];
    [aParams addIfDefinedKey:@"permissions" withArray:self.permissions];
    [aParams addIfDefinedKey:@"notificationsConfig" withString:self.notificationsConfig];
    [aParams addIfDefinedKey:@"allowMultiNotification" withBool:self.allowMultiNotification];
    [aParams addIfDefinedKey:@"loginBlockPeriod" withInt:self.loginBlockPeriod];
    [aParams addIfDefinedKey:@"numPrevPassToKeep" withInt:self.numPrevPassToKeep];
    [aParams addIfDefinedKey:@"passReplaceFreq" withInt:self.passReplaceFreq];
    [aParams addIfDefinedKey:@"isFirstLogin" withBool:self.isFirstLogin];
    [aParams addIfDefinedKey:@"partnerGroupType" withInt:self.partnerGroupType];
    [aParams addIfDefinedKey:@"partnerParentId" withInt:self.partnerParentId];
    [aParams addIfDefinedKey:@"limits" withArray:self.limits];
    [aParams addIfDefinedKey:@"streamerType" withString:self.streamerType];
    [aParams addIfDefinedKey:@"mediaProtocol" withString:self.mediaProtocol];
    [aParams addIfDefinedKey:@"extendedFreeTrailExpiryReason" withString:self.extendedFreeTrailExpiryReason];
    [aParams addIfDefinedKey:@"extendedFreeTrailExpiryDate" withInt:self.extendedFreeTrailExpiryDate];
    [aParams addIfDefinedKey:@"extendedFreeTrail" withInt:self.extendedFreeTrail];
    [aParams addIfDefinedKey:@"crmId" withString:self.crmId];
    [aParams addIfDefinedKey:@"crmLink" withString:self.crmLink];
    [aParams addIfDefinedKey:@"verticalClasiffication" withString:self.verticalClasiffication];
    [aParams addIfDefinedKey:@"partnerPackageClassOfService" withString:self.partnerPackageClassOfService];
    [aParams addIfDefinedKey:@"enableBulkUploadNotificationsEmails" withBool:self.enableBulkUploadNotificationsEmails];
    [aParams addIfDefinedKey:@"deliveryRestrictions" withString:self.deliveryRestrictions];
    [aParams addIfDefinedKey:@"bulkUploadNotificationsEmail" withString:self.bulkUploadNotificationsEmail];
    [aParams addIfDefinedKey:@"internalUse" withBool:self.internalUse];
    [aParams addIfDefinedKey:@"defaultLiveStreamEntrySourceType" withString:self.defaultLiveStreamEntrySourceType];
    [aParams addIfDefinedKey:@"liveStreamProvisionParams" withString:self.liveStreamProvisionParams];
    [aParams addIfDefinedKey:@"autoModerateEntryFilter" withObject:self.autoModerateEntryFilter];
    [aParams addIfDefinedKey:@"logoutUrl" withString:self.logoutUrl];
    [aParams addIfDefinedKey:@"defaultEntitlementEnforcement" withBool:self.defaultEntitlementEnforcement];
    [aParams addIfDefinedKey:@"cacheFlavorVersion" withInt:self.cacheFlavorVersion];
}

- (void)dealloc
{
    [self->_partnerName release];
    [self->_description release];
    [self->_adminName release];
    [self->_adminEmail release];
    [self->_host release];
    [self->_cdnHost release];
    [self->_thumbnailHost release];
    [self->_rtmpUrl release];
    [self->_alwaysAllowedPermissionNames release];
    [self->_permissions release];
    [self->_notificationsConfig release];
    [self->_limits release];
    [self->_streamerType release];
    [self->_mediaProtocol release];
    [self->_extendedFreeTrailExpiryReason release];
    [self->_crmId release];
    [self->_crmLink release];
    [self->_verticalClasiffication release];
    [self->_partnerPackageClassOfService release];
    [self->_deliveryRestrictions release];
    [self->_bulkUploadNotificationsEmail release];
    [self->_defaultLiveStreamEntrySourceType release];
    [self->_liveStreamProvisionParams release];
    [self->_autoModerateEntryFilter release];
    [self->_logoutUrl release];
    [super dealloc];
}

@end

@implementation KalturaSystemPartnerPackage
@synthesize id = _id;
@synthesize name = _name;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_id = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfName
{
    return KFT_String;
}

- (void)setIdFromString:(NSString*)aPropVal
{
    self.id = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSystemPartnerPackage"];
    [aParams addIfDefinedKey:@"id" withInt:self.id];
    [aParams addIfDefinedKey:@"name" withString:self.name];
}

- (void)dealloc
{
    [self->_name release];
    [super dealloc];
}

@end

@implementation KalturaSystemPartnerUsageItem
@synthesize partnerId = _partnerId;
@synthesize partnerName = _partnerName;
@synthesize partnerStatus = _partnerStatus;
@synthesize partnerPackage = _partnerPackage;
@synthesize partnerCreatedAt = _partnerCreatedAt;
@synthesize views = _views;
@synthesize plays = _plays;
@synthesize entriesCount = _entriesCount;
@synthesize totalEntriesCount = _totalEntriesCount;
@synthesize videoEntriesCount = _videoEntriesCount;
@synthesize imageEntriesCount = _imageEntriesCount;
@synthesize audioEntriesCount = _audioEntriesCount;
@synthesize mixEntriesCount = _mixEntriesCount;
@synthesize bandwidth = _bandwidth;
@synthesize totalStorage = _totalStorage;
@synthesize storage = _storage;
@synthesize peakStorage = _peakStorage;
@synthesize avgStorage = _avgStorage;
@synthesize combinedBandwidthStorage = _combinedBandwidthStorage;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_partnerId = KALTURA_UNDEF_INT;
    self->_partnerStatus = KALTURA_UNDEF_INT;
    self->_partnerPackage = KALTURA_UNDEF_INT;
    self->_partnerCreatedAt = KALTURA_UNDEF_INT;
    self->_views = KALTURA_UNDEF_INT;
    self->_plays = KALTURA_UNDEF_INT;
    self->_entriesCount = KALTURA_UNDEF_INT;
    self->_totalEntriesCount = KALTURA_UNDEF_INT;
    self->_videoEntriesCount = KALTURA_UNDEF_INT;
    self->_imageEntriesCount = KALTURA_UNDEF_INT;
    self->_audioEntriesCount = KALTURA_UNDEF_INT;
    self->_mixEntriesCount = KALTURA_UNDEF_INT;
    self->_bandwidth = KALTURA_UNDEF_FLOAT;
    self->_totalStorage = KALTURA_UNDEF_FLOAT;
    self->_storage = KALTURA_UNDEF_FLOAT;
    self->_peakStorage = KALTURA_UNDEF_FLOAT;
    self->_avgStorage = KALTURA_UNDEF_FLOAT;
    self->_combinedBandwidthStorage = KALTURA_UNDEF_FLOAT;
    return self;
}

- (KalturaFieldType)getTypeOfPartnerId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPartnerStatus
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerPackage
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerCreatedAt
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfViews
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPlays
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfEntriesCount
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfTotalEntriesCount
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfVideoEntriesCount
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfImageEntriesCount
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfAudioEntriesCount
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfMixEntriesCount
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfBandwidth
{
    return KFT_Float;
}

- (KalturaFieldType)getTypeOfTotalStorage
{
    return KFT_Float;
}

- (KalturaFieldType)getTypeOfStorage
{
    return KFT_Float;
}

- (KalturaFieldType)getTypeOfPeakStorage
{
    return KFT_Float;
}

- (KalturaFieldType)getTypeOfAvgStorage
{
    return KFT_Float;
}

- (KalturaFieldType)getTypeOfCombinedBandwidthStorage
{
    return KFT_Float;
}

- (void)setPartnerIdFromString:(NSString*)aPropVal
{
    self.partnerId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerStatusFromString:(NSString*)aPropVal
{
    self.partnerStatus = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerPackageFromString:(NSString*)aPropVal
{
    self.partnerPackage = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerCreatedAtFromString:(NSString*)aPropVal
{
    self.partnerCreatedAt = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setViewsFromString:(NSString*)aPropVal
{
    self.views = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPlaysFromString:(NSString*)aPropVal
{
    self.plays = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setEntriesCountFromString:(NSString*)aPropVal
{
    self.entriesCount = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setTotalEntriesCountFromString:(NSString*)aPropVal
{
    self.totalEntriesCount = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setVideoEntriesCountFromString:(NSString*)aPropVal
{
    self.videoEntriesCount = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setImageEntriesCountFromString:(NSString*)aPropVal
{
    self.imageEntriesCount = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setAudioEntriesCountFromString:(NSString*)aPropVal
{
    self.audioEntriesCount = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setMixEntriesCountFromString:(NSString*)aPropVal
{
    self.mixEntriesCount = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setBandwidthFromString:(NSString*)aPropVal
{
    self.bandwidth = [KalturaSimpleTypeParser parseFloat:aPropVal];
}

- (void)setTotalStorageFromString:(NSString*)aPropVal
{
    self.totalStorage = [KalturaSimpleTypeParser parseFloat:aPropVal];
}

- (void)setStorageFromString:(NSString*)aPropVal
{
    self.storage = [KalturaSimpleTypeParser parseFloat:aPropVal];
}

- (void)setPeakStorageFromString:(NSString*)aPropVal
{
    self.peakStorage = [KalturaSimpleTypeParser parseFloat:aPropVal];
}

- (void)setAvgStorageFromString:(NSString*)aPropVal
{
    self.avgStorage = [KalturaSimpleTypeParser parseFloat:aPropVal];
}

- (void)setCombinedBandwidthStorageFromString:(NSString*)aPropVal
{
    self.combinedBandwidthStorage = [KalturaSimpleTypeParser parseFloat:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSystemPartnerUsageItem"];
    [aParams addIfDefinedKey:@"partnerId" withInt:self.partnerId];
    [aParams addIfDefinedKey:@"partnerName" withString:self.partnerName];
    [aParams addIfDefinedKey:@"partnerStatus" withInt:self.partnerStatus];
    [aParams addIfDefinedKey:@"partnerPackage" withInt:self.partnerPackage];
    [aParams addIfDefinedKey:@"partnerCreatedAt" withInt:self.partnerCreatedAt];
    [aParams addIfDefinedKey:@"views" withInt:self.views];
    [aParams addIfDefinedKey:@"plays" withInt:self.plays];
    [aParams addIfDefinedKey:@"entriesCount" withInt:self.entriesCount];
    [aParams addIfDefinedKey:@"totalEntriesCount" withInt:self.totalEntriesCount];
    [aParams addIfDefinedKey:@"videoEntriesCount" withInt:self.videoEntriesCount];
    [aParams addIfDefinedKey:@"imageEntriesCount" withInt:self.imageEntriesCount];
    [aParams addIfDefinedKey:@"audioEntriesCount" withInt:self.audioEntriesCount];
    [aParams addIfDefinedKey:@"mixEntriesCount" withInt:self.mixEntriesCount];
    [aParams addIfDefinedKey:@"bandwidth" withFloat:self.bandwidth];
    [aParams addIfDefinedKey:@"totalStorage" withFloat:self.totalStorage];
    [aParams addIfDefinedKey:@"storage" withFloat:self.storage];
    [aParams addIfDefinedKey:@"peakStorage" withFloat:self.peakStorage];
    [aParams addIfDefinedKey:@"avgStorage" withFloat:self.avgStorage];
    [aParams addIfDefinedKey:@"combinedBandwidthStorage" withFloat:self.combinedBandwidthStorage];
}

- (void)dealloc
{
    [self->_partnerName release];
    [super dealloc];
}

@end

@implementation KalturaSystemPartnerUsageListResponse
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
    return @"KalturaSystemPartnerUsageItem";
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
        [aParams putKey:@"objectType" withString:@"KalturaSystemPartnerUsageListResponse"];
    [aParams addIfDefinedKey:@"objects" withArray:self.objects];
    [aParams addIfDefinedKey:@"totalCount" withInt:self.totalCount];
}

- (void)dealloc
{
    [self->_objects release];
    [super dealloc];
}

@end

@implementation KalturaSystemPartnerOveragedLimit
@synthesize overagePrice = _overagePrice;
@synthesize overageUnit = _overageUnit;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_overagePrice = KALTURA_UNDEF_FLOAT;
    self->_overageUnit = KALTURA_UNDEF_FLOAT;
    return self;
}

- (KalturaFieldType)getTypeOfOveragePrice
{
    return KFT_Float;
}

- (KalturaFieldType)getTypeOfOverageUnit
{
    return KFT_Float;
}

- (void)setOveragePriceFromString:(NSString*)aPropVal
{
    self.overagePrice = [KalturaSimpleTypeParser parseFloat:aPropVal];
}

- (void)setOverageUnitFromString:(NSString*)aPropVal
{
    self.overageUnit = [KalturaSimpleTypeParser parseFloat:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSystemPartnerOveragedLimit"];
    [aParams addIfDefinedKey:@"overagePrice" withFloat:self.overagePrice];
    [aParams addIfDefinedKey:@"overageUnit" withFloat:self.overageUnit];
}

@end

@implementation KalturaSystemPartnerUsageFilter
@synthesize fromDate = _fromDate;
@synthesize toDate = _toDate;
@synthesize timezoneOffset = _timezoneOffset;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_fromDate = KALTURA_UNDEF_INT;
    self->_toDate = KALTURA_UNDEF_INT;
    self->_timezoneOffset = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfFromDate
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfToDate
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfTimezoneOffset
{
    return KFT_Int;
}

- (void)setFromDateFromString:(NSString*)aPropVal
{
    self.fromDate = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setToDateFromString:(NSString*)aPropVal
{
    self.toDate = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setTimezoneOffsetFromString:(NSString*)aPropVal
{
    self.timezoneOffset = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSystemPartnerUsageFilter"];
    [aParams addIfDefinedKey:@"fromDate" withInt:self.fromDate];
    [aParams addIfDefinedKey:@"toDate" withInt:self.toDate];
    [aParams addIfDefinedKey:@"timezoneOffset" withInt:self.timezoneOffset];
}

@end

///////////////////////// services /////////////////////////
@implementation KalturaSystemPartnerService
- (KalturaPartner*)getWithPartnerId:(int)aPartnerId
{
    [self.client.params addIfDefinedKey:@"partnerId" withInt:aPartnerId];
    return [self.client queueObjectService:@"systempartner_systempartner" withAction:@"get" withExpectedType:@"KalturaPartner"];
}

- (KalturaSystemPartnerUsageListResponse*)getUsageWithPartnerFilter:(KalturaPartnerFilter*)aPartnerFilter withUsageFilter:(KalturaSystemPartnerUsageFilter*)aUsageFilter withPager:(KalturaFilterPager*)aPager
{
    [self.client.params addIfDefinedKey:@"partnerFilter" withObject:aPartnerFilter];
    [self.client.params addIfDefinedKey:@"usageFilter" withObject:aUsageFilter];
    [self.client.params addIfDefinedKey:@"pager" withObject:aPager];
    return [self.client queueObjectService:@"systempartner_systempartner" withAction:@"getUsage" withExpectedType:@"KalturaSystemPartnerUsageListResponse"];
}

- (KalturaSystemPartnerUsageListResponse*)getUsageWithPartnerFilter:(KalturaPartnerFilter*)aPartnerFilter withUsageFilter:(KalturaSystemPartnerUsageFilter*)aUsageFilter
{
    return [self getUsageWithPartnerFilter:aPartnerFilter withUsageFilter:aUsageFilter withPager:nil];
}

- (KalturaSystemPartnerUsageListResponse*)getUsageWithPartnerFilter:(KalturaPartnerFilter*)aPartnerFilter
{
    return [self getUsageWithPartnerFilter:aPartnerFilter withUsageFilter:nil];
}

- (KalturaSystemPartnerUsageListResponse*)getUsage
{
    return [self getUsageWithPartnerFilter:nil];
}

- (KalturaPartnerListResponse*)listWithFilter:(KalturaPartnerFilter*)aFilter withPager:(KalturaFilterPager*)aPager
{
    [self.client.params addIfDefinedKey:@"filter" withObject:aFilter];
    [self.client.params addIfDefinedKey:@"pager" withObject:aPager];
    return [self.client queueObjectService:@"systempartner_systempartner" withAction:@"list" withExpectedType:@"KalturaPartnerListResponse"];
}

- (KalturaPartnerListResponse*)listWithFilter:(KalturaPartnerFilter*)aFilter
{
    return [self listWithFilter:aFilter withPager:nil];
}

- (KalturaPartnerListResponse*)list
{
    return [self listWithFilter:nil];
}

- (void)updateStatusWithPartnerId:(int)aPartnerId withStatus:(int)aStatus
{
    [self.client.params addIfDefinedKey:@"partnerId" withInt:aPartnerId];
    [self.client.params addIfDefinedKey:@"status" withInt:aStatus];
    [self.client queueVoidService:@"systempartner_systempartner" withAction:@"updateStatus"];
}

- (NSString*)getAdminSessionWithPartnerId:(int)aPartnerId withUserId:(NSString*)aUserId
{
    [self.client.params addIfDefinedKey:@"partnerId" withInt:aPartnerId];
    [self.client.params addIfDefinedKey:@"userId" withString:aUserId];
    return [self.client queueStringService:@"systempartner_systempartner" withAction:@"getAdminSession"];
}

- (NSString*)getAdminSessionWithPartnerId:(int)aPartnerId
{
    return [self getAdminSessionWithPartnerId:aPartnerId withUserId:nil];
}

- (void)updateConfigurationWithPartnerId:(int)aPartnerId withConfiguration:(KalturaSystemPartnerConfiguration*)aConfiguration
{
    [self.client.params addIfDefinedKey:@"partnerId" withInt:aPartnerId];
    [self.client.params addIfDefinedKey:@"configuration" withObject:aConfiguration];
    [self.client queueVoidService:@"systempartner_systempartner" withAction:@"updateConfiguration"];
}

- (KalturaSystemPartnerConfiguration*)getConfigurationWithPartnerId:(int)aPartnerId
{
    [self.client.params addIfDefinedKey:@"partnerId" withInt:aPartnerId];
    return [self.client queueObjectService:@"systempartner_systempartner" withAction:@"getConfiguration" withExpectedType:@"KalturaSystemPartnerConfiguration"];
}

- (NSMutableArray*)getPackages
{
    return [self.client queueArrayService:@"systempartner_systempartner" withAction:@"getPackages" withExpectedType:@"KalturaSystemPartnerPackage"];
}

- (NSMutableArray*)getPackagesClassOfService
{
    return [self.client queueArrayService:@"systempartner_systempartner" withAction:@"getPackagesClassOfService" withExpectedType:@"KalturaSystemPartnerPackage"];
}

- (NSMutableArray*)getPackagesVertical
{
    return [self.client queueArrayService:@"systempartner_systempartner" withAction:@"getPackagesVertical" withExpectedType:@"KalturaSystemPartnerPackage"];
}

- (void)resetUserPasswordWithUserId:(NSString*)aUserId withPartnerId:(int)aPartnerId withNewPassword:(NSString*)aNewPassword
{
    [self.client.params addIfDefinedKey:@"userId" withString:aUserId];
    [self.client.params addIfDefinedKey:@"partnerId" withInt:aPartnerId];
    [self.client.params addIfDefinedKey:@"newPassword" withString:aNewPassword];
    [self.client queueVoidService:@"systempartner_systempartner" withAction:@"resetUserPassword"];
}

- (KalturaUserLoginDataListResponse*)listUserLoginDataWithFilter:(KalturaUserLoginDataFilter*)aFilter withPager:(KalturaFilterPager*)aPager
{
    [self.client.params addIfDefinedKey:@"filter" withObject:aFilter];
    [self.client.params addIfDefinedKey:@"pager" withObject:aPager];
    return [self.client queueObjectService:@"systempartner_systempartner" withAction:@"listUserLoginData" withExpectedType:@"KalturaUserLoginDataListResponse"];
}

- (KalturaUserLoginDataListResponse*)listUserLoginDataWithFilter:(KalturaUserLoginDataFilter*)aFilter
{
    return [self listUserLoginDataWithFilter:aFilter withPager:nil];
}

- (KalturaUserLoginDataListResponse*)listUserLoginData
{
    return [self listUserLoginDataWithFilter:nil];
}

@end

@implementation KalturaSystemPartnerClientPlugin
@synthesize client = _client;

- (id)initWithClient:(KalturaClient*)aClient
{
    self = [super init];
    if (self == nil)
        return nil;
    self.client = aClient;
    return self;
}

- (KalturaSystemPartnerService*)systemPartner
{
    if (self->_systemPartner == nil)
    	self->_systemPartner = [[KalturaSystemPartnerService alloc] initWithClient:self.client];
    return self->_systemPartner;
}

- (void)dealloc
{
    [self->_systemPartner release];
	[super dealloc];
}

@end

