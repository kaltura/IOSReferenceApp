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
#import "KalturaClientBase.h"

#define API_VERSION @"3.1.6"

///////////////////////// enums /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaAppearInListType : NSObject
+ (int)PARTNER_ONLY;
+ (int)CATEGORY_MEMBERS_ONLY;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetParamsDeletePolicy : NSObject
+ (int)KEEP;
+ (int)DELETE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetParamsOrigin : NSObject
+ (int)CONVERT;
+ (int)INGEST;
+ (int)CONVERT_WHEN_MISSING;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetStatus : NSObject
+ (int)ERROR;
+ (int)QUEUED;
+ (int)READY;
+ (int)DELETED;
+ (int)IMPORTING;
+ (int)EXPORTING;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBatchJobErrorTypes : NSObject
+ (int)APP;
+ (int)RUNTIME;
+ (int)HTTP;
+ (int)CURL;
+ (int)KALTURA_API;
+ (int)KALTURA_CLIENT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBatchJobStatus : NSObject
+ (int)PENDING;
+ (int)QUEUED;
+ (int)PROCESSING;
+ (int)PROCESSED;
+ (int)MOVEFILE;
+ (int)FINISHED;
+ (int)FAILED;
+ (int)ABORTED;
+ (int)ALMOST_DONE;
+ (int)RETRY;
+ (int)FATAL;
+ (int)DONT_PROCESS;
+ (int)FINISHED_PARTIALLY;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBitRateMode : NSObject
+ (int)CBR;
+ (int)VBR;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryEntryStatus : NSObject
+ (int)PENDING;
+ (int)ACTIVE;
+ (int)DELETED;
+ (int)REJECTED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryStatus : NSObject
+ (int)UPDATING;
+ (int)ACTIVE;
+ (int)DELETED;
+ (int)PURGED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryUserPermissionLevel : NSObject
+ (int)MANAGER;
+ (int)MODERATOR;
+ (int)CONTRIBUTOR;
+ (int)MEMBER;
+ (int)NONE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryUserStatus : NSObject
+ (int)ACTIVE;
+ (int)PENDING;
+ (int)NOT_ACTIVE;
+ (int)DELETED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCommercialUseType : NSObject
+ (int)NON_COMMERCIAL_USE;
+ (int)COMMERCIAL_USE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaContributionPolicyType : NSObject
+ (int)ALL;
+ (int)MEMBERS_WITH_CONTRIBUTION_PERMISSION;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaControlPanelCommandStatus : NSObject
+ (int)PENDING;
+ (int)HANDLED;
+ (int)DONE;
+ (int)FAILED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaControlPanelCommandTargetType : NSObject
+ (int)DATA_CENTER;
+ (int)SCHEDULER;
+ (int)JOB_TYPE;
+ (int)JOB;
+ (int)BATCH;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaControlPanelCommandType : NSObject
+ (int)KILL;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCountryRestrictionType : NSObject
+ (int)RESTRICT_COUNTRY_LIST;
+ (int)ALLOW_COUNTRY_LIST;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDVRStatus : NSObject
+ (int)DISABLED;
+ (int)ENABLED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryStatus : NSObject
+ (int)ACTIVE;
+ (int)DELETED;
+ (int)STAGING_IN;
+ (int)STAGING_OUT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDirectoryRestrictionType : NSObject
+ (int)DONT_DISPLAY;
+ (int)DISPLAY_WITH_LINK;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEditorType : NSObject
+ (int)SIMPLE;
+ (int)ADVANCED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEmailIngestionProfileStatus : NSObject
+ (int)INACTIVE;
+ (int)ACTIVE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEntryModerationStatus : NSObject
+ (int)PENDING_MODERATION;
+ (int)APPROVED;
+ (int)REJECTED;
+ (int)FLAGGED_FOR_REVIEW;
+ (int)AUTO_APPROVED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFeatureStatusType : NSObject
+ (int)LOCK_CATEGORY;
+ (int)CATEGORY;
+ (int)CATEGORY_ENTRY;
+ (int)ENTRY;
+ (int)CATEGORY_USER;
+ (int)USER;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorAssetStatus : NSObject
+ (int)ERROR;
+ (int)QUEUED;
+ (int)CONVERTING;
+ (int)READY;
+ (int)DELETED;
+ (int)NOT_APPLICABLE;
+ (int)TEMP;
+ (int)WAIT_FOR_CONVERT;
+ (int)IMPORTING;
+ (int)VALIDATING;
+ (int)EXPORTING;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorReadyBehaviorType : NSObject
+ (int)NO_IMPACT;
+ (int)INHERIT_FLAVOR_PARAMS;
+ (int)REQUIRED;
+ (int)OPTIONAL;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGender : NSObject
+ (int)UNKNOWN;
+ (int)MALE;
+ (int)FEMALE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaInheritanceType : NSObject
+ (int)INHERIT;
+ (int)MANUAL;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaIpAddressRestrictionType : NSObject
+ (int)RESTRICT_LIST;
+ (int)ALLOW_LIST;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLicenseType : NSObject
+ (int)UNKNOWN;
+ (int)NONE;
+ (int)COPYRIGHTED;
+ (int)PUBLIC_DOMAIN;
+ (int)CREATIVECOMMONS_ATTRIBUTION;
+ (int)CREATIVECOMMONS_ATTRIBUTION_SHARE_ALIKE;
+ (int)CREATIVECOMMONS_ATTRIBUTION_NO_DERIVATIVES;
+ (int)CREATIVECOMMONS_ATTRIBUTION_NON_COMMERCIAL;
+ (int)CREATIVECOMMONS_ATTRIBUTION_NON_COMMERCIAL_SHARE_ALIKE;
+ (int)CREATIVECOMMONS_ATTRIBUTION_NON_COMMERCIAL_NO_DERIVATIVES;
+ (int)GFDL;
+ (int)GPL;
+ (int)AFFERO_GPL;
+ (int)LGPL;
+ (int)BSD;
+ (int)APACHE;
+ (int)MOZILLA;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLimitFlavorsRestrictionType : NSObject
+ (int)RESTRICT_LIST;
+ (int)ALLOW_LIST;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLivePublishStatus : NSObject
+ (int)DISABLED;
+ (int)ENABLED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveReportExportType : NSObject
+ (int)PARTNER_TOTAL_ALL;
+ (int)PARTNER_TOTAL_LIVE;
+ (int)ENTRY_TIME_LINE_ALL;
+ (int)ENTRY_TIME_LINE_LIVE;
+ (int)LOCATION_ALL;
+ (int)LOCATION_LIVE;
+ (int)SYNDICATION_ALL;
+ (int)SYNDICATION_LIVE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMailJobStatus : NSObject
+ (int)PENDING;
+ (int)SENT;
+ (int)ERROR;
+ (int)QUEUED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaServerIndex : NSObject
+ (int)PRIMARY;
+ (int)SECONDARY;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaType : NSObject
+ (int)VIDEO;
+ (int)IMAGE;
+ (int)AUDIO;
+ (int)LIVE_STREAM_FLASH;
+ (int)LIVE_STREAM_WINDOWS_MEDIA;
+ (int)LIVE_STREAM_REAL_MEDIA;
+ (int)LIVE_STREAM_QUICKTIME;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaModerationFlagType : NSObject
+ (int)SEXUAL_CONTENT;
+ (int)VIOLENT_REPULSIVE;
+ (int)HARMFUL_DANGEROUS;
+ (int)SPAM_COMMERCIALS;
+ (int)COPYRIGHT;
+ (int)TERMS_OF_USE_VIOLATION;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMrssExtensionMode : NSObject
+ (int)APPEND;
+ (int)REPLACE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaNotificationObjectType : NSObject
+ (int)ENTRY;
+ (int)KSHOW;
+ (int)USER;
+ (int)BATCH_JOB;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaNotificationStatus : NSObject
+ (int)PENDING;
+ (int)SENT;
+ (int)ERROR;
+ (int)SHOULD_RESEND;
+ (int)ERROR_RESENDING;
+ (int)SENT_SYNCH;
+ (int)QUEUED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaNotificationType : NSObject
+ (int)ENTRY_ADD;
+ (int)ENTR_UPDATE_PERMISSIONS;
+ (int)ENTRY_DELETE;
+ (int)ENTRY_BLOCK;
+ (int)ENTRY_UPDATE;
+ (int)ENTRY_UPDATE_THUMBNAIL;
+ (int)ENTRY_UPDATE_MODERATION;
+ (int)USER_ADD;
+ (int)USER_BANNED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaNullableBoolean : NSObject
+ (int)NULL_VALUE;
+ (int)FALSE_VALUE;
+ (int)TRUE_VALUE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPartnerGroupType : NSObject
+ (int)PUBLISHER;
+ (int)VAR_GROUP;
+ (int)GROUP;
+ (int)TEMPLATE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPartnerStatus : NSObject
+ (int)DELETED;
+ (int)ACTIVE;
+ (int)BLOCKED;
+ (int)FULL_BLOCK;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPartnerType : NSObject
+ (int)KMC;
+ (int)WIKI;
+ (int)WORDPRESS;
+ (int)DRUPAL;
+ (int)DEKIWIKI;
+ (int)MOODLE;
+ (int)COMMUNITY_EDITION;
+ (int)JOOMLA;
+ (int)BLACKBOARD;
+ (int)SAKAI;
+ (int)ADMIN_CONSOLE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionStatus : NSObject
+ (int)ACTIVE;
+ (int)BLOCKED;
+ (int)DELETED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionType : NSObject
+ (int)NORMAL;
+ (int)SPECIAL_FEATURE;
+ (int)PLUGIN;
+ (int)PARTNER_GROUP;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlaylistType : NSObject
+ (int)STATIC_LIST;
+ (int)DYNAMIC;
+ (int)EXTERNAL;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPrivacyType : NSObject
+ (int)ALL;
+ (int)AUTHENTICATED_USERS;
+ (int)MEMBERS_ONLY;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaRecordStatus : NSObject
+ (int)DISABLED;
+ (int)ENABLED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportType : NSObject
+ (int)TOP_CONTENT;
+ (int)CONTENT_DROPOFF;
+ (int)CONTENT_INTERACTIONS;
+ (int)MAP_OVERLAY;
+ (int)TOP_CONTRIBUTORS;
+ (int)TOP_SYNDICATION;
+ (int)CONTENT_CONTRIBUTIONS;
+ (int)USER_ENGAGEMENT;
+ (int)SPEFICIC_USER_ENGAGEMENT;
+ (int)USER_TOP_CONTENT;
+ (int)USER_CONTENT_DROPOFF;
+ (int)USER_CONTENT_INTERACTIONS;
+ (int)APPLICATIONS;
+ (int)USER_USAGE;
+ (int)SPECIFIC_USER_USAGE;
+ (int)VAR_USAGE;
+ (int)TOP_CREATORS;
+ (int)PLATFORMS;
+ (int)OPERATION_SYSTEM;
+ (int)BROWSERS;
+ (int)LIVE;
+ (int)TOP_PLAYBACK_CONTEXT;
+ (int)PARTNER_USAGE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaResponseType : NSObject
+ (int)RESPONSE_TYPE_JSON;
+ (int)RESPONSE_TYPE_XML;
+ (int)RESPONSE_TYPE_PHP;
+ (int)RESPONSE_TYPE_PHP_ARRAY;
+ (int)RESPONSE_TYPE_HTML;
+ (int)RESPONSE_TYPE_MRSS;
+ (int)RESPONSE_TYPE_JSONP;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSearchOperatorType : NSObject
+ (int)SEARCH_AND;
+ (int)SEARCH_OR;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSearchProviderType : NSObject
+ (int)FLICKR;
+ (int)YOUTUBE;
+ (int)MYSPACE;
+ (int)PHOTOBUCKET;
+ (int)JAMENDO;
+ (int)CCMIXTER;
+ (int)NYPL;
+ (int)CURRENT;
+ (int)MEDIA_COMMONS;
+ (int)KALTURA;
+ (int)KALTURA_USER_CLIPS;
+ (int)ARCHIVE_ORG;
+ (int)KALTURA_PARTNER;
+ (int)METACAFE;
+ (int)SEARCH_PROXY;
+ (int)PARTNER_SPECIFIC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSessionType : NSObject
+ (int)USER;
+ (int)ADMIN;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSiteRestrictionType : NSObject
+ (int)RESTRICT_SITE_LIST;
+ (int)ALLOW_SITE_LIST;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStatsEventType : NSObject
+ (int)WIDGET_LOADED;
+ (int)MEDIA_LOADED;
+ (int)PLAY;
+ (int)PLAY_REACHED_25;
+ (int)PLAY_REACHED_50;
+ (int)PLAY_REACHED_75;
+ (int)PLAY_REACHED_100;
+ (int)OPEN_EDIT;
+ (int)OPEN_VIRAL;
+ (int)OPEN_DOWNLOAD;
+ (int)OPEN_REPORT;
+ (int)BUFFER_START;
+ (int)BUFFER_END;
+ (int)OPEN_FULL_SCREEN;
+ (int)CLOSE_FULL_SCREEN;
+ (int)REPLAY;
+ (int)SEEK;
+ (int)OPEN_UPLOAD;
+ (int)SAVE_PUBLISH;
+ (int)CLOSE_EDITOR;
+ (int)PRE_BUMPER_PLAYED;
+ (int)POST_BUMPER_PLAYED;
+ (int)BUMPER_CLICKED;
+ (int)PREROLL_STARTED;
+ (int)MIDROLL_STARTED;
+ (int)POSTROLL_STARTED;
+ (int)OVERLAY_STARTED;
+ (int)PREROLL_CLICKED;
+ (int)MIDROLL_CLICKED;
+ (int)POSTROLL_CLICKED;
+ (int)OVERLAY_CLICKED;
+ (int)PREROLL_25;
+ (int)PREROLL_50;
+ (int)PREROLL_75;
+ (int)MIDROLL_25;
+ (int)MIDROLL_50;
+ (int)MIDROLL_75;
+ (int)POSTROLL_25;
+ (int)POSTROLL_50;
+ (int)POSTROLL_75;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStatsFeatureType : NSObject
+ (int)NONE;
+ (int)RELATED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStatsKmcEventType : NSObject
+ (int)CONTENT_PAGE_VIEW;
+ (int)CONTENT_ADD_PLAYLIST;
+ (int)CONTENT_EDIT_PLAYLIST;
+ (int)CONTENT_DELETE_PLAYLIST;
+ (int)CONTENT_EDIT_ENTRY;
+ (int)CONTENT_CHANGE_THUMBNAIL;
+ (int)CONTENT_ADD_TAGS;
+ (int)CONTENT_REMOVE_TAGS;
+ (int)CONTENT_ADD_ADMIN_TAGS;
+ (int)CONTENT_REMOVE_ADMIN_TAGS;
+ (int)CONTENT_DOWNLOAD;
+ (int)CONTENT_APPROVE_MODERATION;
+ (int)CONTENT_REJECT_MODERATION;
+ (int)CONTENT_BULK_UPLOAD;
+ (int)CONTENT_ADMIN_KCW_UPLOAD;
+ (int)ACCOUNT_CHANGE_PARTNER_INFO;
+ (int)ACCOUNT_CHANGE_LOGIN_INFO;
+ (int)ACCOUNT_CONTACT_US_USAGE;
+ (int)ACCOUNT_UPDATE_SERVER_SETTINGS;
+ (int)ACCOUNT_ACCOUNT_OVERVIEW;
+ (int)ACCOUNT_ACCESS_CONTROL;
+ (int)ACCOUNT_TRANSCODING_SETTINGS;
+ (int)ACCOUNT_ACCOUNT_UPGRADE;
+ (int)ACCOUNT_SAVE_SERVER_SETTINGS;
+ (int)ACCOUNT_ACCESS_CONTROL_DELETE;
+ (int)ACCOUNT_SAVE_TRANSCODING_SETTINGS;
+ (int)LOGIN;
+ (int)DASHBOARD_IMPORT_CONTENT;
+ (int)DASHBOARD_UPDATE_CONTENT;
+ (int)DASHBOARD_ACCOUNT_CONTACT_US;
+ (int)DASHBOARD_VIEW_REPORTS;
+ (int)DASHBOARD_EMBED_PLAYER;
+ (int)DASHBOARD_EMBED_PLAYLIST;
+ (int)DASHBOARD_CUSTOMIZE_PLAYERS;
+ (int)APP_STUDIO_NEW_PLAYER_SINGLE_VIDEO;
+ (int)APP_STUDIO_NEW_PLAYER_PLAYLIST;
+ (int)APP_STUDIO_NEW_PLAYER_MULTI_TAB_PLAYLIST;
+ (int)APP_STUDIO_EDIT_PLAYER_SINGLE_VIDEO;
+ (int)APP_STUDIO_EDIT_PLAYER_PLAYLIST;
+ (int)APP_STUDIO_EDIT_PLAYER_MULTI_TAB_PLAYLIST;
+ (int)APP_STUDIO_DUPLICATE_PLAYER;
+ (int)CONTENT_CONTENT_GO_TO_PAGE;
+ (int)CONTENT_DELETE_ITEM;
+ (int)CONTENT_DELETE_MIX;
+ (int)REPORTS_AND_ANALYTICS_BANDWIDTH_USAGE_TAB;
+ (int)REPORTS_AND_ANALYTICS_CONTENT_REPORTS_TAB;
+ (int)REPORTS_AND_ANALYTICS_USERS_AND_COMMUNITY_REPORTS_TAB;
+ (int)REPORTS_AND_ANALYTICS_TOP_CONTRIBUTORS;
+ (int)REPORTS_AND_ANALYTICS_MAP_OVERLAYS;
+ (int)REPORTS_AND_ANALYTICS_TOP_SYNDICATIONS;
+ (int)REPORTS_AND_ANALYTICS_TOP_CONTENT;
+ (int)REPORTS_AND_ANALYTICS_CONTENT_DROPOFF;
+ (int)REPORTS_AND_ANALYTICS_CONTENT_INTERACTIONS;
+ (int)REPORTS_AND_ANALYTICS_CONTENT_CONTRIBUTIONS;
+ (int)REPORTS_AND_ANALYTICS_VIDEO_DRILL_DOWN;
+ (int)REPORTS_AND_ANALYTICS_CONTENT_DRILL_DOWN_INTERACTION;
+ (int)REPORTS_AND_ANALYTICS_CONTENT_CONTRIBUTIONS_DRILLDOWN;
+ (int)REPORTS_AND_ANALYTICS_VIDEO_DRILL_DOWN_DROPOFF;
+ (int)REPORTS_AND_ANALYTICS_MAP_OVERLAYS_DRILLDOWN;
+ (int)REPORTS_AND_ANALYTICS_TOP_SYNDICATIONS_DRILL_DOWN;
+ (int)REPORTS_AND_ANALYTICS_BANDWIDTH_USAGE_VIEW_MONTHLY;
+ (int)REPORTS_AND_ANALYTICS_BANDWIDTH_USAGE_VIEW_YEARLY;
+ (int)CONTENT_ENTRY_DRILLDOWN;
+ (int)CONTENT_OPEN_PREVIEW_AND_EMBED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageProfileDeliveryStatus : NSObject
+ (int)ACTIVE;
+ (int)BLOCKED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageProfileReadyBehavior : NSObject
+ (int)NO_IMPACT;
+ (int)REQUIRED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageProfileStatus : NSObject
+ (int)DISABLED;
+ (int)AUTOMATIC;
+ (int)MANUAL;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSyndicationFeedStatus : NSObject
+ (int)DELETED;
+ (int)ACTIVE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSyndicationFeedType : NSObject
+ (int)GOOGLE_VIDEO;
+ (int)YAHOO;
+ (int)ITUNES;
+ (int)TUBE_MOGUL;
+ (int)KALTURA;
+ (int)KALTURA_XSLT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbAssetStatus : NSObject
+ (int)ERROR;
+ (int)QUEUED;
+ (int)CAPTURING;
+ (int)READY;
+ (int)DELETED;
+ (int)IMPORTING;
+ (int)EXPORTING;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbCropType : NSObject
+ (int)RESIZE;
+ (int)RESIZE_WITH_PADDING;
+ (int)CROP;
+ (int)CROP_FROM_TOP;
+ (int)RESIZE_WITH_FORCE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUiConfCreationMode : NSObject
+ (int)WIZARD;
+ (int)ADVANCED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUiConfObjType : NSObject
+ (int)PLAYER;
+ (int)CONTRIBUTION_WIZARD;
+ (int)SIMPLE_EDITOR;
+ (int)ADVANCED_EDITOR;
+ (int)PLAYLIST;
+ (int)APP_STUDIO;
+ (int)KRECORD;
+ (int)PLAYER_V3;
+ (int)KMC_ACCOUNT;
+ (int)KMC_ANALYTICS;
+ (int)KMC_CONTENT;
+ (int)KMC_DASHBOARD;
+ (int)KMC_LOGIN;
+ (int)PLAYER_SL;
+ (int)CLIENTSIDE_ENCODER;
+ (int)KMC_GENERAL;
+ (int)KMC_ROLES_AND_PERMISSIONS;
+ (int)CLIPPER;
+ (int)KSR;
+ (int)KUPLOAD;
+ (int)WEBCASTING;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUpdateMethodType : NSObject
+ (int)MANUAL;
+ (int)AUTOMATIC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUploadErrorCode : NSObject
+ (int)NO_ERROR;
+ (int)GENERAL_ERROR;
+ (int)PARTIAL_UPLOAD;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUploadTokenStatus : NSObject
+ (int)PENDING;
+ (int)PARTIAL_UPLOAD;
+ (int)FULL_UPLOAD;
+ (int)CLOSED;
+ (int)TIMED_OUT;
+ (int)DELETED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserAgentRestrictionType : NSObject
+ (int)RESTRICT_LIST;
+ (int)ALLOW_LIST;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserJoinPolicyType : NSObject
+ (int)AUTO_JOIN;
+ (int)REQUEST_TO_JOIN;
+ (int)NOT_ALLOWED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserRoleStatus : NSObject
+ (int)ACTIVE;
+ (int)BLOCKED;
+ (int)DELETED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserStatus : NSObject
+ (int)BLOCKED;
+ (int)ACTIVE;
+ (int)DELETED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidgetSecurityType : NSObject
+ (int)NONE;
+ (int)TIMEHASH;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlProfileOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAdminUserOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)ID_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)ID_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAkamaiUniversalStreamType : NSObject
+ (NSString*)HD_IPHONE_IPAD_LIVE;
+ (NSString*)UNIVERSAL_STREAMING_LIVE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAmazonS3StorageProfileFilesPermissionLevel : NSObject
+ (NSString*)ACL_AUTHENTICATED_READ;
+ (NSString*)ACL_PRIVATE;
+ (NSString*)ACL_PUBLIC_READ;
+ (NSString*)ACL_PUBLIC_READ_WRITE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAmazonS3StorageProfileOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaApiActionPermissionItemOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)ID_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)ID_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaApiParameterPermissionItemAction : NSObject
+ (NSString*)USAGE;
+ (NSString*)INSERT;
+ (NSString*)READ;
+ (NSString*)UPDATE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaApiParameterPermissionItemOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)ID_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)ID_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetOrderBy : NSObject
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
@interface KalturaAssetParamsOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetParamsOutputOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetType : NSObject
+ (NSString*)ATTACHMENT;
+ (NSString*)CAPTION;
+ (NSString*)DOCUMENT;
+ (NSString*)IMAGE;
+ (NSString*)PDF;
+ (NSString*)SWF;
+ (NSString*)TIMED_THUMB_ASSET;
+ (NSString*)WIDEVINE_FLAVOR;
+ (NSString*)FLAVOR;
+ (NSString*)THUMBNAIL;
+ (NSString*)LIVE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAudioCodec : NSObject
+ (NSString*)NONE;
+ (NSString*)AAC;
+ (NSString*)AACHE;
+ (NSString*)AC3;
+ (NSString*)AMRNB;
+ (NSString*)COPY;
+ (NSString*)MP3;
+ (NSString*)MPEG2;
+ (NSString*)PCM;
+ (NSString*)VORBIS;
+ (NSString*)WMA;
+ (NSString*)WMAPRO;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBaseEntryOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)END_DATE_ASC;
+ (NSString*)MODERATION_COUNT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)RANK_ASC;
+ (NSString*)RECENT_ASC;
+ (NSString*)START_DATE_ASC;
+ (NSString*)TOTAL_RANK_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)WEIGHT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)END_DATE_DESC;
+ (NSString*)MODERATION_COUNT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)RANK_DESC;
+ (NSString*)RECENT_DESC;
+ (NSString*)START_DATE_DESC;
+ (NSString*)TOTAL_RANK_DESC;
+ (NSString*)UPDATED_AT_DESC;
+ (NSString*)WEIGHT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBaseSyndicationFeedOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PLAYLIST_ID_ASC;
+ (NSString*)TYPE_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PLAYLIST_ID_DESC;
+ (NSString*)TYPE_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBatchJobOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)ESTIMATED_EFFORT_ASC;
+ (NSString*)EXECUTION_ATTEMPTS_ASC;
+ (NSString*)FINISH_TIME_ASC;
+ (NSString*)LOCK_VERSION_ASC;
+ (NSString*)PRIORITY_ASC;
+ (NSString*)QUEUE_TIME_ASC;
+ (NSString*)STATUS_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)ESTIMATED_EFFORT_DESC;
+ (NSString*)EXECUTION_ATTEMPTS_DESC;
+ (NSString*)FINISH_TIME_DESC;
+ (NSString*)LOCK_VERSION_DESC;
+ (NSString*)PRIORITY_DESC;
+ (NSString*)QUEUE_TIME_DESC;
+ (NSString*)STATUS_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBatchJobType : NSObject
+ (NSString*)PARSE_CAPTION_ASSET;
+ (NSString*)DISTRIBUTION_DELETE;
+ (NSString*)CONVERT;
+ (NSString*)DISTRIBUTION_DISABLE;
+ (NSString*)DISTRIBUTION_ENABLE;
+ (NSString*)DISTRIBUTION_FETCH_REPORT;
+ (NSString*)DISTRIBUTION_SUBMIT;
+ (NSString*)DISTRIBUTION_SYNC;
+ (NSString*)DISTRIBUTION_UPDATE;
+ (NSString*)DROP_FOLDER_CONTENT_PROCESSOR;
+ (NSString*)DROP_FOLDER_WATCHER;
+ (NSString*)EVENT_NOTIFICATION_HANDLER;
+ (NSString*)SCHEDULED_TASK;
+ (NSString*)INDEX_TAGS;
+ (NSString*)TAG_RESOLVE;
+ (NSString*)VIRUS_SCAN;
+ (NSString*)WIDEVINE_REPOSITORY_SYNC;
+ (NSString*)IMPORT;
+ (NSString*)DELETE;
+ (NSString*)FLATTEN;
+ (NSString*)BULKUPLOAD;
+ (NSString*)DVDCREATOR;
+ (NSString*)DOWNLOAD;
+ (NSString*)OOCONVERT;
+ (NSString*)CONVERT_PROFILE;
+ (NSString*)POSTCONVERT;
+ (NSString*)EXTRACT_MEDIA;
+ (NSString*)MAIL;
+ (NSString*)NOTIFICATION;
+ (NSString*)CLEANUP;
+ (NSString*)SCHEDULER_HELPER;
+ (NSString*)BULKDOWNLOAD;
+ (NSString*)DB_CLEANUP;
+ (NSString*)PROVISION_PROVIDE;
+ (NSString*)CONVERT_COLLECTION;
+ (NSString*)STORAGE_EXPORT;
+ (NSString*)PROVISION_DELETE;
+ (NSString*)STORAGE_DELETE;
+ (NSString*)EMAIL_INGESTION;
+ (NSString*)METADATA_IMPORT;
+ (NSString*)METADATA_TRANSFORM;
+ (NSString*)FILESYNC_IMPORT;
+ (NSString*)CAPTURE_THUMB;
+ (NSString*)DELETE_FILE;
+ (NSString*)INDEX;
+ (NSString*)MOVE_CATEGORY_ENTRIES;
+ (NSString*)COPY;
+ (NSString*)CONCAT;
+ (NSString*)CONVERT_LIVE_SEGMENT;
+ (NSString*)COPY_PARTNER;
+ (NSString*)VALIDATE_LIVE_MEDIA_SERVERS;
+ (NSString*)SYNC_CATEGORY_PRIVACY_CONTEXT;
+ (NSString*)LIVE_REPORT_EXPORT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadAction : NSObject
+ (NSString*)ADD;
+ (NSString*)UPDATE;
+ (NSString*)DELETE;
+ (NSString*)REPLACE;
+ (NSString*)TRANSFORM_XSLT;
+ (NSString*)ADD_OR_UPDATE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadObjectType : NSObject
+ (NSString*)ENTRY;
+ (NSString*)CATEGORY;
+ (NSString*)USER;
+ (NSString*)CATEGORY_USER;
+ (NSString*)CATEGORY_ENTRY;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadResultObjectType : NSObject
+ (NSString*)ENTRY;
+ (NSString*)CATEGORY;
+ (NSString*)USER;
+ (NSString*)CATEGORY_USER;
+ (NSString*)CATEGORY_ENTRY;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadResultStatus : NSObject
+ (NSString*)ERROR;
+ (NSString*)OK;
+ (NSString*)IN_PROGRESS;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadType : NSObject
+ (NSString*)CSV;
+ (NSString*)FILTER;
+ (NSString*)XML;
+ (NSString*)DROP_FOLDER_XML;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryEntryAdvancedOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryEntryOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryIdentifierField : NSObject
+ (NSString*)FULL_NAME;
+ (NSString*)ID;
+ (NSString*)REFERENCE_ID;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)DEPTH_ASC;
+ (NSString*)DIRECT_ENTRIES_COUNT_ASC;
+ (NSString*)DIRECT_SUB_CATEGORIES_COUNT_ASC;
+ (NSString*)ENTRIES_COUNT_ASC;
+ (NSString*)FULL_NAME_ASC;
+ (NSString*)MEMBERS_COUNT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)DEPTH_DESC;
+ (NSString*)DIRECT_ENTRIES_COUNT_DESC;
+ (NSString*)DIRECT_SUB_CATEGORIES_COUNT_DESC;
+ (NSString*)ENTRIES_COUNT_DESC;
+ (NSString*)FULL_NAME_DESC;
+ (NSString*)MEMBERS_COUNT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryUserOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConditionType : NSObject
+ (NSString*)ABC_WATERMARK;
+ (NSString*)EVENT_NOTIFICATION_FIELD;
+ (NSString*)EVENT_NOTIFICATION_OBJECT_CHANGED;
+ (NSString*)METADATA_FIELD_CHANGED;
+ (NSString*)METADATA_FIELD_COMPARE;
+ (NSString*)METADATA_FIELD_MATCH;
+ (NSString*)AUTHENTICATED;
+ (NSString*)COUNTRY;
+ (NSString*)IP_ADDRESS;
+ (NSString*)SITE;
+ (NSString*)USER_AGENT;
+ (NSString*)FIELD_MATCH;
+ (NSString*)FIELD_COMPARE;
+ (NSString*)ASSET_PROPERTIES_COMPARE;
+ (NSString*)USER_ROLE;
+ (NSString*)GEO_DISTANCE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaContainerFormat : NSObject
+ (NSString*)_3GP;
+ (NSString*)APPLEHTTP;
+ (NSString*)AVI;
+ (NSString*)BMP;
+ (NSString*)COPY;
+ (NSString*)FLV;
+ (NSString*)HLS;
+ (NSString*)ISMV;
+ (NSString*)JPG;
+ (NSString*)M4V;
+ (NSString*)MKV;
+ (NSString*)MOV;
+ (NSString*)MP3;
+ (NSString*)MP4;
+ (NSString*)MPEG;
+ (NSString*)MPEGTS;
+ (NSString*)OGG;
+ (NSString*)OGV;
+ (NSString*)PDF;
+ (NSString*)PNG;
+ (NSString*)SWF;
+ (NSString*)WAV;
+ (NSString*)WEBM;
+ (NSString*)WMA;
+ (NSString*)WMV;
+ (NSString*)WVM;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaContextType : NSObject
+ (NSString*)PLAY;
+ (NSString*)DOWNLOAD;
+ (NSString*)THUMBNAIL;
+ (NSString*)METADATA;
+ (NSString*)EXPORT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaControlPanelCommandOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfileAssetParamsOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfileOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfileStatus : NSObject
+ (NSString*)DISABLED;
+ (NSString*)ENABLED;
+ (NSString*)DELETED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfileType : NSObject
+ (NSString*)MEDIA;
+ (NSString*)LIVE_STREAM;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDataEntryOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)END_DATE_ASC;
+ (NSString*)MODERATION_COUNT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)RANK_ASC;
+ (NSString*)RECENT_ASC;
+ (NSString*)START_DATE_ASC;
+ (NSString*)TOTAL_RANK_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)WEIGHT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)END_DATE_DESC;
+ (NSString*)MODERATION_COUNT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)RANK_DESC;
+ (NSString*)RECENT_DESC;
+ (NSString*)START_DATE_DESC;
+ (NSString*)TOTAL_RANK_DESC;
+ (NSString*)UPDATED_AT_DESC;
+ (NSString*)WEIGHT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiAppleHttpManifestOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiHdsOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiHttpOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericAppleHttpOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericHdsOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericHttpOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericRtmpOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericSilverLightOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileLiveAppleHttpOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileRtmpOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileType : NSObject
+ (NSString*)EDGE_CAST_HTTP;
+ (NSString*)EDGE_CAST_RTMP;
+ (NSString*)KONTIKI_HTTP;
+ (NSString*)UPLYNK_HTTP;
+ (NSString*)UPLYNK_RTMP;
+ (NSString*)VELOCIX_HDS;
+ (NSString*)VELOCIX_HLS;
+ (NSString*)APPLE_HTTP;
+ (NSString*)HDS;
+ (NSString*)HTTP;
+ (NSString*)RTMP;
+ (NSString*)RTSP;
+ (NSString*)SILVER_LIGHT;
+ (NSString*)AKAMAI_HLS_DIRECT;
+ (NSString*)AKAMAI_HLS_MANIFEST;
+ (NSString*)AKAMAI_HD;
+ (NSString*)AKAMAI_HDS;
+ (NSString*)AKAMAI_HTTP;
+ (NSString*)AKAMAI_RTMP;
+ (NSString*)AKAMAI_RTSP;
+ (NSString*)AKAMAI_SS;
+ (NSString*)GENERIC_HLS;
+ (NSString*)GENERIC_HDS;
+ (NSString*)GENERIC_HTTP;
+ (NSString*)GENERIC_HLS_MANIFEST;
+ (NSString*)GENERIC_HDS_MANIFEST;
+ (NSString*)GENERIC_SS;
+ (NSString*)GENERIC_RTMP;
+ (NSString*)LEVEL3_HLS;
+ (NSString*)LEVEL3_HTTP;
+ (NSString*)LEVEL3_RTMP;
+ (NSString*)LIMELIGHT_HTTP;
+ (NSString*)LIMELIGHT_RTMP;
+ (NSString*)LOCAL_PATH_APPLE_HTTP;
+ (NSString*)LOCAL_PATH_HTTP;
+ (NSString*)LOCAL_PATH_RTMP;
+ (NSString*)VOD_PACKAGER_HLS;
+ (NSString*)VOD_PACKAGER_HDS;
+ (NSString*)VOD_PACKAGER_MSS;
+ (NSString*)VOD_PACKAGER_DASH;
+ (NSString*)LIVE_HLS;
+ (NSString*)LIVE_HDS;
+ (NSString*)LIVE_RTMP;
+ (NSString*)LIVE_AKAMAI_HDS;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDurationType : NSObject
+ (NSString*)LONG;
+ (NSString*)MEDIUM;
+ (NSString*)NOT_AVAILABLE;
+ (NSString*)SHORT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDynamicEnum : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEntryIdentifierField : NSObject
+ (NSString*)ID;
+ (NSString*)REFERENCE_ID;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEntryReplacementStatus : NSObject
+ (NSString*)NONE;
+ (NSString*)APPROVED_BUT_NOT_READY;
+ (NSString*)READY_BUT_NOT_APPROVED;
+ (NSString*)NOT_READY_AND_NOT_APPROVED;
+ (NSString*)FAILED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEntryStatus : NSObject
+ (NSString*)ERROR_IMPORTING;
+ (NSString*)ERROR_CONVERTING;
+ (NSString*)SCAN_FAILURE;
+ (NSString*)IMPORT;
+ (NSString*)INFECTED;
+ (NSString*)PRECONVERT;
+ (NSString*)READY;
+ (NSString*)DELETED;
+ (NSString*)PENDING;
+ (NSString*)MODERATE;
+ (NSString*)BLOCKED;
+ (NSString*)NO_CONTENT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEntryType : NSObject
+ (NSString*)AUTOMATIC;
+ (NSString*)EXTERNAL_MEDIA;
+ (NSString*)MEDIA_CLIP;
+ (NSString*)MIX;
+ (NSString*)PLAYLIST;
+ (NSString*)DATA;
+ (NSString*)LIVE_STREAM;
+ (NSString*)LIVE_CHANNEL;
+ (NSString*)DOCUMENT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFileAssetObjectType : NSObject
+ (NSString*)UI_CONF;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFileAssetOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFileAssetStatus : NSObject
+ (NSString*)PENDING;
+ (NSString*)UPLOADING;
+ (NSString*)READY;
+ (NSString*)DELETED;
+ (NSString*)ERROR;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFileSyncObjectType : NSObject
+ (NSString*)DISTRIBUTION_PROFILE;
+ (NSString*)ENTRY_DISTRIBUTION;
+ (NSString*)GENERIC_DISTRIBUTION_ACTION;
+ (NSString*)EMAIL_NOTIFICATION_TEMPLATE;
+ (NSString*)HTTP_NOTIFICATION_TEMPLATE;
+ (NSString*)ENTRY;
+ (NSString*)UICONF;
+ (NSString*)BATCHJOB;
+ (NSString*)ASSET;
+ (NSString*)FLAVOR_ASSET;
+ (NSString*)METADATA;
+ (NSString*)METADATA_PROFILE;
+ (NSString*)SYNDICATION_FEED;
+ (NSString*)CONVERSION_PROFILE;
+ (NSString*)FILE_ASSET;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorAssetOrderBy : NSObject
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
@interface KalturaFlavorParamsOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorParamsOutputOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGenericSyndicationFeedOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PLAYLIST_ID_ASC;
+ (NSString*)TYPE_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PLAYLIST_ID_DESC;
+ (NSString*)TYPE_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGenericXsltSyndicationFeedOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PLAYLIST_ID_ASC;
+ (NSString*)TYPE_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PLAYLIST_ID_DESC;
+ (NSString*)TYPE_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGeoCoderType : NSObject
+ (NSString*)KALTURA;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGoogleSyndicationFeedAdultValues : NSObject
+ (NSString*)NO_;
+ (NSString*)YES_;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGoogleVideoSyndicationFeedOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PLAYLIST_ID_ASC;
+ (NSString*)TYPE_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PLAYLIST_ID_DESC;
+ (NSString*)TYPE_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaITunesSyndicationFeedAdultValues : NSObject
+ (NSString*)CLEAN;
+ (NSString*)NO_;
+ (NSString*)YES_;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaITunesSyndicationFeedCategories : NSObject
+ (NSString*)ARTS;
+ (NSString*)ARTS_DESIGN;
+ (NSString*)ARTS_FASHION_BEAUTY;
+ (NSString*)ARTS_FOOD;
+ (NSString*)ARTS_LITERATURE;
+ (NSString*)ARTS_PERFORMING_ARTS;
+ (NSString*)ARTS_VISUAL_ARTS;
+ (NSString*)BUSINESS;
+ (NSString*)BUSINESS_BUSINESS_NEWS;
+ (NSString*)BUSINESS_CAREERS;
+ (NSString*)BUSINESS_INVESTING;
+ (NSString*)BUSINESS_MANAGEMENT_MARKETING;
+ (NSString*)BUSINESS_SHOPPING;
+ (NSString*)COMEDY;
+ (NSString*)EDUCATION;
+ (NSString*)EDUCATION_TECHNOLOGY;
+ (NSString*)EDUCATION_HIGHER_EDUCATION;
+ (NSString*)EDUCATION_K_12;
+ (NSString*)EDUCATION_LANGUAGE_COURSES;
+ (NSString*)EDUCATION_TRAINING;
+ (NSString*)GAMES_HOBBIES;
+ (NSString*)GAMES_HOBBIES_AUTOMOTIVE;
+ (NSString*)GAMES_HOBBIES_AVIATION;
+ (NSString*)GAMES_HOBBIES_HOBBIES;
+ (NSString*)GAMES_HOBBIES_OTHER_GAMES;
+ (NSString*)GAMES_HOBBIES_VIDEO_GAMES;
+ (NSString*)GOVERNMENT_ORGANIZATIONS;
+ (NSString*)GOVERNMENT_ORGANIZATIONS_LOCAL;
+ (NSString*)GOVERNMENT_ORGANIZATIONS_NATIONAL;
+ (NSString*)GOVERNMENT_ORGANIZATIONS_NON_PROFIT;
+ (NSString*)GOVERNMENT_ORGANIZATIONS_REGIONAL;
+ (NSString*)HEALTH;
+ (NSString*)HEALTH_ALTERNATIVE_HEALTH;
+ (NSString*)HEALTH_FITNESS_NUTRITION;
+ (NSString*)HEALTH_SELF_HELP;
+ (NSString*)HEALTH_SEXUALITY;
+ (NSString*)KIDS_FAMILY;
+ (NSString*)MUSIC;
+ (NSString*)NEWS_POLITICS;
+ (NSString*)RELIGION_SPIRITUALITY;
+ (NSString*)RELIGION_SPIRITUALITY_BUDDHISM;
+ (NSString*)RELIGION_SPIRITUALITY_CHRISTIANITY;
+ (NSString*)RELIGION_SPIRITUALITY_HINDUISM;
+ (NSString*)RELIGION_SPIRITUALITY_ISLAM;
+ (NSString*)RELIGION_SPIRITUALITY_JUDAISM;
+ (NSString*)RELIGION_SPIRITUALITY_OTHER;
+ (NSString*)RELIGION_SPIRITUALITY_SPIRITUALITY;
+ (NSString*)SCIENCE_MEDICINE;
+ (NSString*)SCIENCE_MEDICINE_MEDICINE;
+ (NSString*)SCIENCE_MEDICINE_NATURAL_SCIENCES;
+ (NSString*)SCIENCE_MEDICINE_SOCIAL_SCIENCES;
+ (NSString*)SOCIETY_CULTURE;
+ (NSString*)SOCIETY_CULTURE_HISTORY;
+ (NSString*)SOCIETY_CULTURE_PERSONAL_JOURNALS;
+ (NSString*)SOCIETY_CULTURE_PHILOSOPHY;
+ (NSString*)SOCIETY_CULTURE_PLACES_TRAVEL;
+ (NSString*)SPORTS_RECREATION;
+ (NSString*)SPORTS_RECREATION_AMATEUR;
+ (NSString*)SPORTS_RECREATION_COLLEGE_HIGH_SCHOOL;
+ (NSString*)SPORTS_RECREATION_OUTDOOR;
+ (NSString*)SPORTS_RECREATION_PROFESSIONAL;
+ (NSString*)TV_FILM;
+ (NSString*)TECHNOLOGY;
+ (NSString*)TECHNOLOGY_GADGETS;
+ (NSString*)TECHNOLOGY_PODCASTING;
+ (NSString*)TECHNOLOGY_SOFTWARE_HOW_TO;
+ (NSString*)TECHNOLOGY_TECH_NEWS;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaITunesSyndicationFeedOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PLAYLIST_ID_ASC;
+ (NSString*)TYPE_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PLAYLIST_ID_DESC;
+ (NSString*)TYPE_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLanguage : NSObject
+ (NSString*)AB;
+ (NSString*)AA;
+ (NSString*)AF;
+ (NSString*)SQ;
+ (NSString*)AM;
+ (NSString*)AR;
+ (NSString*)HY;
+ (NSString*)AS_;
+ (NSString*)AY;
+ (NSString*)AZ;
+ (NSString*)BA;
+ (NSString*)EU;
+ (NSString*)BN;
+ (NSString*)DZ;
+ (NSString*)BH;
+ (NSString*)BI;
+ (NSString*)BR;
+ (NSString*)BG;
+ (NSString*)MY;
+ (NSString*)BE;
+ (NSString*)KM;
+ (NSString*)CA;
+ (NSString*)ZH;
+ (NSString*)CO;
+ (NSString*)HR;
+ (NSString*)CS;
+ (NSString*)DA;
+ (NSString*)NL;
+ (NSString*)EN;
+ (NSString*)EO;
+ (NSString*)ET;
+ (NSString*)FO;
+ (NSString*)FA;
+ (NSString*)FJ;
+ (NSString*)FI;
+ (NSString*)FR;
+ (NSString*)FY;
+ (NSString*)GV;
+ (NSString*)GD;
+ (NSString*)GL;
+ (NSString*)KA;
+ (NSString*)DE;
+ (NSString*)EL;
+ (NSString*)KL;
+ (NSString*)GN;
+ (NSString*)GU;
+ (NSString*)HA;
+ (NSString*)IW;
+ (NSString*)HE;
+ (NSString*)HI;
+ (NSString*)HU;
+ (NSString*)IS;
+ (NSString*)IN;
+ (NSString*)ID;
+ (NSString*)IA;
+ (NSString*)IE;
+ (NSString*)IU;
+ (NSString*)IK;
+ (NSString*)GA;
+ (NSString*)IT;
+ (NSString*)JA;
+ (NSString*)JV;
+ (NSString*)KN;
+ (NSString*)KS;
+ (NSString*)KK;
+ (NSString*)RW;
+ (NSString*)KY;
+ (NSString*)RN;
+ (NSString*)KO;
+ (NSString*)KU;
+ (NSString*)LO;
+ (NSString*)LA;
+ (NSString*)LV;
+ (NSString*)LI;
+ (NSString*)LN;
+ (NSString*)LT;
+ (NSString*)MK;
+ (NSString*)MG;
+ (NSString*)MS;
+ (NSString*)ML;
+ (NSString*)MT;
+ (NSString*)MI;
+ (NSString*)MR;
+ (NSString*)MO;
+ (NSString*)MN;
+ (NSString*)NA;
+ (NSString*)NE;
+ (NSString*)NO_;
+ (NSString*)OC;
+ (NSString*)OR_;
+ (NSString*)OM;
+ (NSString*)PS;
+ (NSString*)PL;
+ (NSString*)PT;
+ (NSString*)PA;
+ (NSString*)QU;
+ (NSString*)RM;
+ (NSString*)RO;
+ (NSString*)RU;
+ (NSString*)SM;
+ (NSString*)SG;
+ (NSString*)SA;
+ (NSString*)SR;
+ (NSString*)SH;
+ (NSString*)ST;
+ (NSString*)TN;
+ (NSString*)SN;
+ (NSString*)SD;
+ (NSString*)SI;
+ (NSString*)SS;
+ (NSString*)SK;
+ (NSString*)SL;
+ (NSString*)SO;
+ (NSString*)ES;
+ (NSString*)SU;
+ (NSString*)SW;
+ (NSString*)SV;
+ (NSString*)TL;
+ (NSString*)TG;
+ (NSString*)TA;
+ (NSString*)TT;
+ (NSString*)TE;
+ (NSString*)TH;
+ (NSString*)BO;
+ (NSString*)TI;
+ (NSString*)TO;
+ (NSString*)TS;
+ (NSString*)TR;
+ (NSString*)TK;
+ (NSString*)TW;
+ (NSString*)UG;
+ (NSString*)UK;
+ (NSString*)UR;
+ (NSString*)UZ;
+ (NSString*)VI;
+ (NSString*)VO;
+ (NSString*)CY;
+ (NSString*)WO;
+ (NSString*)XH;
+ (NSString*)YI;
+ (NSString*)JI;
+ (NSString*)YO;
+ (NSString*)ZU;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLanguageCode : NSObject
+ (NSString*)AA;
+ (NSString*)AB;
+ (NSString*)AF;
+ (NSString*)AM;
+ (NSString*)AR;
+ (NSString*)AS_;
+ (NSString*)AY;
+ (NSString*)AZ;
+ (NSString*)BA;
+ (NSString*)BE;
+ (NSString*)BG;
+ (NSString*)BH;
+ (NSString*)BI;
+ (NSString*)BN;
+ (NSString*)BO;
+ (NSString*)BR;
+ (NSString*)CA;
+ (NSString*)CO;
+ (NSString*)CS;
+ (NSString*)CY;
+ (NSString*)DA;
+ (NSString*)DE;
+ (NSString*)DZ;
+ (NSString*)EL;
+ (NSString*)EN;
+ (NSString*)EO;
+ (NSString*)ES;
+ (NSString*)ET;
+ (NSString*)EU;
+ (NSString*)FA;
+ (NSString*)FI;
+ (NSString*)FJ;
+ (NSString*)FO;
+ (NSString*)FR;
+ (NSString*)FY;
+ (NSString*)GA;
+ (NSString*)GD;
+ (NSString*)GL;
+ (NSString*)GN;
+ (NSString*)GU;
+ (NSString*)GV;
+ (NSString*)HA;
+ (NSString*)HE;
+ (NSString*)HI;
+ (NSString*)HR;
+ (NSString*)HU;
+ (NSString*)HY;
+ (NSString*)IA;
+ (NSString*)ID;
+ (NSString*)IE;
+ (NSString*)IK;
+ (NSString*)IN;
+ (NSString*)IS;
+ (NSString*)IT;
+ (NSString*)IU;
+ (NSString*)IW;
+ (NSString*)JA;
+ (NSString*)JI;
+ (NSString*)JV;
+ (NSString*)KA;
+ (NSString*)KK;
+ (NSString*)KL;
+ (NSString*)KM;
+ (NSString*)KN;
+ (NSString*)KO;
+ (NSString*)KS;
+ (NSString*)KU;
+ (NSString*)KY;
+ (NSString*)LA;
+ (NSString*)LI;
+ (NSString*)LN;
+ (NSString*)LO;
+ (NSString*)LT;
+ (NSString*)LV;
+ (NSString*)MG;
+ (NSString*)MI;
+ (NSString*)MK;
+ (NSString*)ML;
+ (NSString*)MN;
+ (NSString*)MO;
+ (NSString*)MR;
+ (NSString*)MS;
+ (NSString*)MT;
+ (NSString*)MY;
+ (NSString*)NA;
+ (NSString*)NE;
+ (NSString*)NL;
+ (NSString*)NO_;
+ (NSString*)OC;
+ (NSString*)OM;
+ (NSString*)OR_;
+ (NSString*)PA;
+ (NSString*)PL;
+ (NSString*)PS;
+ (NSString*)PT;
+ (NSString*)QU;
+ (NSString*)RM;
+ (NSString*)RN;
+ (NSString*)RO;
+ (NSString*)RU;
+ (NSString*)RW;
+ (NSString*)SA;
+ (NSString*)SD;
+ (NSString*)SG;
+ (NSString*)SH;
+ (NSString*)SI;
+ (NSString*)SK;
+ (NSString*)SL;
+ (NSString*)SM;
+ (NSString*)SN;
+ (NSString*)SO;
+ (NSString*)SQ;
+ (NSString*)SR;
+ (NSString*)SS;
+ (NSString*)ST;
+ (NSString*)SU;
+ (NSString*)SV;
+ (NSString*)SW;
+ (NSString*)TA;
+ (NSString*)TE;
+ (NSString*)TG;
+ (NSString*)TH;
+ (NSString*)TI;
+ (NSString*)TK;
+ (NSString*)TL;
+ (NSString*)TN;
+ (NSString*)TO;
+ (NSString*)TR;
+ (NSString*)TS;
+ (NSString*)TT;
+ (NSString*)TW;
+ (NSString*)UG;
+ (NSString*)UK;
+ (NSString*)UR;
+ (NSString*)UZ;
+ (NSString*)VI;
+ (NSString*)VO;
+ (NSString*)WO;
+ (NSString*)XH;
+ (NSString*)YI;
+ (NSString*)YO;
+ (NSString*)ZH;
+ (NSString*)ZU;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveAssetOrderBy : NSObject
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
@interface KalturaLiveChannelOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)DURATION_ASC;
+ (NSString*)END_DATE_ASC;
+ (NSString*)FIRST_BROADCAST_ASC;
+ (NSString*)LAST_BROADCAST_ASC;
+ (NSString*)LAST_PLAYED_AT_ASC;
+ (NSString*)MEDIA_TYPE_ASC;
+ (NSString*)MODERATION_COUNT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)PLAYS_ASC;
+ (NSString*)RANK_ASC;
+ (NSString*)RECENT_ASC;
+ (NSString*)START_DATE_ASC;
+ (NSString*)TOTAL_RANK_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)VIEWS_ASC;
+ (NSString*)WEIGHT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)DURATION_DESC;
+ (NSString*)END_DATE_DESC;
+ (NSString*)FIRST_BROADCAST_DESC;
+ (NSString*)LAST_BROADCAST_DESC;
+ (NSString*)LAST_PLAYED_AT_DESC;
+ (NSString*)MEDIA_TYPE_DESC;
+ (NSString*)MODERATION_COUNT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)PLAYS_DESC;
+ (NSString*)RANK_DESC;
+ (NSString*)RECENT_DESC;
+ (NSString*)START_DATE_DESC;
+ (NSString*)TOTAL_RANK_DESC;
+ (NSString*)UPDATED_AT_DESC;
+ (NSString*)VIEWS_DESC;
+ (NSString*)WEIGHT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannelSegmentOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)START_TIME_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)START_TIME_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannelSegmentStatus : NSObject
+ (NSString*)ACTIVE;
+ (NSString*)DELETED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannelSegmentTriggerType : NSObject
+ (NSString*)CHANNEL_RELATIVE;
+ (NSString*)ABSOLUTE_TIME;
+ (NSString*)SEGMENT_START_RELATIVE;
+ (NSString*)SEGMENT_END_RELATIVE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannelSegmentType : NSObject
+ (NSString*)VIDEO_AND_AUDIO;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveEntryOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)DURATION_ASC;
+ (NSString*)END_DATE_ASC;
+ (NSString*)FIRST_BROADCAST_ASC;
+ (NSString*)LAST_BROADCAST_ASC;
+ (NSString*)LAST_PLAYED_AT_ASC;
+ (NSString*)MEDIA_TYPE_ASC;
+ (NSString*)MODERATION_COUNT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)PLAYS_ASC;
+ (NSString*)RANK_ASC;
+ (NSString*)RECENT_ASC;
+ (NSString*)START_DATE_ASC;
+ (NSString*)TOTAL_RANK_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)VIEWS_ASC;
+ (NSString*)WEIGHT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)DURATION_DESC;
+ (NSString*)END_DATE_DESC;
+ (NSString*)FIRST_BROADCAST_DESC;
+ (NSString*)LAST_BROADCAST_DESC;
+ (NSString*)LAST_PLAYED_AT_DESC;
+ (NSString*)MEDIA_TYPE_DESC;
+ (NSString*)MODERATION_COUNT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)PLAYS_DESC;
+ (NSString*)RANK_DESC;
+ (NSString*)RECENT_DESC;
+ (NSString*)START_DATE_DESC;
+ (NSString*)TOTAL_RANK_DESC;
+ (NSString*)UPDATED_AT_DESC;
+ (NSString*)VIEWS_DESC;
+ (NSString*)WEIGHT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveParamsOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveReportType : NSObject
+ (NSString*)ENTRY_GEO_TIME_LINE;
+ (NSString*)ENTRY_SYNDICATION_TOTAL;
+ (NSString*)ENTRY_TIME_LINE;
+ (NSString*)ENTRY_TOTAL;
+ (NSString*)PARTNER_TOTAL;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStreamAdminEntryOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)DURATION_ASC;
+ (NSString*)END_DATE_ASC;
+ (NSString*)FIRST_BROADCAST_ASC;
+ (NSString*)LAST_BROADCAST_ASC;
+ (NSString*)LAST_PLAYED_AT_ASC;
+ (NSString*)MEDIA_TYPE_ASC;
+ (NSString*)MODERATION_COUNT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)PLAYS_ASC;
+ (NSString*)RANK_ASC;
+ (NSString*)RECENT_ASC;
+ (NSString*)START_DATE_ASC;
+ (NSString*)TOTAL_RANK_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)VIEWS_ASC;
+ (NSString*)WEIGHT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)DURATION_DESC;
+ (NSString*)END_DATE_DESC;
+ (NSString*)FIRST_BROADCAST_DESC;
+ (NSString*)LAST_BROADCAST_DESC;
+ (NSString*)LAST_PLAYED_AT_DESC;
+ (NSString*)MEDIA_TYPE_DESC;
+ (NSString*)MODERATION_COUNT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)PLAYS_DESC;
+ (NSString*)RANK_DESC;
+ (NSString*)RECENT_DESC;
+ (NSString*)START_DATE_DESC;
+ (NSString*)TOTAL_RANK_DESC;
+ (NSString*)UPDATED_AT_DESC;
+ (NSString*)VIEWS_DESC;
+ (NSString*)WEIGHT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStreamEntryOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)DURATION_ASC;
+ (NSString*)END_DATE_ASC;
+ (NSString*)FIRST_BROADCAST_ASC;
+ (NSString*)LAST_BROADCAST_ASC;
+ (NSString*)LAST_PLAYED_AT_ASC;
+ (NSString*)MEDIA_TYPE_ASC;
+ (NSString*)MODERATION_COUNT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)PLAYS_ASC;
+ (NSString*)RANK_ASC;
+ (NSString*)RECENT_ASC;
+ (NSString*)START_DATE_ASC;
+ (NSString*)TOTAL_RANK_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)VIEWS_ASC;
+ (NSString*)WEIGHT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)DURATION_DESC;
+ (NSString*)END_DATE_DESC;
+ (NSString*)FIRST_BROADCAST_DESC;
+ (NSString*)LAST_BROADCAST_DESC;
+ (NSString*)LAST_PLAYED_AT_DESC;
+ (NSString*)MEDIA_TYPE_DESC;
+ (NSString*)MODERATION_COUNT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)PLAYS_DESC;
+ (NSString*)RANK_DESC;
+ (NSString*)RECENT_DESC;
+ (NSString*)START_DATE_DESC;
+ (NSString*)TOTAL_RANK_DESC;
+ (NSString*)UPDATED_AT_DESC;
+ (NSString*)VIEWS_DESC;
+ (NSString*)WEIGHT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMailType : NSObject
+ (NSString*)MAIL_TYPE_KALTURA_NEWSLETTER;
+ (NSString*)MAIL_TYPE_ADDED_TO_FAVORITES;
+ (NSString*)MAIL_TYPE_ADDED_TO_CLIP_FAVORITES;
+ (NSString*)MAIL_TYPE_NEW_COMMENT_IN_PROFILE;
+ (NSString*)MAIL_TYPE_CLIP_ADDED_YOUR_KALTURA;
+ (NSString*)MAIL_TYPE_VIDEO_ADDED;
+ (NSString*)MAIL_TYPE_ROUGHCUT_CREATED;
+ (NSString*)MAIL_TYPE_ADDED_KALTURA_TO_YOUR_FAVORITES;
+ (NSString*)MAIL_TYPE_NEW_COMMENT_IN_KALTURA;
+ (NSString*)MAIL_TYPE_CLIP_ADDED;
+ (NSString*)MAIL_TYPE_VIDEO_CREATED;
+ (NSString*)MAIL_TYPE_ADDED_KALTURA_TO_HIS_FAVORITES;
+ (NSString*)MAIL_TYPE_NEW_COMMENT_IN_KALTURA_YOU_CONTRIBUTED;
+ (NSString*)MAIL_TYPE_CLIP_CONTRIBUTED;
+ (NSString*)MAIL_TYPE_ROUGHCUT_CREATED_SUBSCRIBED;
+ (NSString*)MAIL_TYPE_ADDED_KALTURA_TO_HIS_FAVORITES_SUBSCRIBED;
+ (NSString*)MAIL_TYPE_NEW_COMMENT_IN_KALTURA_YOU_SUBSCRIBED;
+ (NSString*)MAIL_TYPE_REGISTER_CONFIRM;
+ (NSString*)MAIL_TYPE_PASSWORD_RESET;
+ (NSString*)MAIL_TYPE_LOGIN_MAIL_RESET;
+ (NSString*)MAIL_TYPE_REGISTER_CONFIRM_VIDEO_SERVICE;
+ (NSString*)MAIL_TYPE_VIDEO_READY;
+ (NSString*)MAIL_TYPE_VIDEO_IS_READY;
+ (NSString*)MAIL_TYPE_BULK_DOWNLOAD_READY;
+ (NSString*)MAIL_TYPE_BULKUPLOAD_FINISHED;
+ (NSString*)MAIL_TYPE_BULKUPLOAD_FAILED;
+ (NSString*)MAIL_TYPE_BULKUPLOAD_ABORTED;
+ (NSString*)MAIL_TYPE_NOTIFY_ERR;
+ (NSString*)MAIL_TYPE_ACCOUNT_UPGRADE_CONFIRM;
+ (NSString*)MAIL_TYPE_VIDEO_SERVICE_NOTICE;
+ (NSString*)MAIL_TYPE_VIDEO_SERVICE_NOTICE_LIMIT_REACHED;
+ (NSString*)MAIL_TYPE_VIDEO_SERVICE_NOTICE_ACCOUNT_LOCKED;
+ (NSString*)MAIL_TYPE_VIDEO_SERVICE_NOTICE_ACCOUNT_DELETED;
+ (NSString*)MAIL_TYPE_VIDEO_SERVICE_NOTICE_UPGRADE_OFFER;
+ (NSString*)MAIL_TYPE_ACCOUNT_REACTIVE_CONFIRM;
+ (NSString*)MAIL_TYPE_SYSTEM_USER_RESET_PASSWORD;
+ (NSString*)MAIL_TYPE_SYSTEM_USER_RESET_PASSWORD_SUCCESS;
+ (NSString*)MAIL_TYPE_SYSTEM_USER_NEW_PASSWORD;
+ (NSString*)MAIL_TYPE_SYSTEM_USER_CREDENTIALS_SAVED;
+ (NSString*)MAIL_TYPE_LIVE_REPORT_EXPORT_SUCCESS;
+ (NSString*)MAIL_TYPE_LIVE_REPORT_EXPORT_FAILURE;
+ (NSString*)MAIL_TYPE_LIVE_REPORT_EXPORT_ABORT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaEntryOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)DURATION_ASC;
+ (NSString*)END_DATE_ASC;
+ (NSString*)LAST_PLAYED_AT_ASC;
+ (NSString*)MEDIA_TYPE_ASC;
+ (NSString*)MODERATION_COUNT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)PLAYS_ASC;
+ (NSString*)RANK_ASC;
+ (NSString*)RECENT_ASC;
+ (NSString*)START_DATE_ASC;
+ (NSString*)TOTAL_RANK_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)VIEWS_ASC;
+ (NSString*)WEIGHT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)DURATION_DESC;
+ (NSString*)END_DATE_DESC;
+ (NSString*)LAST_PLAYED_AT_DESC;
+ (NSString*)MEDIA_TYPE_DESC;
+ (NSString*)MODERATION_COUNT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)PLAYS_DESC;
+ (NSString*)RANK_DESC;
+ (NSString*)RECENT_DESC;
+ (NSString*)START_DATE_DESC;
+ (NSString*)TOTAL_RANK_DESC;
+ (NSString*)UPDATED_AT_DESC;
+ (NSString*)VIEWS_DESC;
+ (NSString*)WEIGHT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaFlavorParamsOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaFlavorParamsOutputOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaInfoOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaParserType : NSObject
+ (NSString*)MEDIAINFO;
+ (NSString*)REMOTE_MEDIAINFO;
+ (NSString*)FFMPEG;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaServerOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMixEntryOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)DURATION_ASC;
+ (NSString*)END_DATE_ASC;
+ (NSString*)LAST_PLAYED_AT_ASC;
+ (NSString*)MODERATION_COUNT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)PLAYS_ASC;
+ (NSString*)RANK_ASC;
+ (NSString*)RECENT_ASC;
+ (NSString*)START_DATE_ASC;
+ (NSString*)TOTAL_RANK_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)VIEWS_ASC;
+ (NSString*)WEIGHT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)DURATION_DESC;
+ (NSString*)END_DATE_DESC;
+ (NSString*)LAST_PLAYED_AT_DESC;
+ (NSString*)MODERATION_COUNT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)PLAYS_DESC;
+ (NSString*)RANK_DESC;
+ (NSString*)RECENT_DESC;
+ (NSString*)START_DATE_DESC;
+ (NSString*)TOTAL_RANK_DESC;
+ (NSString*)UPDATED_AT_DESC;
+ (NSString*)VIEWS_DESC;
+ (NSString*)WEIGHT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaModerationFlagStatus : NSObject
+ (NSString*)PENDING;
+ (NSString*)MODERATED;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaModerationObjectType : NSObject
+ (NSString*)ENTRY;
+ (NSString*)USER;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPartnerOrderBy : NSObject
+ (NSString*)ADMIN_EMAIL_ASC;
+ (NSString*)ADMIN_NAME_ASC;
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)ID_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)STATUS_ASC;
+ (NSString*)WEBSITE_ASC;
+ (NSString*)ADMIN_EMAIL_DESC;
+ (NSString*)ADMIN_NAME_DESC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)ID_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)STATUS_DESC;
+ (NSString*)WEBSITE_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionItemOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)ID_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)ID_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionItemType : NSObject
+ (NSString*)API_ACTION_ITEM;
+ (NSString*)API_PARAMETER_ITEM;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)ID_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)ID_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayableEntryOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)DURATION_ASC;
+ (NSString*)END_DATE_ASC;
+ (NSString*)LAST_PLAYED_AT_ASC;
+ (NSString*)MODERATION_COUNT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)PLAYS_ASC;
+ (NSString*)RANK_ASC;
+ (NSString*)RECENT_ASC;
+ (NSString*)START_DATE_ASC;
+ (NSString*)TOTAL_RANK_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)VIEWS_ASC;
+ (NSString*)WEIGHT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)DURATION_DESC;
+ (NSString*)END_DATE_DESC;
+ (NSString*)LAST_PLAYED_AT_DESC;
+ (NSString*)MODERATION_COUNT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)PLAYS_DESC;
+ (NSString*)RANK_DESC;
+ (NSString*)RECENT_DESC;
+ (NSString*)START_DATE_DESC;
+ (NSString*)TOTAL_RANK_DESC;
+ (NSString*)UPDATED_AT_DESC;
+ (NSString*)VIEWS_DESC;
+ (NSString*)WEIGHT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlaybackProtocol : NSObject
+ (NSString*)APPLE_HTTP;
+ (NSString*)AUTO;
+ (NSString*)AKAMAI_HD;
+ (NSString*)AKAMAI_HDS;
+ (NSString*)HDS;
+ (NSString*)HLS;
+ (NSString*)HTTP;
+ (NSString*)MPEG_DASH;
+ (NSString*)MULTICAST_SL;
+ (NSString*)RTMP;
+ (NSString*)RTSP;
+ (NSString*)SILVER_LIGHT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlaylistOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)END_DATE_ASC;
+ (NSString*)MODERATION_COUNT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)RANK_ASC;
+ (NSString*)RECENT_ASC;
+ (NSString*)START_DATE_ASC;
+ (NSString*)TOTAL_RANK_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)WEIGHT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)END_DATE_DESC;
+ (NSString*)MODERATION_COUNT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)RANK_DESC;
+ (NSString*)RECENT_DESC;
+ (NSString*)START_DATE_DESC;
+ (NSString*)TOTAL_RANK_DESC;
+ (NSString*)UPDATED_AT_DESC;
+ (NSString*)WEIGHT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportInterval : NSObject
+ (NSString*)DAYS;
+ (NSString*)MONTHS;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaRuleActionType : NSObject
+ (NSString*)DRM_POLICY;
+ (NSString*)BLOCK;
+ (NSString*)PREVIEW;
+ (NSString*)LIMIT_FLAVORS;
+ (NSString*)ADD_TO_STORAGE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSchemaType : NSObject
+ (NSString*)BULK_UPLOAD_RESULT_XML;
+ (NSString*)BULK_UPLOAD_XML;
+ (NSString*)INGEST_API;
+ (NSString*)SERVE_API;
+ (NSString*)DROP_FOLDER_XML;
+ (NSString*)SYNDICATION;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSearchConditionComparison : NSObject
+ (NSString*)EQUAL;
+ (NSString*)GREATER_THAN;
+ (NSString*)GREATER_THAN_OR_EQUAL;
+ (NSString*)LESS_THAN;
+ (NSString*)LESS_THAN_OR_EQUAL;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSourceType : NSObject
+ (NSString*)LIMELIGHT_LIVE;
+ (NSString*)VELOCIX_LIVE;
+ (NSString*)FILE;
+ (NSString*)WEBCAM;
+ (NSString*)URL;
+ (NSString*)SEARCH_PROVIDER;
+ (NSString*)AKAMAI_LIVE;
+ (NSString*)MANUAL_LIVE_STREAM;
+ (NSString*)AKAMAI_UNIVERSAL_LIVE;
+ (NSString*)LIVE_STREAM;
+ (NSString*)LIVE_CHANNEL;
+ (NSString*)RECORDED_LIVE;
+ (NSString*)CLIP;
+ (NSString*)LIVE_STREAM_ONTEXTDATA_CAPTIONS;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageProfileOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageProfileProtocol : NSObject
+ (NSString*)KONTIKI;
+ (NSString*)KALTURA_DC;
+ (NSString*)FTP;
+ (NSString*)SCP;
+ (NSString*)SFTP;
+ (NSString*)S3;
+ (NSString*)LOCAL;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSyndicationFeedEntriesOrderBy : NSObject
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)RECENT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaTaggedObjectType : NSObject
+ (NSString*)ENTRY;
+ (NSString*)CATEGORY;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbAssetOrderBy : NSObject
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
@interface KalturaThumbParamsOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbParamsOutputOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaTubeMogulSyndicationFeedCategories : NSObject
+ (NSString*)ANIMALS_AND_PETS;
+ (NSString*)ARTS_AND_ANIMATION;
+ (NSString*)AUTOS;
+ (NSString*)COMEDY;
+ (NSString*)COMMERCIALS_PROMOTIONAL;
+ (NSString*)ENTERTAINMENT;
+ (NSString*)FAMILY_AND_KIDS;
+ (NSString*)HOW_TO_INSTRUCTIONAL_DIY;
+ (NSString*)MUSIC;
+ (NSString*)NEWS_AND_BLOGS;
+ (NSString*)SCIENCE_AND_TECHNOLOGY;
+ (NSString*)SPORTS;
+ (NSString*)TRAVEL_AND_PLACES;
+ (NSString*)VIDEO_GAMES;
+ (NSString*)VLOGS_PEOPLE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaTubeMogulSyndicationFeedOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PLAYLIST_ID_ASC;
+ (NSString*)TYPE_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PLAYLIST_ID_DESC;
+ (NSString*)TYPE_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUiConfOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUploadTokenOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserLoginDataOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)ID_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)ID_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserRoleOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)ID_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)ID_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaVideoCodec : NSObject
+ (NSString*)NONE;
+ (NSString*)APCH;
+ (NSString*)APCN;
+ (NSString*)APCO;
+ (NSString*)APCS;
+ (NSString*)COPY;
+ (NSString*)DNXHD;
+ (NSString*)DV;
+ (NSString*)FLV;
+ (NSString*)H263;
+ (NSString*)H264;
+ (NSString*)H264B;
+ (NSString*)H264H;
+ (NSString*)H264M;
+ (NSString*)H265;
+ (NSString*)MPEG2;
+ (NSString*)MPEG4;
+ (NSString*)THEORA;
+ (NSString*)VP6;
+ (NSString*)VP8;
+ (NSString*)VP9;
+ (NSString*)WMV2;
+ (NSString*)WMV3;
+ (NSString*)WVC1A;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidgetOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaYahooSyndicationFeedAdultValues : NSObject
+ (NSString*)ADULT;
+ (NSString*)NON_ADULT;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaYahooSyndicationFeedCategories : NSObject
+ (NSString*)ACTION;
+ (NSString*)ANIMALS;
+ (NSString*)ART_AND_ANIMATION;
+ (NSString*)COMMERCIALS;
+ (NSString*)ENTERTAINMENT_AND_TV;
+ (NSString*)FAMILY;
+ (NSString*)FOOD;
+ (NSString*)FUNNY_VIDEOS;
+ (NSString*)GAMES;
+ (NSString*)HEALTH_AND_BEAUTY;
+ (NSString*)HOW_TO;
+ (NSString*)MOVIES_AND_SHORTS;
+ (NSString*)MUSIC;
+ (NSString*)NEWS_AND_POLITICS;
+ (NSString*)PEOPLE_AND_VLOGS;
+ (NSString*)PRODUCTS_AND_TECH;
+ (NSString*)SCIENCE_AND_ENVIRONMENT;
+ (NSString*)SPORTS;
+ (NSString*)TRANSPORTATION;
+ (NSString*)TRAVEL;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaYahooSyndicationFeedOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)PLAYLIST_ID_ASC;
+ (NSString*)TYPE_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)NAME_DESC;
+ (NSString*)PLAYLIST_ID_DESC;
+ (NSString*)TYPE_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

///////////////////////// classes /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaBaseRestriction : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControl : KalturaObjectBase
// The id of the Access Control Profile
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,assign,readonly) int partnerId;
// The name of the Access Control Profile
@property (nonatomic,copy) NSString* name;
// System name of the Access Control Profile
@property (nonatomic,copy) NSString* systemName;
// The description of the Access Control Profile
@property (nonatomic,copy) NSString* description;
// Creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// True if this Conversion Profile is the default
@property (nonatomic,assign) int isDefault;	// enum KalturaNullableBoolean
// Array of Access Control Restrictions
@property (nonatomic,retain) NSMutableArray* restrictions;	// of KalturaBaseRestriction elements
// Indicates that the access control profile is new and should be handled using KalturaAccessControlProfile object and accessControlProfile service
@property (nonatomic,assign,readonly) KALTURA_BOOL containsUnsuportedRestrictions;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfSystemName;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfIsDefault;
- (KalturaFieldType)getTypeOfRestrictions;
- (NSString*)getObjectTypeOfRestrictions;
- (KalturaFieldType)getTypeOfContainsUnsuportedRestrictions;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setIsDefaultFromString:(NSString*)aPropVal;
- (void)setContainsUnsuportedRestrictionsFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaContextTypeHolder : KalturaObjectBase
// The type of the condition context
@property (nonatomic,copy) NSString* type;	// enum KalturaContextType
- (KalturaFieldType)getTypeOfType;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlContextTypeHolder : KalturaContextTypeHolder
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaAccessControl elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaRuleAction : KalturaObjectBase
// The type of the action
@property (nonatomic,copy,readonly) NSString* type;	// enum KalturaRuleActionType
- (KalturaFieldType)getTypeOfType;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCondition : KalturaObjectBase
// The type of the access control condition
@property (nonatomic,copy,readonly) NSString* type;	// enum KalturaConditionType
@property (nonatomic,copy) NSString* description;
@property (nonatomic,assign) KALTURA_BOOL not;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfNot;
- (void)setNotFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaRule : KalturaObjectBase
// Message to be thrown to the player in case the rule is fulfilled
@property (nonatomic,copy) NSString* message;
// Actions to be performed by the player in case the rule is fulfilled
@property (nonatomic,retain) NSMutableArray* actions;	// of KalturaRuleAction elements
// Conditions to validate the rule
@property (nonatomic,retain) NSMutableArray* conditions;	// of KalturaCondition elements
// Indicates what contexts should be tested by this rule
@property (nonatomic,retain) NSMutableArray* contexts;	// of KalturaContextTypeHolder elements
// Indicates that this rule is enough and no need to continue checking the rest of the rules
@property (nonatomic,assign) KALTURA_BOOL stopProcessing;
- (KalturaFieldType)getTypeOfMessage;
- (KalturaFieldType)getTypeOfActions;
- (NSString*)getObjectTypeOfActions;
- (KalturaFieldType)getTypeOfConditions;
- (NSString*)getObjectTypeOfConditions;
- (KalturaFieldType)getTypeOfContexts;
- (NSString*)getObjectTypeOfContexts;
- (KalturaFieldType)getTypeOfStopProcessing;
- (void)setStopProcessingFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlProfile : KalturaObjectBase
// The id of the Access Control Profile
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,assign,readonly) int partnerId;
// The name of the Access Control Profile
@property (nonatomic,copy) NSString* name;
// System name of the Access Control Profile
@property (nonatomic,copy) NSString* systemName;
// The description of the Access Control Profile
@property (nonatomic,copy) NSString* description;
// Creation time as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// Update time as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int updatedAt;
// True if this access control profile is the partner default
@property (nonatomic,assign) int isDefault;	// enum KalturaNullableBoolean
// Array of access control rules
@property (nonatomic,retain) NSMutableArray* rules;	// of KalturaRule elements
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfSystemName;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfIsDefault;
- (KalturaFieldType)getTypeOfRules;
- (NSString*)getObjectTypeOfRules;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
- (void)setIsDefaultFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlProfileListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaAccessControlProfile elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// A key value pair representation to return an array of key-value pairs (associative array)
@interface KalturaKeyValue : KalturaObjectBase
@property (nonatomic,copy) NSString* key;
@property (nonatomic,copy) NSString* value;
- (KalturaFieldType)getTypeOfKey;
- (KalturaFieldType)getTypeOfValue;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlScope : KalturaObjectBase
// URL to be used to test domain conditions.
@property (nonatomic,copy) NSString* referrer;
// IP to be used to test geographic location conditions.
@property (nonatomic,copy) NSString* ip;
// Kaltura session to be used to test session and user conditions.
@property (nonatomic,copy) NSString* ks;
// Browser or client application to be used to test agent conditions.
@property (nonatomic,copy) NSString* userAgent;
// Unix timestamp (In seconds) to be used to test entry scheduling, keep null to use now.
@property (nonatomic,assign) int time;
// Indicates what contexts should be tested. No contexts means any context.
@property (nonatomic,retain) NSMutableArray* contexts;	// of KalturaAccessControlContextTypeHolder elements
// Array of hashes to pass to the access control profile scope
@property (nonatomic,retain) NSMutableArray* hashes;	// of KalturaKeyValue elements
- (KalturaFieldType)getTypeOfReferrer;
- (KalturaFieldType)getTypeOfIp;
- (KalturaFieldType)getTypeOfKs;
- (KalturaFieldType)getTypeOfUserAgent;
- (KalturaFieldType)getTypeOfTime;
- (KalturaFieldType)getTypeOfContexts;
- (NSString*)getObjectTypeOfContexts;
- (KalturaFieldType)getTypeOfHashes;
- (NSString*)getObjectTypeOfHashes;
- (void)setTimeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAsset : KalturaObjectBase
// The ID of the Flavor Asset
@property (nonatomic,copy,readonly) NSString* id;
// The entry ID of the Flavor Asset
@property (nonatomic,copy,readonly) NSString* entryId;
@property (nonatomic,assign,readonly) int partnerId;
// The version of the Flavor Asset
@property (nonatomic,assign,readonly) int version;
// The size (in KBytes) of the Flavor Asset
@property (nonatomic,assign,readonly) int size;
// Tags used to identify the Flavor Asset in various scenarios
@property (nonatomic,copy) NSString* tags;
// The file extension
@property (nonatomic,copy) NSString* fileExt;	// insertonly
@property (nonatomic,assign,readonly) int createdAt;
@property (nonatomic,assign,readonly) int updatedAt;
@property (nonatomic,assign,readonly) int deletedAt;
// System description, error message, warnings and failure cause.
@property (nonatomic,copy,readonly) NSString* description;
// Partner private data
@property (nonatomic,copy) NSString* partnerData;
// Partner friendly description
@property (nonatomic,copy) NSString* partnerDescription;
// Comma separated list of source flavor params ids
@property (nonatomic,copy) NSString* actualSourceAssetParamsIds;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfVersion;
- (KalturaFieldType)getTypeOfSize;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfFileExt;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfDeletedAt;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfPartnerData;
- (KalturaFieldType)getTypeOfPartnerDescription;
- (KalturaFieldType)getTypeOfActualSourceAssetParamsIds;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setVersionFromString:(NSString*)aPropVal;
- (void)setSizeFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
- (void)setDeletedAtFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// A string representation to return an array of strings
@interface KalturaString : KalturaObjectBase
@property (nonatomic,copy) NSString* value;
- (KalturaFieldType)getTypeOfValue;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetParams : KalturaObjectBase
// The id of the Flavor Params
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,assign) int partnerId;
// The name of the Flavor Params
@property (nonatomic,copy) NSString* name;
// System name of the Flavor Params
@property (nonatomic,copy) NSString* systemName;
// The description of the Flavor Params
@property (nonatomic,copy) NSString* description;
// Creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// True if those Flavor Params are part of system defaults
@property (nonatomic,assign,readonly) int isSystemDefault;	// enum KalturaNullableBoolean
// The Flavor Params tags are used to identify the flavor for different usage (e.g. web, hd, mobile)
@property (nonatomic,copy) NSString* tags;
// Array of partner permisison names that required for using this asset params
@property (nonatomic,retain) NSMutableArray* requiredPermissions;	// of KalturaString elements
// Id of remote storage profile that used to get the source, zero indicates Kaltura data center
@property (nonatomic,assign) int sourceRemoteStorageProfileId;
// Comma seperated ids of remote storage profiles that the flavor distributed to, the distribution done by the conversion engine
@property (nonatomic,assign) int remoteStorageProfileIds;
// Media parser type to be used for post-conversion validation
@property (nonatomic,copy) NSString* mediaParserType;	// enum KalturaMediaParserType
// Comma seperated ids of source flavor params this flavor is created from
@property (nonatomic,copy) NSString* sourceAssetParamsIds;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfSystemName;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfIsSystemDefault;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfRequiredPermissions;
- (NSString*)getObjectTypeOfRequiredPermissions;
- (KalturaFieldType)getTypeOfSourceRemoteStorageProfileId;
- (KalturaFieldType)getTypeOfRemoteStorageProfileIds;
- (KalturaFieldType)getTypeOfMediaParserType;
- (KalturaFieldType)getTypeOfSourceAssetParamsIds;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setIsSystemDefaultFromString:(NSString*)aPropVal;
- (void)setSourceRemoteStorageProfileIdFromString:(NSString*)aPropVal;
- (void)setRemoteStorageProfileIdsFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// Used to ingest entry object, as single resource or list of resources accompanied by asset params ids.
@interface KalturaResource : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
// Is a unified way to add content to Kaltura whether it's an uploaded file, webcam recording, imported URL or existing file sync.
@interface KalturaContentResource : KalturaResource
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetParamsResourceContainer : KalturaResource
// The content resource to associate with asset params
@property (nonatomic,retain) KalturaContentResource* resource;
// The asset params to associate with the reaource
@property (nonatomic,assign) int assetParamsId;
- (KalturaFieldType)getTypeOfResource;
- (NSString*)getObjectTypeOfResource;
- (KalturaFieldType)getTypeOfAssetParamsId;
- (void)setAssetParamsIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// Base class to all operation attributes types
@interface KalturaOperationAttributes : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBaseEntry : KalturaObjectBase
// Auto generated 10 characters alphanumeric string
@property (nonatomic,copy,readonly) NSString* id;
// Entry name (Min 1 chars)
@property (nonatomic,copy) NSString* name;
// Entry description
@property (nonatomic,copy) NSString* description;
@property (nonatomic,assign,readonly) int partnerId;
// The ID of the user who is the owner of this entry
@property (nonatomic,copy) NSString* userId;
// The ID of the user who created this entry
@property (nonatomic,copy) NSString* creatorId;	// insertonly
// Entry tags
@property (nonatomic,copy) NSString* tags;
// Entry admin tags can be updated only by administrators
@property (nonatomic,copy) NSString* adminTags;
// Categories with no entitlement that this entry belongs to.
@property (nonatomic,copy) NSString* categories;
// Categories Ids of categories with no entitlement that this entry belongs to
@property (nonatomic,copy) NSString* categoriesIds;
@property (nonatomic,copy,readonly) NSString* status;	// enum KalturaEntryStatus
// Entry moderation status
@property (nonatomic,assign,readonly) int moderationStatus;	// enum KalturaEntryModerationStatus
// Number of moderation requests waiting for this entry
@property (nonatomic,assign,readonly) int moderationCount;
// The type of the entry, this is auto filled by the derived entry object
@property (nonatomic,copy) NSString* type;	// enum KalturaEntryType
// Entry creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// Entry update date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int updatedAt;
// The calculated average rank. rank = totalRank / votes
@property (nonatomic,assign,readonly) double rank;
// The sum of all rank values submitted to the baseEntry.anonymousRank action
@property (nonatomic,assign,readonly) int totalRank;
// A count of all requests made to the baseEntry.anonymousRank action
@property (nonatomic,assign,readonly) int votes;
@property (nonatomic,assign) int groupId;
// Can be used to store various partner related data as a string
@property (nonatomic,copy) NSString* partnerData;
// Download URL for the entry
@property (nonatomic,copy,readonly) NSString* downloadUrl;
// Indexed search text for full text search
@property (nonatomic,copy,readonly) NSString* searchText;
// License type used for this entry
@property (nonatomic,assign) int licenseType;	// enum KalturaLicenseType
// Version of the entry data
@property (nonatomic,assign,readonly) int version;
// Thumbnail URL
@property (nonatomic,copy) NSString* thumbnailUrl;	// insertonly
// The Access Control ID assigned to this entry (null when not set, send -1 to remove)
@property (nonatomic,assign) int accessControlId;
// Entry scheduling start date (null when not set, send -1 to remove)
@property (nonatomic,assign) int startDate;
// Entry scheduling end date (null when not set, send -1 to remove)
@property (nonatomic,assign) int endDate;
// Entry external reference id
@property (nonatomic,copy) NSString* referenceId;
// ID of temporary entry that will replace this entry when it's approved and ready for replacement
@property (nonatomic,copy,readonly) NSString* replacingEntryId;
// ID of the entry that will be replaced when the replacement approved and this entry is ready
@property (nonatomic,copy,readonly) NSString* replacedEntryId;
// Status of the replacement readiness and approval
@property (nonatomic,copy,readonly) NSString* replacementStatus;	// enum KalturaEntryReplacementStatus
// Can be used to store various partner related data as a numeric value
@property (nonatomic,assign) int partnerSortValue;
// Override the default ingestion profile
@property (nonatomic,assign) int conversionProfileId;
// IF not empty, points to an entry ID the should replace this current entry's id.
@property (nonatomic,copy) NSString* redirectEntryId;
// ID of source root entry, used for clipped, skipped and cropped entries that created from another entry
@property (nonatomic,copy,readonly) NSString* rootEntryId;
// ID of source root entry, used for defining entires association
@property (nonatomic,copy) NSString* parentEntryId;
// clipping, skipping and cropping attributes that used to create this entry
@property (nonatomic,retain) NSMutableArray* operationAttributes;	// of KalturaOperationAttributes elements
// list of user ids that are entitled to edit the entry (no server enforcement) The difference between entitledUsersEdit and entitledUsersPublish is applicative only
@property (nonatomic,copy) NSString* entitledUsersEdit;
// list of user ids that are entitled to publish the entry (no server enforcement) The difference between entitledUsersEdit and entitledUsersPublish is applicative only
@property (nonatomic,copy) NSString* entitledUsersPublish;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfCreatorId;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfAdminTags;
- (KalturaFieldType)getTypeOfCategories;
- (KalturaFieldType)getTypeOfCategoriesIds;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfModerationStatus;
- (KalturaFieldType)getTypeOfModerationCount;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfRank;
- (KalturaFieldType)getTypeOfTotalRank;
- (KalturaFieldType)getTypeOfVotes;
- (KalturaFieldType)getTypeOfGroupId;
- (KalturaFieldType)getTypeOfPartnerData;
- (KalturaFieldType)getTypeOfDownloadUrl;
- (KalturaFieldType)getTypeOfSearchText;
- (KalturaFieldType)getTypeOfLicenseType;
- (KalturaFieldType)getTypeOfVersion;
- (KalturaFieldType)getTypeOfThumbnailUrl;
- (KalturaFieldType)getTypeOfAccessControlId;
- (KalturaFieldType)getTypeOfStartDate;
- (KalturaFieldType)getTypeOfEndDate;
- (KalturaFieldType)getTypeOfReferenceId;
- (KalturaFieldType)getTypeOfReplacingEntryId;
- (KalturaFieldType)getTypeOfReplacedEntryId;
- (KalturaFieldType)getTypeOfReplacementStatus;
- (KalturaFieldType)getTypeOfPartnerSortValue;
- (KalturaFieldType)getTypeOfConversionProfileId;
- (KalturaFieldType)getTypeOfRedirectEntryId;
- (KalturaFieldType)getTypeOfRootEntryId;
- (KalturaFieldType)getTypeOfParentEntryId;
- (KalturaFieldType)getTypeOfOperationAttributes;
- (NSString*)getObjectTypeOfOperationAttributes;
- (KalturaFieldType)getTypeOfEntitledUsersEdit;
- (KalturaFieldType)getTypeOfEntitledUsersPublish;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setModerationStatusFromString:(NSString*)aPropVal;
- (void)setModerationCountFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
- (void)setRankFromString:(NSString*)aPropVal;
- (void)setTotalRankFromString:(NSString*)aPropVal;
- (void)setVotesFromString:(NSString*)aPropVal;
- (void)setGroupIdFromString:(NSString*)aPropVal;
- (void)setLicenseTypeFromString:(NSString*)aPropVal;
- (void)setVersionFromString:(NSString*)aPropVal;
- (void)setAccessControlIdFromString:(NSString*)aPropVal;
- (void)setStartDateFromString:(NSString*)aPropVal;
- (void)setEndDateFromString:(NSString*)aPropVal;
- (void)setPartnerSortValueFromString:(NSString*)aPropVal;
- (void)setConversionProfileIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBaseEntryListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaBaseEntry elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBaseSyndicationFeed : KalturaObjectBase
@property (nonatomic,copy,readonly) NSString* id;
@property (nonatomic,copy,readonly) NSString* feedUrl;
@property (nonatomic,assign,readonly) int partnerId;
// link a playlist that will set what content the feed will include
// 	 if empty, all content will be included in feed
@property (nonatomic,copy) NSString* playlistId;
// feed name
@property (nonatomic,copy) NSString* name;
// feed status
@property (nonatomic,assign,readonly) int status;	// enum KalturaSyndicationFeedStatus
// feed type
@property (nonatomic,assign) int type;	// enum KalturaSyndicationFeedType, insertonly
// Base URL for each video, on the partners site
// 	 This is required by all syndication types.
@property (nonatomic,copy) NSString* landingPage;
// Creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// allow_embed tells google OR yahoo weather to allow embedding the video on google OR yahoo video results
// 	 or just to provide a link to the landing page.
// 	 it is applied on the video-player_loc property in the XML (google)
// 	 and addes media-player tag (yahoo)
@property (nonatomic,assign) KALTURA_BOOL allowEmbed;
// Select a uiconf ID as player skin to include in the kwidget url
@property (nonatomic,assign) int playerUiconfId;
@property (nonatomic,assign) int flavorParamId;
@property (nonatomic,assign) KALTURA_BOOL transcodeExistingContent;
@property (nonatomic,assign) KALTURA_BOOL addToDefaultConversionProfile;
@property (nonatomic,copy) NSString* categories;
@property (nonatomic,assign) int storageId;
@property (nonatomic,copy) NSString* entriesOrderBy;	// enum KalturaSyndicationFeedEntriesOrderBy
// Should enforce entitlement on feed entries
@property (nonatomic,assign) KALTURA_BOOL enforceEntitlement;
// Set privacy context for search entries that assiged to private and public categories within a category privacy context.
@property (nonatomic,copy) NSString* privacyContext;
// Update date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int updatedAt;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfFeedUrl;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfPlaylistId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfLandingPage;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfAllowEmbed;
- (KalturaFieldType)getTypeOfPlayerUiconfId;
- (KalturaFieldType)getTypeOfFlavorParamId;
- (KalturaFieldType)getTypeOfTranscodeExistingContent;
- (KalturaFieldType)getTypeOfAddToDefaultConversionProfile;
- (KalturaFieldType)getTypeOfCategories;
- (KalturaFieldType)getTypeOfStorageId;
- (KalturaFieldType)getTypeOfEntriesOrderBy;
- (KalturaFieldType)getTypeOfEnforceEntitlement;
- (KalturaFieldType)getTypeOfPrivacyContext;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setTypeFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setAllowEmbedFromString:(NSString*)aPropVal;
- (void)setPlayerUiconfIdFromString:(NSString*)aPropVal;
- (void)setFlavorParamIdFromString:(NSString*)aPropVal;
- (void)setTranscodeExistingContentFromString:(NSString*)aPropVal;
- (void)setAddToDefaultConversionProfileFromString:(NSString*)aPropVal;
- (void)setStorageIdFromString:(NSString*)aPropVal;
- (void)setEnforceEntitlementFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBaseSyndicationFeedListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaBaseSyndicationFeed elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadPluginData : KalturaObjectBase
@property (nonatomic,copy) NSString* field;
@property (nonatomic,copy) NSString* value;
- (KalturaFieldType)getTypeOfField;
- (KalturaFieldType)getTypeOfValue;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadResult : KalturaObjectBase
// The id of the result
@property (nonatomic,assign,readonly) int id;
// The id of the parent job
@property (nonatomic,assign) int bulkUploadJobId;
// The index of the line in the CSV
@property (nonatomic,assign) int lineIndex;
@property (nonatomic,assign) int partnerId;
@property (nonatomic,copy) NSString* status;	// enum KalturaBulkUploadResultStatus
@property (nonatomic,copy) NSString* action;	// enum KalturaBulkUploadAction
@property (nonatomic,copy) NSString* objectId;
@property (nonatomic,assign) int objectStatus;
@property (nonatomic,copy) NSString* bulkUploadResultObjectType;	// enum KalturaBulkUploadResultObjectType
// The data as recieved in the csv
@property (nonatomic,copy) NSString* rowData;
@property (nonatomic,copy) NSString* partnerData;
@property (nonatomic,copy) NSString* objectErrorDescription;
@property (nonatomic,retain) NSMutableArray* pluginsData;	// of KalturaBulkUploadPluginData elements
@property (nonatomic,copy) NSString* errorDescription;
@property (nonatomic,copy) NSString* errorCode;
@property (nonatomic,assign) int errorType;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfBulkUploadJobId;
- (KalturaFieldType)getTypeOfLineIndex;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfAction;
- (KalturaFieldType)getTypeOfObjectId;
- (KalturaFieldType)getTypeOfObjectStatus;
- (KalturaFieldType)getTypeOfBulkUploadResultObjectType;
- (KalturaFieldType)getTypeOfRowData;
- (KalturaFieldType)getTypeOfPartnerData;
- (KalturaFieldType)getTypeOfObjectErrorDescription;
- (KalturaFieldType)getTypeOfPluginsData;
- (NSString*)getObjectTypeOfPluginsData;
- (KalturaFieldType)getTypeOfErrorDescription;
- (KalturaFieldType)getTypeOfErrorCode;
- (KalturaFieldType)getTypeOfErrorType;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setBulkUploadJobIdFromString:(NSString*)aPropVal;
- (void)setLineIndexFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setObjectStatusFromString:(NSString*)aPropVal;
- (void)setErrorTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUpload : KalturaObjectBase
@property (nonatomic,assign) int id;
@property (nonatomic,copy) NSString* uploadedBy;
@property (nonatomic,copy) NSString* uploadedByUserId;
@property (nonatomic,assign) int uploadedOn;
@property (nonatomic,assign) int numOfEntries;
@property (nonatomic,assign) int status;	// enum KalturaBatchJobStatus
@property (nonatomic,copy) NSString* logFileUrl;
@property (nonatomic,copy) NSString* csvFileUrl;
@property (nonatomic,copy) NSString* bulkFileUrl;
@property (nonatomic,copy) NSString* bulkUploadType;	// enum KalturaBulkUploadType
@property (nonatomic,retain) NSMutableArray* results;	// of KalturaBulkUploadResult elements
@property (nonatomic,copy) NSString* error;
@property (nonatomic,assign) int errorType;	// enum KalturaBatchJobErrorTypes
@property (nonatomic,assign) int errorNumber;
@property (nonatomic,copy) NSString* fileName;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,assign) int numOfObjects;
@property (nonatomic,copy) NSString* bulkUploadObjectType;	// enum KalturaBulkUploadObjectType
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfUploadedBy;
- (KalturaFieldType)getTypeOfUploadedByUserId;
- (KalturaFieldType)getTypeOfUploadedOn;
- (KalturaFieldType)getTypeOfNumOfEntries;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfLogFileUrl;
- (KalturaFieldType)getTypeOfCsvFileUrl;
- (KalturaFieldType)getTypeOfBulkFileUrl;
- (KalturaFieldType)getTypeOfBulkUploadType;
- (KalturaFieldType)getTypeOfResults;
- (NSString*)getObjectTypeOfResults;
- (KalturaFieldType)getTypeOfError;
- (KalturaFieldType)getTypeOfErrorType;
- (KalturaFieldType)getTypeOfErrorNumber;
- (KalturaFieldType)getTypeOfFileName;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfNumOfObjects;
- (KalturaFieldType)getTypeOfBulkUploadObjectType;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setUploadedOnFromString:(NSString*)aPropVal;
- (void)setNumOfEntriesFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setErrorTypeFromString:(NSString*)aPropVal;
- (void)setErrorNumberFromString:(NSString*)aPropVal;
- (void)setNumOfObjectsFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaBulkUpload elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// This class represents object-specific data passed to the 
//  bulk upload job.
@interface KalturaBulkUploadObjectData : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCEError : KalturaObjectBase
@property (nonatomic,copy,readonly) NSString* id;
@property (nonatomic,assign) int partnerId;
@property (nonatomic,copy) NSString* browser;
@property (nonatomic,copy) NSString* serverIp;
@property (nonatomic,copy) NSString* serverOs;
@property (nonatomic,copy) NSString* phpVersion;
@property (nonatomic,copy) NSString* ceAdminEmail;
@property (nonatomic,copy) NSString* type;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,copy) NSString* data;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfBrowser;
- (KalturaFieldType)getTypeOfServerIp;
- (KalturaFieldType)getTypeOfServerOs;
- (KalturaFieldType)getTypeOfPhpVersion;
- (KalturaFieldType)getTypeOfCeAdminEmail;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfData;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategory : KalturaObjectBase
// The id of the Category
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,assign) int parentId;
@property (nonatomic,assign,readonly) int depth;
@property (nonatomic,assign,readonly) int partnerId;
// The name of the Category. 
// 	 The following characters are not allowed: '<', '>', ','
@property (nonatomic,copy) NSString* name;
// The full name of the Category
@property (nonatomic,copy,readonly) NSString* fullName;
// The full ids of the Category
@property (nonatomic,copy,readonly) NSString* fullIds;
// Number of entries in this Category (including child categories)
@property (nonatomic,assign,readonly) int entriesCount;
// Creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// Update date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int updatedAt;
// Category description
@property (nonatomic,copy) NSString* description;
// Category tags
@property (nonatomic,copy) NSString* tags;
// If category will be returned for list action.
@property (nonatomic,assign) int appearInList;	// enum KalturaAppearInListType
// defines the privacy of the entries that assigned to this category
@property (nonatomic,assign) int privacy;	// enum KalturaPrivacyType
// If Category members are inherited from parent category or set manualy.
@property (nonatomic,assign) int inheritanceType;	// enum KalturaInheritanceType
// Who can ask to join this category
@property (nonatomic,assign,readonly) int userJoinPolicy;	// enum KalturaUserJoinPolicyType
// Default permissionLevel for new users
@property (nonatomic,assign) int defaultPermissionLevel;	// enum KalturaCategoryUserPermissionLevel
// Category Owner (User id)
@property (nonatomic,copy) NSString* owner;
// Number of entries that belong to this category directly
@property (nonatomic,assign,readonly) int directEntriesCount;
// Category external id, controlled and managed by the partner.
@property (nonatomic,copy) NSString* referenceId;
// who can assign entries to this category
@property (nonatomic,assign) int contributionPolicy;	// enum KalturaContributionPolicyType
// Number of active members for this category
@property (nonatomic,assign,readonly) int membersCount;
// Number of pending members for this category
@property (nonatomic,assign,readonly) int pendingMembersCount;
// Set privacy context for search entries that assiged to private and public categories. the entries will be private if the search context is set with those categories.
@property (nonatomic,copy) NSString* privacyContext;
// comma separated parents that defines a privacyContext for search
@property (nonatomic,copy,readonly) NSString* privacyContexts;
// Status
@property (nonatomic,assign,readonly) int status;	// enum KalturaCategoryStatus
// The category id that this category inherit its members and members permission (for contribution and join)
@property (nonatomic,assign,readonly) int inheritedParentId;
// Can be used to store various partner related data as a numeric value
@property (nonatomic,assign) int partnerSortValue;
// Can be used to store various partner related data as a string
@property (nonatomic,copy) NSString* partnerData;
// Enable client side applications to define how to sort the category child categories
@property (nonatomic,copy) NSString* defaultOrderBy;	// enum KalturaCategoryOrderBy
// Number of direct children categories
@property (nonatomic,assign,readonly) int directSubCategoriesCount;
// Moderation to add entries to this category by users that are not of permission level Manager or Moderator.
@property (nonatomic,assign) int moderation;	// enum KalturaNullableBoolean
// Nunber of pending moderation entries
@property (nonatomic,assign,readonly) int pendingEntriesCount;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfParentId;
- (KalturaFieldType)getTypeOfDepth;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfFullName;
- (KalturaFieldType)getTypeOfFullIds;
- (KalturaFieldType)getTypeOfEntriesCount;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfAppearInList;
- (KalturaFieldType)getTypeOfPrivacy;
- (KalturaFieldType)getTypeOfInheritanceType;
- (KalturaFieldType)getTypeOfUserJoinPolicy;
- (KalturaFieldType)getTypeOfDefaultPermissionLevel;
- (KalturaFieldType)getTypeOfOwner;
- (KalturaFieldType)getTypeOfDirectEntriesCount;
- (KalturaFieldType)getTypeOfReferenceId;
- (KalturaFieldType)getTypeOfContributionPolicy;
- (KalturaFieldType)getTypeOfMembersCount;
- (KalturaFieldType)getTypeOfPendingMembersCount;
- (KalturaFieldType)getTypeOfPrivacyContext;
- (KalturaFieldType)getTypeOfPrivacyContexts;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfInheritedParentId;
- (KalturaFieldType)getTypeOfPartnerSortValue;
- (KalturaFieldType)getTypeOfPartnerData;
- (KalturaFieldType)getTypeOfDefaultOrderBy;
- (KalturaFieldType)getTypeOfDirectSubCategoriesCount;
- (KalturaFieldType)getTypeOfModeration;
- (KalturaFieldType)getTypeOfPendingEntriesCount;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setParentIdFromString:(NSString*)aPropVal;
- (void)setDepthFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setEntriesCountFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
- (void)setAppearInListFromString:(NSString*)aPropVal;
- (void)setPrivacyFromString:(NSString*)aPropVal;
- (void)setInheritanceTypeFromString:(NSString*)aPropVal;
- (void)setUserJoinPolicyFromString:(NSString*)aPropVal;
- (void)setDefaultPermissionLevelFromString:(NSString*)aPropVal;
- (void)setDirectEntriesCountFromString:(NSString*)aPropVal;
- (void)setContributionPolicyFromString:(NSString*)aPropVal;
- (void)setMembersCountFromString:(NSString*)aPropVal;
- (void)setPendingMembersCountFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setInheritedParentIdFromString:(NSString*)aPropVal;
- (void)setPartnerSortValueFromString:(NSString*)aPropVal;
- (void)setDirectSubCategoriesCountFromString:(NSString*)aPropVal;
- (void)setModerationFromString:(NSString*)aPropVal;
- (void)setPendingEntriesCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryEntry : KalturaObjectBase
@property (nonatomic,assign) int categoryId;
// entry id
@property (nonatomic,copy) NSString* entryId;
// Creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// The full ids of the Category
@property (nonatomic,copy,readonly) NSString* categoryFullIds;
// CategroyEntry status
@property (nonatomic,assign,readonly) int status;	// enum KalturaCategoryEntryStatus
- (KalturaFieldType)getTypeOfCategoryId;
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfCategoryFullIds;
- (KalturaFieldType)getTypeOfStatus;
- (void)setCategoryIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryEntryListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaCategoryEntry elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaCategory elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryUser : KalturaObjectBase
@property (nonatomic,assign) int categoryId;	// insertonly
// User id
@property (nonatomic,copy) NSString* userId;	// insertonly
// Partner id
@property (nonatomic,assign,readonly) int partnerId;
// Permission level
@property (nonatomic,assign) int permissionLevel;	// enum KalturaCategoryUserPermissionLevel
// Status
@property (nonatomic,assign,readonly) int status;	// enum KalturaCategoryUserStatus
// CategoryUser creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// CategoryUser update date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int updatedAt;
// Update method can be either manual or automatic to distinguish between manual operations (for example in KMC) on automatic - using bulk upload
@property (nonatomic,assign) int updateMethod;	// enum KalturaUpdateMethodType
// The full ids of the Category
@property (nonatomic,copy,readonly) NSString* categoryFullIds;
// Set of category-related permissions for the current category user.
@property (nonatomic,copy) NSString* permissionNames;
- (KalturaFieldType)getTypeOfCategoryId;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfPermissionLevel;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfUpdateMethod;
- (KalturaFieldType)getTypeOfCategoryFullIds;
- (KalturaFieldType)getTypeOfPermissionNames;
- (void)setCategoryIdFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setPermissionLevelFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
- (void)setUpdateMethodFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryUserListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaCategoryUser elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// Client notification object to hold the notification url and the data when sending client side notifications
@interface KalturaClientNotification : KalturaObjectBase
// The URL where the notification should be sent to
@property (nonatomic,copy) NSString* url;
// The serialized notification data to send
@property (nonatomic,copy) NSString* data;
- (KalturaFieldType)getTypeOfUrl;
- (KalturaFieldType)getTypeOfData;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaContext : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
@interface KalturaContextDataResult : KalturaObjectBase
// Array of messages as received from the rules that invalidated
@property (nonatomic,retain) NSMutableArray* messages;	// of KalturaString elements
// Array of actions as received from the rules that invalidated
@property (nonatomic,retain) NSMutableArray* actions;	// of KalturaRuleAction elements
- (KalturaFieldType)getTypeOfMessages;
- (NSString*)getObjectTypeOfMessages;
- (KalturaFieldType)getTypeOfActions;
- (NSString*)getObjectTypeOfActions;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionAttribute : KalturaObjectBase
// The id of the flavor params, set to null for source flavor
@property (nonatomic,assign) int flavorParamsId;
// Attribute name
@property (nonatomic,copy) NSString* name;
// Attribute value
@property (nonatomic,copy) NSString* value;
- (KalturaFieldType)getTypeOfFlavorParamsId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfValue;
- (void)setFlavorParamsIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCropDimensions : KalturaObjectBase
// Crop left point
@property (nonatomic,assign) int left;
// Crop top point
@property (nonatomic,assign) int top;
// Crop width
@property (nonatomic,assign) int width;
// Crop height
@property (nonatomic,assign) int height;
- (KalturaFieldType)getTypeOfLeft;
- (KalturaFieldType)getTypeOfTop;
- (KalturaFieldType)getTypeOfWidth;
- (KalturaFieldType)getTypeOfHeight;
- (void)setLeftFromString:(NSString*)aPropVal;
- (void)setTopFromString:(NSString*)aPropVal;
- (void)setWidthFromString:(NSString*)aPropVal;
- (void)setHeightFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfile : KalturaObjectBase
// The id of the Conversion Profile
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,copy) NSString* status;	// enum KalturaConversionProfileStatus
@property (nonatomic,copy) NSString* type;	// enum KalturaConversionProfileType, insertonly
// The name of the Conversion Profile
@property (nonatomic,copy) NSString* name;
// System name of the Conversion Profile
@property (nonatomic,copy) NSString* systemName;
// Comma separated tags
@property (nonatomic,copy) NSString* tags;
// The description of the Conversion Profile
@property (nonatomic,copy) NSString* description;
// ID of the default entry to be used for template data
@property (nonatomic,copy) NSString* defaultEntryId;
// Creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// List of included flavor ids (comma separated)
@property (nonatomic,copy) NSString* flavorParamsIds;
// Indicates that this conversion profile is system default
@property (nonatomic,assign) int isDefault;	// enum KalturaNullableBoolean
// Indicates that this conversion profile is partner default
@property (nonatomic,assign,readonly) KALTURA_BOOL isPartnerDefault;
// Cropping dimensions
@property (nonatomic,retain) KalturaCropDimensions* cropDimensions;
// Clipping start position (in miliseconds)
@property (nonatomic,assign) int clipStart;
// Clipping duration (in miliseconds)
@property (nonatomic,assign) int clipDuration;
// XSL to transform ingestion MRSS XML
@property (nonatomic,copy) NSString* xslTransformation;
// ID of default storage profile to be used for linked net-storage file syncs
@property (nonatomic,assign) int storageProfileId;
// Media parser type to be used for extract media
@property (nonatomic,copy) NSString* mediaParserType;	// enum KalturaMediaParserType
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfSystemName;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfDefaultEntryId;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfFlavorParamsIds;
- (KalturaFieldType)getTypeOfIsDefault;
- (KalturaFieldType)getTypeOfIsPartnerDefault;
- (KalturaFieldType)getTypeOfCropDimensions;
- (NSString*)getObjectTypeOfCropDimensions;
- (KalturaFieldType)getTypeOfClipStart;
- (KalturaFieldType)getTypeOfClipDuration;
- (KalturaFieldType)getTypeOfXslTransformation;
- (KalturaFieldType)getTypeOfStorageProfileId;
- (KalturaFieldType)getTypeOfMediaParserType;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setIsDefaultFromString:(NSString*)aPropVal;
- (void)setIsPartnerDefaultFromString:(NSString*)aPropVal;
- (void)setClipStartFromString:(NSString*)aPropVal;
- (void)setClipDurationFromString:(NSString*)aPropVal;
- (void)setStorageProfileIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfileAssetParams : KalturaObjectBase
// The id of the conversion profile
@property (nonatomic,assign,readonly) int conversionProfileId;
// The id of the asset params
@property (nonatomic,assign,readonly) int assetParamsId;
// The ingestion origin of the asset params
@property (nonatomic,assign) int readyBehavior;	// enum KalturaFlavorReadyBehaviorType
// The ingestion origin of the asset params
@property (nonatomic,assign) int origin;	// enum KalturaAssetParamsOrigin
// Asset params system name
@property (nonatomic,copy) NSString* systemName;
// Starts conversion even if the decision layer reduced the configuration to comply with the source
@property (nonatomic,assign) int forceNoneComplied;	// enum KalturaNullableBoolean
// Specifies how to treat the flavor after conversion is finished
@property (nonatomic,assign) int deletePolicy;	// enum KalturaAssetParamsDeletePolicy
- (KalturaFieldType)getTypeOfConversionProfileId;
- (KalturaFieldType)getTypeOfAssetParamsId;
- (KalturaFieldType)getTypeOfReadyBehavior;
- (KalturaFieldType)getTypeOfOrigin;
- (KalturaFieldType)getTypeOfSystemName;
- (KalturaFieldType)getTypeOfForceNoneComplied;
- (KalturaFieldType)getTypeOfDeletePolicy;
- (void)setConversionProfileIdFromString:(NSString*)aPropVal;
- (void)setAssetParamsIdFromString:(NSString*)aPropVal;
- (void)setReadyBehaviorFromString:(NSString*)aPropVal;
- (void)setOriginFromString:(NSString*)aPropVal;
- (void)setForceNoneCompliedFromString:(NSString*)aPropVal;
- (void)setDeletePolicyFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfileAssetParamsListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaConversionProfileAssetParams elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfileListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaConversionProfile elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConvertCollectionFlavorData : KalturaObjectBase
@property (nonatomic,copy) NSString* flavorAssetId;
@property (nonatomic,assign) int flavorParamsOutputId;
@property (nonatomic,assign) int readyBehavior;
@property (nonatomic,assign) int videoBitrate;
@property (nonatomic,assign) int audioBitrate;
@property (nonatomic,copy) NSString* destFileSyncLocalPath;
@property (nonatomic,copy) NSString* destFileSyncRemoteUrl;
- (KalturaFieldType)getTypeOfFlavorAssetId;
- (KalturaFieldType)getTypeOfFlavorParamsOutputId;
- (KalturaFieldType)getTypeOfReadyBehavior;
- (KalturaFieldType)getTypeOfVideoBitrate;
- (KalturaFieldType)getTypeOfAudioBitrate;
- (KalturaFieldType)getTypeOfDestFileSyncLocalPath;
- (KalturaFieldType)getTypeOfDestFileSyncRemoteUrl;
- (void)setFlavorParamsOutputIdFromString:(NSString*)aPropVal;
- (void)setReadyBehaviorFromString:(NSString*)aPropVal;
- (void)setVideoBitrateFromString:(NSString*)aPropVal;
- (void)setAudioBitrateFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCoordinate : KalturaObjectBase
@property (nonatomic,assign) double latitude;
@property (nonatomic,assign) double longitude;
@property (nonatomic,copy) NSString* name;
- (KalturaFieldType)getTypeOfLatitude;
- (KalturaFieldType)getTypeOfLongitude;
- (KalturaFieldType)getTypeOfName;
- (void)setLatitudeFromString:(NSString*)aPropVal;
- (void)setLongitudeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDataEntry : KalturaBaseEntry
// The data of the entry
@property (nonatomic,copy) NSString* dataContent;
// indicator whether to return the object for get action with the dataContent field.
@property (nonatomic,assign) KALTURA_BOOL retrieveDataContentByGet;	// insertonly
- (KalturaFieldType)getTypeOfDataContent;
- (KalturaFieldType)getTypeOfRetrieveDataContentByGet;
- (void)setRetrieveDataContentByGetFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDataListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaDataEntry elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlRecognizer : KalturaObjectBase
// The hosts that are recognized
@property (nonatomic,copy) NSString* hosts;
// The URI prefix we use for security
@property (nonatomic,copy) NSString* uriPrefix;
- (KalturaFieldType)getTypeOfHosts;
- (KalturaFieldType)getTypeOfUriPrefix;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlTokenizer : KalturaObjectBase
// Window
@property (nonatomic,assign) int window;
// key
@property (nonatomic,copy) NSString* key;
- (KalturaFieldType)getTypeOfWindow;
- (KalturaFieldType)getTypeOfKey;
- (void)setWindowFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfile : KalturaObjectBase
// The id of the Delivery
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,assign,readonly) int partnerId;
// The name of the Delivery
@property (nonatomic,copy) NSString* name;
// Delivery type
@property (nonatomic,copy) NSString* type;	// enum KalturaDeliveryProfileType
// System name of the delivery
@property (nonatomic,copy) NSString* systemName;
// The description of the Delivery
@property (nonatomic,copy) NSString* description;
// Creation time as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// Update time as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int updatedAt;
@property (nonatomic,copy) NSString* streamerType;	// enum KalturaPlaybackProtocol
@property (nonatomic,copy) NSString* url;
// the host part of the url
@property (nonatomic,copy,readonly) NSString* hostName;
@property (nonatomic,assign) int status;	// enum KalturaDeliveryStatus
@property (nonatomic,retain) KalturaUrlRecognizer* recognizer;
@property (nonatomic,retain) KalturaUrlTokenizer* tokenizer;
// True if this is the systemwide default for the protocol
@property (nonatomic,assign,readonly) int isDefault;	// enum KalturaNullableBoolean
// the object from which this object was cloned (or 0)
@property (nonatomic,assign,readonly) int parentId;
// Comma separated list of supported media protocols. f.i. rtmpe
@property (nonatomic,copy) NSString* mediaProtocols;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfSystemName;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfStreamerType;
- (KalturaFieldType)getTypeOfUrl;
- (KalturaFieldType)getTypeOfHostName;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfRecognizer;
- (NSString*)getObjectTypeOfRecognizer;
- (KalturaFieldType)getTypeOfTokenizer;
- (NSString*)getObjectTypeOfTokenizer;
- (KalturaFieldType)getTypeOfIsDefault;
- (KalturaFieldType)getTypeOfParentId;
- (KalturaFieldType)getTypeOfMediaProtocols;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setIsDefaultFromString:(NSString*)aPropVal;
- (void)setParentIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaDeliveryProfile elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFileSyncDescriptor : KalturaObjectBase
@property (nonatomic,copy) NSString* fileSyncLocalPath;
// The translated path as used by the scheduler
@property (nonatomic,copy) NSString* fileSyncRemoteUrl;
@property (nonatomic,assign) int fileSyncObjectSubType;
- (KalturaFieldType)getTypeOfFileSyncLocalPath;
- (KalturaFieldType)getTypeOfFileSyncRemoteUrl;
- (KalturaFieldType)getTypeOfFileSyncObjectSubType;
- (void)setFileSyncObjectSubTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDestFileSyncDescriptor : KalturaFileSyncDescriptor
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEmailIngestionProfile : KalturaObjectBase
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,copy) NSString* name;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,copy) NSString* emailAddress;
@property (nonatomic,copy) NSString* mailboxId;
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,assign) int conversionProfile2Id;
@property (nonatomic,assign) int moderationStatus;	// enum KalturaEntryModerationStatus
@property (nonatomic,assign,readonly) int status;	// enum KalturaEmailIngestionProfileStatus
@property (nonatomic,copy,readonly) NSString* createdAt;
@property (nonatomic,copy) NSString* defaultCategory;
@property (nonatomic,copy) NSString* defaultUserId;
@property (nonatomic,copy) NSString* defaultTags;
@property (nonatomic,copy) NSString* defaultAdminTags;
@property (nonatomic,assign) int maxAttachmentSizeKbytes;
@property (nonatomic,assign) int maxAttachmentsPerMail;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfEmailAddress;
- (KalturaFieldType)getTypeOfMailboxId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfConversionProfile2Id;
- (KalturaFieldType)getTypeOfModerationStatus;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfDefaultCategory;
- (KalturaFieldType)getTypeOfDefaultUserId;
- (KalturaFieldType)getTypeOfDefaultTags;
- (KalturaFieldType)getTypeOfDefaultAdminTags;
- (KalturaFieldType)getTypeOfMaxAttachmentSizeKbytes;
- (KalturaFieldType)getTypeOfMaxAttachmentsPerMail;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setConversionProfile2IdFromString:(NSString*)aPropVal;
- (void)setModerationStatusFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setMaxAttachmentSizeKbytesFromString:(NSString*)aPropVal;
- (void)setMaxAttachmentsPerMailFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// A representation to return an array of values
@interface KalturaValue : KalturaObjectBase
@property (nonatomic,copy) NSString* description;
- (KalturaFieldType)getTypeOfDescription;
@end

// @package Kaltura
// @subpackage Client
// A string representation to return an array of strings
@interface KalturaStringValue : KalturaValue
@property (nonatomic,copy) NSString* value;
- (KalturaFieldType)getTypeOfValue;
@end

// @package Kaltura
// @subpackage Client
// Advanced configuration for entry replacement process
@interface KalturaEntryReplacementOptions : KalturaObjectBase
// If true manually created thumbnails will not be deleted on entry replacement
@property (nonatomic,assign) int keepManualThumbnails;
- (KalturaFieldType)getTypeOfKeepManualThumbnails;
- (void)setKeepManualThumbnailsFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// Configuration for extended item in the Kaltura MRSS feeds
@interface KalturaObjectIdentifier : KalturaObjectBase
// Comma separated string of enum values denoting which features of the item need to be included in the MRSS
@property (nonatomic,copy) NSString* extendedFeatures;
- (KalturaFieldType)getTypeOfExtendedFeatures;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaExtendingItemMrssParameter : KalturaObjectBase
// XPath for the extending item
@property (nonatomic,copy) NSString* xpath;
// Object identifier
@property (nonatomic,retain) KalturaObjectIdentifier* identifier;
// Mode of extension - append to MRSS or replace the xpath content.
@property (nonatomic,assign) int extensionMode;	// enum KalturaMrssExtensionMode
- (KalturaFieldType)getTypeOfXpath;
- (KalturaFieldType)getTypeOfIdentifier;
- (NSString*)getObjectTypeOfIdentifier;
- (KalturaFieldType)getTypeOfExtensionMode;
- (void)setExtensionModeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayableEntry : KalturaBaseEntry
// Number of plays
@property (nonatomic,assign,readonly) int plays;
// Number of views
@property (nonatomic,assign,readonly) int views;
// The last time the entry was played
@property (nonatomic,assign,readonly) int lastPlayedAt;
// The width in pixels
@property (nonatomic,assign,readonly) int width;
// The height in pixels
@property (nonatomic,assign,readonly) int height;
// The duration in seconds
@property (nonatomic,assign,readonly) int duration;
// The duration in miliseconds
@property (nonatomic,assign) int msDuration;
// The duration type (short for 0-4 mins, medium for 4-20 mins, long for 20+ mins)
@property (nonatomic,copy,readonly) NSString* durationType;	// enum KalturaDurationType
- (KalturaFieldType)getTypeOfPlays;
- (KalturaFieldType)getTypeOfViews;
- (KalturaFieldType)getTypeOfLastPlayedAt;
- (KalturaFieldType)getTypeOfWidth;
- (KalturaFieldType)getTypeOfHeight;
- (KalturaFieldType)getTypeOfDuration;
- (KalturaFieldType)getTypeOfMsDuration;
- (KalturaFieldType)getTypeOfDurationType;
- (void)setPlaysFromString:(NSString*)aPropVal;
- (void)setViewsFromString:(NSString*)aPropVal;
- (void)setLastPlayedAtFromString:(NSString*)aPropVal;
- (void)setWidthFromString:(NSString*)aPropVal;
- (void)setHeightFromString:(NSString*)aPropVal;
- (void)setDurationFromString:(NSString*)aPropVal;
- (void)setMsDurationFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaEntry : KalturaPlayableEntry
// The media type of the entry
@property (nonatomic,assign) int mediaType;	// enum KalturaMediaType, insertonly
// Override the default conversion quality
@property (nonatomic,copy) NSString* conversionQuality;	// insertonly
// The source type of the entry
@property (nonatomic,copy) NSString* sourceType;	// enum KalturaSourceType, insertonly
// The search provider type used to import this entry
@property (nonatomic,assign) int searchProviderType;	// enum KalturaSearchProviderType, insertonly
// The ID of the media in the importing site
@property (nonatomic,copy) NSString* searchProviderId;	// insertonly
// The user name used for credits
@property (nonatomic,copy) NSString* creditUserName;
// The URL for credits
@property (nonatomic,copy) NSString* creditUrl;
// The media date extracted from EXIF data (For images) as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int mediaDate;
// The URL used for playback. This is not the download URL.
@property (nonatomic,copy,readonly) NSString* dataUrl;
// Comma separated flavor params ids that exists for this media entry
@property (nonatomic,copy,readonly) NSString* flavorParamsIds;
- (KalturaFieldType)getTypeOfMediaType;
- (KalturaFieldType)getTypeOfConversionQuality;
- (KalturaFieldType)getTypeOfSourceType;
- (KalturaFieldType)getTypeOfSearchProviderType;
- (KalturaFieldType)getTypeOfSearchProviderId;
- (KalturaFieldType)getTypeOfCreditUserName;
- (KalturaFieldType)getTypeOfCreditUrl;
- (KalturaFieldType)getTypeOfMediaDate;
- (KalturaFieldType)getTypeOfDataUrl;
- (KalturaFieldType)getTypeOfFlavorParamsIds;
- (void)setMediaTypeFromString:(NSString*)aPropVal;
- (void)setSearchProviderTypeFromString:(NSString*)aPropVal;
- (void)setMediaDateFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFeatureStatus : KalturaObjectBase
@property (nonatomic,assign) int type;	// enum KalturaFeatureStatusType
@property (nonatomic,assign) int value;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfValue;
- (void)setTypeFromString:(NSString*)aPropVal;
- (void)setValueFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFeatureStatusListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaFeatureStatus elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFileAsset : KalturaObjectBase
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,copy) NSString* fileAssetObjectType;	// enum KalturaFileAssetObjectType, insertonly
@property (nonatomic,copy) NSString* objectId;	// insertonly
@property (nonatomic,copy) NSString* name;
@property (nonatomic,copy) NSString* systemName;
@property (nonatomic,copy) NSString* fileExt;
@property (nonatomic,assign,readonly) int version;
@property (nonatomic,assign,readonly) int createdAt;
@property (nonatomic,assign,readonly) int updatedAt;
@property (nonatomic,copy,readonly) NSString* status;	// enum KalturaFileAssetStatus
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfFileAssetObjectType;
- (KalturaFieldType)getTypeOfObjectId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfSystemName;
- (KalturaFieldType)getTypeOfFileExt;
- (KalturaFieldType)getTypeOfVersion;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfStatus;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setVersionFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFileAssetListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaFileAsset elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSearchItem : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFilter : KalturaObjectBase
@property (nonatomic,copy) NSString* orderBy;
@property (nonatomic,retain) KalturaSearchItem* advancedSearch;
- (KalturaFieldType)getTypeOfOrderBy;
- (KalturaFieldType)getTypeOfAdvancedSearch;
- (NSString*)getObjectTypeOfAdvancedSearch;
@end

// @package Kaltura
// @subpackage Client
// The KalturaFilterPager object enables paging management to be applied upon service list actions.
@interface KalturaFilterPager : KalturaObjectBase
// The number of objects to retrieve. (Default is 30, maximum page size is 500).
@property (nonatomic,assign) int pageSize;
// The page number for which {pageSize} of objects should be retrieved (Default is 1).
@property (nonatomic,assign) int pageIndex;
- (KalturaFieldType)getTypeOfPageSize;
- (KalturaFieldType)getTypeOfPageIndex;
- (void)setPageSizeFromString:(NSString*)aPropVal;
- (void)setPageIndexFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorAsset : KalturaAsset
// The Flavor Params used to create this Flavor Asset
@property (nonatomic,assign) int flavorParamsId;	// insertonly
// The width of the Flavor Asset
@property (nonatomic,assign,readonly) int width;
// The height of the Flavor Asset
@property (nonatomic,assign,readonly) int height;
// The overall bitrate (in KBits) of the Flavor Asset
@property (nonatomic,assign,readonly) int bitrate;
// The frame rate (in FPS) of the Flavor Asset
@property (nonatomic,assign,readonly) double frameRate;
// True if this Flavor Asset is the original source
@property (nonatomic,assign,readonly) KALTURA_BOOL isOriginal;
// True if this Flavor Asset is playable in KDP
@property (nonatomic,assign,readonly) KALTURA_BOOL isWeb;
// The container format
@property (nonatomic,copy,readonly) NSString* containerFormat;
// The video codec
@property (nonatomic,copy,readonly) NSString* videoCodecId;
// The status of the Flavor Asset
@property (nonatomic,assign,readonly) int status;	// enum KalturaFlavorAssetStatus
- (KalturaFieldType)getTypeOfFlavorParamsId;
- (KalturaFieldType)getTypeOfWidth;
- (KalturaFieldType)getTypeOfHeight;
- (KalturaFieldType)getTypeOfBitrate;
- (KalturaFieldType)getTypeOfFrameRate;
- (KalturaFieldType)getTypeOfIsOriginal;
- (KalturaFieldType)getTypeOfIsWeb;
- (KalturaFieldType)getTypeOfContainerFormat;
- (KalturaFieldType)getTypeOfVideoCodecId;
- (KalturaFieldType)getTypeOfStatus;
- (void)setFlavorParamsIdFromString:(NSString*)aPropVal;
- (void)setWidthFromString:(NSString*)aPropVal;
- (void)setHeightFromString:(NSString*)aPropVal;
- (void)setBitrateFromString:(NSString*)aPropVal;
- (void)setFrameRateFromString:(NSString*)aPropVal;
- (void)setIsOriginalFromString:(NSString*)aPropVal;
- (void)setIsWebFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorAssetListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaFlavorAsset elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorParams : KalturaAssetParams
// The video codec of the Flavor Params
@property (nonatomic,copy) NSString* videoCodec;	// enum KalturaVideoCodec
// The video bitrate (in KBits) of the Flavor Params
@property (nonatomic,assign) int videoBitrate;
// The audio codec of the Flavor Params
@property (nonatomic,copy) NSString* audioCodec;	// enum KalturaAudioCodec
// The audio bitrate (in KBits) of the Flavor Params
@property (nonatomic,assign) int audioBitrate;
// The number of audio channels for "downmixing"
@property (nonatomic,assign) int audioChannels;
// The audio sample rate of the Flavor Params
@property (nonatomic,assign) int audioSampleRate;
// The desired width of the Flavor Params
@property (nonatomic,assign) int width;
// The desired height of the Flavor Params
@property (nonatomic,assign) int height;
// The frame rate of the Flavor Params
@property (nonatomic,assign) int frameRate;
// The gop size of the Flavor Params
@property (nonatomic,assign) int gopSize;
// The list of conversion engines (comma separated)
@property (nonatomic,copy) NSString* conversionEngines;
// The list of conversion engines extra params (separated with "|")
@property (nonatomic,copy) NSString* conversionEnginesExtraParams;
@property (nonatomic,assign) KALTURA_BOOL twoPass;
@property (nonatomic,assign) int deinterlice;
@property (nonatomic,assign) int rotate;
@property (nonatomic,copy) NSString* operators;
@property (nonatomic,assign) int engineVersion;
// The container format of the Flavor Params
@property (nonatomic,copy) NSString* format;	// enum KalturaContainerFormat
@property (nonatomic,assign) int aspectRatioProcessingMode;
@property (nonatomic,assign) int forceFrameToMultiplication16;
@property (nonatomic,assign) int isGopInSec;
@property (nonatomic,assign) int isAvoidVideoShrinkFramesizeToSource;
@property (nonatomic,assign) int isAvoidVideoShrinkBitrateToSource;
@property (nonatomic,assign) int isVideoFrameRateForLowBrAppleHls;
@property (nonatomic,copy) NSString* multiStream;
@property (nonatomic,assign) double anamorphicPixels;
@property (nonatomic,assign) int isAvoidForcedKeyFrames;
@property (nonatomic,assign) int maxFrameRate;
@property (nonatomic,assign) int videoConstantBitrate;
@property (nonatomic,assign) int videoBitrateTolerance;
@property (nonatomic,copy) NSString* watermarkData;
@property (nonatomic,assign) int clipOffset;
@property (nonatomic,assign) int clipDuration;
- (KalturaFieldType)getTypeOfVideoCodec;
- (KalturaFieldType)getTypeOfVideoBitrate;
- (KalturaFieldType)getTypeOfAudioCodec;
- (KalturaFieldType)getTypeOfAudioBitrate;
- (KalturaFieldType)getTypeOfAudioChannels;
- (KalturaFieldType)getTypeOfAudioSampleRate;
- (KalturaFieldType)getTypeOfWidth;
- (KalturaFieldType)getTypeOfHeight;
- (KalturaFieldType)getTypeOfFrameRate;
- (KalturaFieldType)getTypeOfGopSize;
- (KalturaFieldType)getTypeOfConversionEngines;
- (KalturaFieldType)getTypeOfConversionEnginesExtraParams;
- (KalturaFieldType)getTypeOfTwoPass;
- (KalturaFieldType)getTypeOfDeinterlice;
- (KalturaFieldType)getTypeOfRotate;
- (KalturaFieldType)getTypeOfOperators;
- (KalturaFieldType)getTypeOfEngineVersion;
- (KalturaFieldType)getTypeOfFormat;
- (KalturaFieldType)getTypeOfAspectRatioProcessingMode;
- (KalturaFieldType)getTypeOfForceFrameToMultiplication16;
- (KalturaFieldType)getTypeOfIsGopInSec;
- (KalturaFieldType)getTypeOfIsAvoidVideoShrinkFramesizeToSource;
- (KalturaFieldType)getTypeOfIsAvoidVideoShrinkBitrateToSource;
- (KalturaFieldType)getTypeOfIsVideoFrameRateForLowBrAppleHls;
- (KalturaFieldType)getTypeOfMultiStream;
- (KalturaFieldType)getTypeOfAnamorphicPixels;
- (KalturaFieldType)getTypeOfIsAvoidForcedKeyFrames;
- (KalturaFieldType)getTypeOfMaxFrameRate;
- (KalturaFieldType)getTypeOfVideoConstantBitrate;
- (KalturaFieldType)getTypeOfVideoBitrateTolerance;
- (KalturaFieldType)getTypeOfWatermarkData;
- (KalturaFieldType)getTypeOfClipOffset;
- (KalturaFieldType)getTypeOfClipDuration;
- (void)setVideoBitrateFromString:(NSString*)aPropVal;
- (void)setAudioBitrateFromString:(NSString*)aPropVal;
- (void)setAudioChannelsFromString:(NSString*)aPropVal;
- (void)setAudioSampleRateFromString:(NSString*)aPropVal;
- (void)setWidthFromString:(NSString*)aPropVal;
- (void)setHeightFromString:(NSString*)aPropVal;
- (void)setFrameRateFromString:(NSString*)aPropVal;
- (void)setGopSizeFromString:(NSString*)aPropVal;
- (void)setTwoPassFromString:(NSString*)aPropVal;
- (void)setDeinterliceFromString:(NSString*)aPropVal;
- (void)setRotateFromString:(NSString*)aPropVal;
- (void)setEngineVersionFromString:(NSString*)aPropVal;
- (void)setAspectRatioProcessingModeFromString:(NSString*)aPropVal;
- (void)setForceFrameToMultiplication16FromString:(NSString*)aPropVal;
- (void)setIsGopInSecFromString:(NSString*)aPropVal;
- (void)setIsAvoidVideoShrinkFramesizeToSourceFromString:(NSString*)aPropVal;
- (void)setIsAvoidVideoShrinkBitrateToSourceFromString:(NSString*)aPropVal;
- (void)setIsVideoFrameRateForLowBrAppleHlsFromString:(NSString*)aPropVal;
- (void)setAnamorphicPixelsFromString:(NSString*)aPropVal;
- (void)setIsAvoidForcedKeyFramesFromString:(NSString*)aPropVal;
- (void)setMaxFrameRateFromString:(NSString*)aPropVal;
- (void)setVideoConstantBitrateFromString:(NSString*)aPropVal;
- (void)setVideoBitrateToleranceFromString:(NSString*)aPropVal;
- (void)setClipOffsetFromString:(NSString*)aPropVal;
- (void)setClipDurationFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorAssetWithParams : KalturaObjectBase
// The Flavor Asset (Can be null when there are params without asset)
@property (nonatomic,retain) KalturaFlavorAsset* flavorAsset;
// The Flavor Params
@property (nonatomic,retain) KalturaFlavorParams* flavorParams;
// The entry id
@property (nonatomic,copy) NSString* entryId;
- (KalturaFieldType)getTypeOfFlavorAsset;
- (NSString*)getObjectTypeOfFlavorAsset;
- (KalturaFieldType)getTypeOfFlavorParams;
- (NSString*)getObjectTypeOfFlavorParams;
- (KalturaFieldType)getTypeOfEntryId;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorParamsListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaFlavorParams elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorParamsOutput : KalturaFlavorParams
@property (nonatomic,assign) int flavorParamsId;
@property (nonatomic,copy) NSString* commandLinesStr;
@property (nonatomic,copy) NSString* flavorParamsVersion;
@property (nonatomic,copy) NSString* flavorAssetId;
@property (nonatomic,copy) NSString* flavorAssetVersion;
@property (nonatomic,assign) int readyBehavior;
- (KalturaFieldType)getTypeOfFlavorParamsId;
- (KalturaFieldType)getTypeOfCommandLinesStr;
- (KalturaFieldType)getTypeOfFlavorParamsVersion;
- (KalturaFieldType)getTypeOfFlavorAssetId;
- (KalturaFieldType)getTypeOfFlavorAssetVersion;
- (KalturaFieldType)getTypeOfReadyBehavior;
- (void)setFlavorParamsIdFromString:(NSString*)aPropVal;
- (void)setReadyBehaviorFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorParamsOutputListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaFlavorParamsOutput elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaObject : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
// An int representation to return an array of ints
@interface KalturaIntegerValue : KalturaValue
@property (nonatomic,assign) int value;
- (KalturaFieldType)getTypeOfValue;
- (void)setValueFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaJobData : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
// A representation of a live stream configuration
@interface KalturaLiveStreamConfiguration : KalturaObjectBase
@property (nonatomic,copy) NSString* protocol;	// enum KalturaPlaybackProtocol
@property (nonatomic,copy) NSString* url;
@property (nonatomic,copy) NSString* publishUrl;
@property (nonatomic,copy) NSString* backupUrl;
@property (nonatomic,copy) NSString* streamName;
- (KalturaFieldType)getTypeOfProtocol;
- (KalturaFieldType)getTypeOfUrl;
- (KalturaFieldType)getTypeOfPublishUrl;
- (KalturaFieldType)getTypeOfBackupUrl;
- (KalturaFieldType)getTypeOfStreamName;
@end

// @package Kaltura
// @subpackage Client
// Basic push-publish configuration for Kaltura live stream entry
@interface KalturaLiveStreamPushPublishConfiguration : KalturaObjectBase
@property (nonatomic,copy) NSString* publishUrl;
@property (nonatomic,copy) NSString* backupPublishUrl;
@property (nonatomic,copy) NSString* port;
- (KalturaFieldType)getTypeOfPublishUrl;
- (KalturaFieldType)getTypeOfBackupPublishUrl;
- (KalturaFieldType)getTypeOfPort;
@end

// @package Kaltura
// @subpackage Client
// A representation of a live stream recording entry configuration
@interface KalturaLiveEntryRecordingOptions : KalturaObjectBase
@property (nonatomic,assign) int shouldCopyEntitlement;	// enum KalturaNullableBoolean
- (KalturaFieldType)getTypeOfShouldCopyEntitlement;
- (void)setShouldCopyEntitlementFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveEntry : KalturaMediaEntry
// The message to be presented when the stream is offline
@property (nonatomic,copy) NSString* offlineMessage;
// Recording Status Enabled/Disabled
@property (nonatomic,assign) int recordStatus;	// enum KalturaRecordStatus, insertonly
// DVR Status Enabled/Disabled
@property (nonatomic,assign) int dvrStatus;	// enum KalturaDVRStatus, insertonly
// Window of time which the DVR allows for backwards scrubbing (in minutes)
@property (nonatomic,assign) int dvrWindow;	// insertonly
// Elapsed recording time (in msec) up to the point where the live stream was last stopped (unpublished).
@property (nonatomic,assign) int lastElapsedRecordingTime;
// Array of key value protocol->live stream url objects
@property (nonatomic,retain) NSMutableArray* liveStreamConfigurations;	// of KalturaLiveStreamConfiguration elements
// Recorded entry id
@property (nonatomic,copy) NSString* recordedEntryId;
// Flag denoting whether entry should be published by the media server
@property (nonatomic,assign) int pushPublishEnabled;	// enum KalturaLivePublishStatus
// Array of publish configurations
@property (nonatomic,retain) NSMutableArray* publishConfigurations;	// of KalturaLiveStreamPushPublishConfiguration elements
// The first time in which the entry was broadcast
@property (nonatomic,assign,readonly) int firstBroadcast;
// The Last time in which the entry was broadcast
@property (nonatomic,assign,readonly) int lastBroadcast;
// The time (unix timestamp in milliseconds) in which the entry broadcast started or 0 when the entry is off the air
@property (nonatomic,assign) double currentBroadcastStartTime;
@property (nonatomic,retain) KalturaLiveEntryRecordingOptions* recordingOptions;	// insertonly
- (KalturaFieldType)getTypeOfOfflineMessage;
- (KalturaFieldType)getTypeOfRecordStatus;
- (KalturaFieldType)getTypeOfDvrStatus;
- (KalturaFieldType)getTypeOfDvrWindow;
- (KalturaFieldType)getTypeOfLastElapsedRecordingTime;
- (KalturaFieldType)getTypeOfLiveStreamConfigurations;
- (NSString*)getObjectTypeOfLiveStreamConfigurations;
- (KalturaFieldType)getTypeOfRecordedEntryId;
- (KalturaFieldType)getTypeOfPushPublishEnabled;
- (KalturaFieldType)getTypeOfPublishConfigurations;
- (NSString*)getObjectTypeOfPublishConfigurations;
- (KalturaFieldType)getTypeOfFirstBroadcast;
- (KalturaFieldType)getTypeOfLastBroadcast;
- (KalturaFieldType)getTypeOfCurrentBroadcastStartTime;
- (KalturaFieldType)getTypeOfRecordingOptions;
- (NSString*)getObjectTypeOfRecordingOptions;
- (void)setRecordStatusFromString:(NSString*)aPropVal;
- (void)setDvrStatusFromString:(NSString*)aPropVal;
- (void)setDvrWindowFromString:(NSString*)aPropVal;
- (void)setLastElapsedRecordingTimeFromString:(NSString*)aPropVal;
- (void)setPushPublishEnabledFromString:(NSString*)aPropVal;
- (void)setFirstBroadcastFromString:(NSString*)aPropVal;
- (void)setLastBroadcastFromString:(NSString*)aPropVal;
- (void)setCurrentBroadcastStartTimeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannel : KalturaLiveEntry
// Playlist id to be played
@property (nonatomic,copy) NSString* playlistId;
// Indicates that the segments should be repeated for ever
@property (nonatomic,assign) int repeat;	// enum KalturaNullableBoolean
- (KalturaFieldType)getTypeOfPlaylistId;
- (KalturaFieldType)getTypeOfRepeat;
- (void)setRepeatFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannelListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaLiveChannel elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannelSegment : KalturaObjectBase
// Unique identifier
@property (nonatomic,copy,readonly) NSString* id;
@property (nonatomic,assign,readonly) int partnerId;
// Segment creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// Segment update date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int updatedAt;
// Segment name
@property (nonatomic,copy) NSString* name;
// Segment description
@property (nonatomic,copy) NSString* description;
// Segment tags
@property (nonatomic,copy) NSString* tags;
// Segment could be associated with the main stream, as additional stream or as overlay
@property (nonatomic,copy) NSString* type;	// enum KalturaLiveChannelSegmentType
@property (nonatomic,copy,readonly) NSString* status;	// enum KalturaLiveChannelSegmentStatus
// Live channel id
@property (nonatomic,copy) NSString* channelId;
// Entry id to be played
@property (nonatomic,copy) NSString* entryId;
// Segment start time trigger type
@property (nonatomic,copy) NSString* triggerType;	// enum KalturaLiveChannelSegmentTriggerType
// Live channel segment that the trigger relates to
@property (nonatomic,copy) NSString* triggerSegmentId;
// Segment play start time, in mili-seconds, according to trigger type
@property (nonatomic,assign) double startTime;
// Segment play duration time, in mili-seconds
@property (nonatomic,assign) double duration;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfChannelId;
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfTriggerType;
- (KalturaFieldType)getTypeOfTriggerSegmentId;
- (KalturaFieldType)getTypeOfStartTime;
- (KalturaFieldType)getTypeOfDuration;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
- (void)setStartTimeFromString:(NSString*)aPropVal;
- (void)setDurationFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannelSegmentListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaLiveChannelSegment elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveReportExportParams : KalturaObjectBase
@property (nonatomic,copy) NSString* entryIds;
@property (nonatomic,copy) NSString* recpientEmail;
// Time zone offset in minutes (between client to UTC)
@property (nonatomic,assign) int timeZoneOffset;
- (KalturaFieldType)getTypeOfEntryIds;
- (KalturaFieldType)getTypeOfRecpientEmail;
- (KalturaFieldType)getTypeOfTimeZoneOffset;
- (void)setTimeZoneOffsetFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveReportExportResponse : KalturaObjectBase
@property (nonatomic,assign) int referenceJobId;
@property (nonatomic,copy) NSString* reportEmail;
- (KalturaFieldType)getTypeOfReferenceJobId;
- (KalturaFieldType)getTypeOfReportEmail;
- (void)setReferenceJobIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveReportInputFilter : KalturaObjectBase
@property (nonatomic,copy) NSString* entryIds;
@property (nonatomic,assign) int fromTime;
@property (nonatomic,assign) int toTime;
@property (nonatomic,assign) int live;	// enum KalturaNullableBoolean
- (KalturaFieldType)getTypeOfEntryIds;
- (KalturaFieldType)getTypeOfFromTime;
- (KalturaFieldType)getTypeOfToTime;
- (KalturaFieldType)getTypeOfLive;
- (void)setFromTimeFromString:(NSString*)aPropVal;
- (void)setToTimeFromString:(NSString*)aPropVal;
- (void)setLiveFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStats : KalturaObjectBase
@property (nonatomic,assign) int audience;
@property (nonatomic,assign) double avgBitrate;
@property (nonatomic,assign) int bufferTime;
@property (nonatomic,assign) int plays;
@property (nonatomic,assign) int secondsViewed;
@property (nonatomic,assign) int startEvent;
@property (nonatomic,assign) int timestamp;
- (KalturaFieldType)getTypeOfAudience;
- (KalturaFieldType)getTypeOfAvgBitrate;
- (KalturaFieldType)getTypeOfBufferTime;
- (KalturaFieldType)getTypeOfPlays;
- (KalturaFieldType)getTypeOfSecondsViewed;
- (KalturaFieldType)getTypeOfStartEvent;
- (KalturaFieldType)getTypeOfTimestamp;
- (void)setAudienceFromString:(NSString*)aPropVal;
- (void)setAvgBitrateFromString:(NSString*)aPropVal;
- (void)setBufferTimeFromString:(NSString*)aPropVal;
- (void)setPlaysFromString:(NSString*)aPropVal;
- (void)setSecondsViewedFromString:(NSString*)aPropVal;
- (void)setStartEventFromString:(NSString*)aPropVal;
- (void)setTimestampFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStatsListResponse : KalturaObjectBase
@property (nonatomic,retain) KalturaLiveStats* objects;
@property (nonatomic,assign) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStreamBitrate : KalturaObjectBase
@property (nonatomic,assign) int bitrate;
@property (nonatomic,assign) int width;
@property (nonatomic,assign) int height;
@property (nonatomic,copy) NSString* tags;
- (KalturaFieldType)getTypeOfBitrate;
- (KalturaFieldType)getTypeOfWidth;
- (KalturaFieldType)getTypeOfHeight;
- (KalturaFieldType)getTypeOfTags;
- (void)setBitrateFromString:(NSString*)aPropVal;
- (void)setWidthFromString:(NSString*)aPropVal;
- (void)setHeightFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStreamEntry : KalturaLiveEntry
// The stream id as provided by the provider
@property (nonatomic,copy,readonly) NSString* streamRemoteId;
// The backup stream id as provided by the provider
@property (nonatomic,copy,readonly) NSString* streamRemoteBackupId;
// Array of supported bitrates
@property (nonatomic,retain) NSMutableArray* bitrates;	// of KalturaLiveStreamBitrate elements
@property (nonatomic,copy) NSString* primaryBroadcastingUrl;
@property (nonatomic,copy) NSString* secondaryBroadcastingUrl;
@property (nonatomic,copy) NSString* primaryRtspBroadcastingUrl;
@property (nonatomic,copy) NSString* secondaryRtspBroadcastingUrl;
@property (nonatomic,copy) NSString* streamName;
// The stream url
@property (nonatomic,copy) NSString* streamUrl;
// HLS URL - URL for live stream playback on mobile device
@property (nonatomic,copy) NSString* hlsStreamUrl;
// URL Manager to handle the live stream URL (for instance, add token)
@property (nonatomic,copy) NSString* urlManager;
// The broadcast primary ip
@property (nonatomic,copy) NSString* encodingIP1;
// The broadcast secondary ip
@property (nonatomic,copy) NSString* encodingIP2;
// The broadcast password
@property (nonatomic,copy) NSString* streamPassword;
// The broadcast username
@property (nonatomic,copy,readonly) NSString* streamUsername;
- (KalturaFieldType)getTypeOfStreamRemoteId;
- (KalturaFieldType)getTypeOfStreamRemoteBackupId;
- (KalturaFieldType)getTypeOfBitrates;
- (NSString*)getObjectTypeOfBitrates;
- (KalturaFieldType)getTypeOfPrimaryBroadcastingUrl;
- (KalturaFieldType)getTypeOfSecondaryBroadcastingUrl;
- (KalturaFieldType)getTypeOfPrimaryRtspBroadcastingUrl;
- (KalturaFieldType)getTypeOfSecondaryRtspBroadcastingUrl;
- (KalturaFieldType)getTypeOfStreamName;
- (KalturaFieldType)getTypeOfStreamUrl;
- (KalturaFieldType)getTypeOfHlsStreamUrl;
- (KalturaFieldType)getTypeOfUrlManager;
- (KalturaFieldType)getTypeOfEncodingIP1;
- (KalturaFieldType)getTypeOfEncodingIP2;
- (KalturaFieldType)getTypeOfStreamPassword;
- (KalturaFieldType)getTypeOfStreamUsername;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStreamListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaLiveStreamEntry elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBaseEntryBaseFilter : KalturaFilter
// This filter should be in use for retrieving only a specific entry (identified by its entryId).
@property (nonatomic,copy) NSString* idEqual;
// This filter should be in use for retrieving few specific entries (string should include comma separated list of entryId strings).
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,copy) NSString* idNotIn;
// This filter should be in use for retrieving specific entries. It should include only one string to search for in entry names (no wildcards, spaces are treated as part of the string).
@property (nonatomic,copy) NSString* nameLike;
// This filter should be in use for retrieving specific entries. It could include few (comma separated) strings for searching in entry names, while applying an OR logic to retrieve entries that contain at least one input string (no wildcards, spaces are treated as part of the string).
@property (nonatomic,copy) NSString* nameMultiLikeOr;
// This filter should be in use for retrieving specific entries. It could include few (comma separated) strings for searching in entry names, while applying an AND logic to retrieve entries that contain all input strings (no wildcards, spaces are treated as part of the string).
@property (nonatomic,copy) NSString* nameMultiLikeAnd;
// This filter should be in use for retrieving entries with a specific name.
@property (nonatomic,copy) NSString* nameEqual;
// This filter should be in use for retrieving only entries which were uploaded by/assigned to users of a specific Kaltura Partner (identified by Partner ID).
@property (nonatomic,assign) int partnerIdEqual;
// This filter should be in use for retrieving only entries within Kaltura network which were uploaded by/assigned to users of few Kaltura Partners  (string should include comma separated list of PartnerIDs)
@property (nonatomic,copy) NSString* partnerIdIn;
// This filter parameter should be in use for retrieving only entries, uploaded by/assigned to a specific user (identified by user Id).
@property (nonatomic,copy) NSString* userIdEqual;
@property (nonatomic,copy) NSString* userIdIn;
@property (nonatomic,copy) NSString* creatorIdEqual;
// This filter should be in use for retrieving specific entries. It should include only one string to search for in entry tags (no wildcards, spaces are treated as part of the string).
@property (nonatomic,copy) NSString* tagsLike;
// This filter should be in use for retrieving specific entries. It could include few (comma separated) strings for searching in entry tags, while applying an OR logic to retrieve entries that contain at least one input string (no wildcards, spaces are treated as part of the string).
@property (nonatomic,copy) NSString* tagsMultiLikeOr;
// This filter should be in use for retrieving specific entries. It could include few (comma separated) strings for searching in entry tags, while applying an AND logic to retrieve entries that contain all input strings (no wildcards, spaces are treated as part of the string).
@property (nonatomic,copy) NSString* tagsMultiLikeAnd;
// This filter should be in use for retrieving specific entries. It should include only one string to search for in entry tags set by an ADMIN user (no wildcards, spaces are treated as part of the string).
@property (nonatomic,copy) NSString* adminTagsLike;
// This filter should be in use for retrieving specific entries. It could include few (comma separated) strings for searching in entry tags, set by an ADMIN user, while applying an OR logic to retrieve entries that contain at least one input string (no wildcards, spaces are treated as part of the string).
@property (nonatomic,copy) NSString* adminTagsMultiLikeOr;
// This filter should be in use for retrieving specific entries. It could include few (comma separated) strings for searching in entry tags, set by an ADMIN user, while applying an AND logic to retrieve entries that contain all input strings (no wildcards, spaces are treated as part of the string).
@property (nonatomic,copy) NSString* adminTagsMultiLikeAnd;
@property (nonatomic,copy) NSString* categoriesMatchAnd;
// All entries within these categories or their child categories.
@property (nonatomic,copy) NSString* categoriesMatchOr;
@property (nonatomic,copy) NSString* categoriesNotContains;
@property (nonatomic,copy) NSString* categoriesIdsMatchAnd;
// All entries of the categories, excluding their child categories.
// 	 To include entries of the child categories, use categoryAncestorIdIn, or categoriesMatchOr.
@property (nonatomic,copy) NSString* categoriesIdsMatchOr;
@property (nonatomic,copy) NSString* categoriesIdsNotContains;
@property (nonatomic,assign) int categoriesIdsEmpty;	// enum KalturaNullableBoolean
// This filter should be in use for retrieving only entries, at a specific {
@property (nonatomic,copy) NSString* statusEqual;	// enum KalturaEntryStatus
// This filter should be in use for retrieving only entries, not at a specific {
@property (nonatomic,copy) NSString* statusNotEqual;	// enum KalturaEntryStatus
// This filter should be in use for retrieving only entries, at few specific {
@property (nonatomic,copy) NSString* statusIn;
// This filter should be in use for retrieving only entries, not at few specific {
@property (nonatomic,copy) NSString* statusNotIn;
@property (nonatomic,assign) int moderationStatusEqual;	// enum KalturaEntryModerationStatus
@property (nonatomic,assign) int moderationStatusNotEqual;	// enum KalturaEntryModerationStatus
@property (nonatomic,copy) NSString* moderationStatusIn;
@property (nonatomic,copy) NSString* moderationStatusNotIn;
@property (nonatomic,copy) NSString* typeEqual;	// enum KalturaEntryType
// This filter should be in use for retrieving entries of few {
@property (nonatomic,copy) NSString* typeIn;
// This filter parameter should be in use for retrieving only entries which were created at Kaltura system after a specific time/date (standard timestamp format).
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
// This filter parameter should be in use for retrieving only entries which were created at Kaltura system before a specific time/date (standard timestamp format).
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
@property (nonatomic,assign) int totalRankLessThanOrEqual;
@property (nonatomic,assign) int totalRankGreaterThanOrEqual;
@property (nonatomic,assign) int groupIdEqual;
// This filter should be in use for retrieving specific entries while search match the input string within all of the following metadata attributes: name, description, tags, adminTags.
@property (nonatomic,copy) NSString* searchTextMatchAnd;
// This filter should be in use for retrieving specific entries while search match the input string within at least one of the following metadata attributes: name, description, tags, adminTags.
@property (nonatomic,copy) NSString* searchTextMatchOr;
@property (nonatomic,assign) int accessControlIdEqual;
@property (nonatomic,copy) NSString* accessControlIdIn;
@property (nonatomic,assign) int startDateGreaterThanOrEqual;
@property (nonatomic,assign) int startDateLessThanOrEqual;
@property (nonatomic,assign) int startDateGreaterThanOrEqualOrNull;
@property (nonatomic,assign) int startDateLessThanOrEqualOrNull;
@property (nonatomic,assign) int endDateGreaterThanOrEqual;
@property (nonatomic,assign) int endDateLessThanOrEqual;
@property (nonatomic,assign) int endDateGreaterThanOrEqualOrNull;
@property (nonatomic,assign) int endDateLessThanOrEqualOrNull;
@property (nonatomic,copy) NSString* referenceIdEqual;
@property (nonatomic,copy) NSString* referenceIdIn;
@property (nonatomic,copy) NSString* replacingEntryIdEqual;
@property (nonatomic,copy) NSString* replacingEntryIdIn;
@property (nonatomic,copy) NSString* replacedEntryIdEqual;
@property (nonatomic,copy) NSString* replacedEntryIdIn;
@property (nonatomic,copy) NSString* replacementStatusEqual;	// enum KalturaEntryReplacementStatus
@property (nonatomic,copy) NSString* replacementStatusIn;
@property (nonatomic,assign) int partnerSortValueGreaterThanOrEqual;
@property (nonatomic,assign) int partnerSortValueLessThanOrEqual;
@property (nonatomic,copy) NSString* rootEntryIdEqual;
@property (nonatomic,copy) NSString* rootEntryIdIn;
@property (nonatomic,copy) NSString* parentEntryIdEqual;
@property (nonatomic,copy) NSString* tagsNameMultiLikeOr;
@property (nonatomic,copy) NSString* tagsAdminTagsMultiLikeOr;
@property (nonatomic,copy) NSString* tagsAdminTagsNameMultiLikeOr;
@property (nonatomic,copy) NSString* tagsNameMultiLikeAnd;
@property (nonatomic,copy) NSString* tagsAdminTagsMultiLikeAnd;
@property (nonatomic,copy) NSString* tagsAdminTagsNameMultiLikeAnd;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfIdNotIn;
- (KalturaFieldType)getTypeOfNameLike;
- (KalturaFieldType)getTypeOfNameMultiLikeOr;
- (KalturaFieldType)getTypeOfNameMultiLikeAnd;
- (KalturaFieldType)getTypeOfNameEqual;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdIn;
- (KalturaFieldType)getTypeOfUserIdEqual;
- (KalturaFieldType)getTypeOfUserIdIn;
- (KalturaFieldType)getTypeOfCreatorIdEqual;
- (KalturaFieldType)getTypeOfTagsLike;
- (KalturaFieldType)getTypeOfTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfAdminTagsLike;
- (KalturaFieldType)getTypeOfAdminTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfAdminTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfCategoriesMatchAnd;
- (KalturaFieldType)getTypeOfCategoriesMatchOr;
- (KalturaFieldType)getTypeOfCategoriesNotContains;
- (KalturaFieldType)getTypeOfCategoriesIdsMatchAnd;
- (KalturaFieldType)getTypeOfCategoriesIdsMatchOr;
- (KalturaFieldType)getTypeOfCategoriesIdsNotContains;
- (KalturaFieldType)getTypeOfCategoriesIdsEmpty;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusNotEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfStatusNotIn;
- (KalturaFieldType)getTypeOfModerationStatusEqual;
- (KalturaFieldType)getTypeOfModerationStatusNotEqual;
- (KalturaFieldType)getTypeOfModerationStatusIn;
- (KalturaFieldType)getTypeOfModerationStatusNotIn;
- (KalturaFieldType)getTypeOfTypeEqual;
- (KalturaFieldType)getTypeOfTypeIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfTotalRankLessThanOrEqual;
- (KalturaFieldType)getTypeOfTotalRankGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfGroupIdEqual;
- (KalturaFieldType)getTypeOfSearchTextMatchAnd;
- (KalturaFieldType)getTypeOfSearchTextMatchOr;
- (KalturaFieldType)getTypeOfAccessControlIdEqual;
- (KalturaFieldType)getTypeOfAccessControlIdIn;
- (KalturaFieldType)getTypeOfStartDateGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfStartDateLessThanOrEqual;
- (KalturaFieldType)getTypeOfStartDateGreaterThanOrEqualOrNull;
- (KalturaFieldType)getTypeOfStartDateLessThanOrEqualOrNull;
- (KalturaFieldType)getTypeOfEndDateGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfEndDateLessThanOrEqual;
- (KalturaFieldType)getTypeOfEndDateGreaterThanOrEqualOrNull;
- (KalturaFieldType)getTypeOfEndDateLessThanOrEqualOrNull;
- (KalturaFieldType)getTypeOfReferenceIdEqual;
- (KalturaFieldType)getTypeOfReferenceIdIn;
- (KalturaFieldType)getTypeOfReplacingEntryIdEqual;
- (KalturaFieldType)getTypeOfReplacingEntryIdIn;
- (KalturaFieldType)getTypeOfReplacedEntryIdEqual;
- (KalturaFieldType)getTypeOfReplacedEntryIdIn;
- (KalturaFieldType)getTypeOfReplacementStatusEqual;
- (KalturaFieldType)getTypeOfReplacementStatusIn;
- (KalturaFieldType)getTypeOfPartnerSortValueGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfPartnerSortValueLessThanOrEqual;
- (KalturaFieldType)getTypeOfRootEntryIdEqual;
- (KalturaFieldType)getTypeOfRootEntryIdIn;
- (KalturaFieldType)getTypeOfParentEntryIdEqual;
- (KalturaFieldType)getTypeOfTagsNameMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsAdminTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsAdminTagsNameMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsNameMultiLikeAnd;
- (KalturaFieldType)getTypeOfTagsAdminTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfTagsAdminTagsNameMultiLikeAnd;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setCategoriesIdsEmptyFromString:(NSString*)aPropVal;
- (void)setModerationStatusEqualFromString:(NSString*)aPropVal;
- (void)setModerationStatusNotEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setTotalRankLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setTotalRankGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setGroupIdEqualFromString:(NSString*)aPropVal;
- (void)setAccessControlIdEqualFromString:(NSString*)aPropVal;
- (void)setStartDateGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setStartDateLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setStartDateGreaterThanOrEqualOrNullFromString:(NSString*)aPropVal;
- (void)setStartDateLessThanOrEqualOrNullFromString:(NSString*)aPropVal;
- (void)setEndDateGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setEndDateLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setEndDateGreaterThanOrEqualOrNullFromString:(NSString*)aPropVal;
- (void)setEndDateLessThanOrEqualOrNullFromString:(NSString*)aPropVal;
- (void)setPartnerSortValueGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setPartnerSortValueLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBaseEntryFilter : KalturaBaseEntryBaseFilter
@property (nonatomic,copy) NSString* freeText;
@property (nonatomic,assign) int isRoot;	// enum KalturaNullableBoolean
@property (nonatomic,copy) NSString* categoriesFullNameIn;
// All entries within this categoy or in child categories
@property (nonatomic,copy) NSString* categoryAncestorIdIn;
// The id of the original entry
@property (nonatomic,copy) NSString* redirectFromEntryId;
- (KalturaFieldType)getTypeOfFreeText;
- (KalturaFieldType)getTypeOfIsRoot;
- (KalturaFieldType)getTypeOfCategoriesFullNameIn;
- (KalturaFieldType)getTypeOfCategoryAncestorIdIn;
- (KalturaFieldType)getTypeOfRedirectFromEntryId;
- (void)setIsRootFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayableEntryBaseFilter : KalturaBaseEntryFilter
@property (nonatomic,assign) int lastPlayedAtGreaterThanOrEqual;
@property (nonatomic,assign) int lastPlayedAtLessThanOrEqual;
@property (nonatomic,assign) int durationLessThan;
@property (nonatomic,assign) int durationGreaterThan;
@property (nonatomic,assign) int durationLessThanOrEqual;
@property (nonatomic,assign) int durationGreaterThanOrEqual;
@property (nonatomic,copy) NSString* durationTypeMatchOr;
- (KalturaFieldType)getTypeOfLastPlayedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfLastPlayedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfDurationLessThan;
- (KalturaFieldType)getTypeOfDurationGreaterThan;
- (KalturaFieldType)getTypeOfDurationLessThanOrEqual;
- (KalturaFieldType)getTypeOfDurationGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfDurationTypeMatchOr;
- (void)setLastPlayedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setLastPlayedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setDurationLessThanFromString:(NSString*)aPropVal;
- (void)setDurationGreaterThanFromString:(NSString*)aPropVal;
- (void)setDurationLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setDurationGreaterThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayableEntryFilter : KalturaPlayableEntryBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaEntryBaseFilter : KalturaPlayableEntryFilter
@property (nonatomic,assign) int mediaTypeEqual;	// enum KalturaMediaType
@property (nonatomic,copy) NSString* mediaTypeIn;
@property (nonatomic,copy) NSString* sourceTypeEqual;	// enum KalturaSourceType
@property (nonatomic,copy) NSString* sourceTypeNotEqual;	// enum KalturaSourceType
@property (nonatomic,copy) NSString* sourceTypeIn;
@property (nonatomic,copy) NSString* sourceTypeNotIn;
@property (nonatomic,assign) int mediaDateGreaterThanOrEqual;
@property (nonatomic,assign) int mediaDateLessThanOrEqual;
@property (nonatomic,copy) NSString* flavorParamsIdsMatchOr;
@property (nonatomic,copy) NSString* flavorParamsIdsMatchAnd;
- (KalturaFieldType)getTypeOfMediaTypeEqual;
- (KalturaFieldType)getTypeOfMediaTypeIn;
- (KalturaFieldType)getTypeOfSourceTypeEqual;
- (KalturaFieldType)getTypeOfSourceTypeNotEqual;
- (KalturaFieldType)getTypeOfSourceTypeIn;
- (KalturaFieldType)getTypeOfSourceTypeNotIn;
- (KalturaFieldType)getTypeOfMediaDateGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfMediaDateLessThanOrEqual;
- (KalturaFieldType)getTypeOfFlavorParamsIdsMatchOr;
- (KalturaFieldType)getTypeOfFlavorParamsIdsMatchAnd;
- (void)setMediaTypeEqualFromString:(NSString*)aPropVal;
- (void)setMediaDateGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setMediaDateLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaEntryFilter : KalturaMediaEntryBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaEntryFilterForPlaylist : KalturaMediaEntryFilter
@property (nonatomic,assign) int limit;
- (KalturaFieldType)getTypeOfLimit;
- (void)setLimitFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaInfo : KalturaObjectBase
// The id of the media info
@property (nonatomic,assign,readonly) int id;
// The id of the related flavor asset
@property (nonatomic,copy) NSString* flavorAssetId;
// The file size
@property (nonatomic,assign) int fileSize;
// The container format
@property (nonatomic,copy) NSString* containerFormat;
// The container id
@property (nonatomic,copy) NSString* containerId;
// The container profile
@property (nonatomic,copy) NSString* containerProfile;
// The container duration
@property (nonatomic,assign) int containerDuration;
// The container bit rate
@property (nonatomic,assign) int containerBitRate;
// The video format
@property (nonatomic,copy) NSString* videoFormat;
// The video codec id
@property (nonatomic,copy) NSString* videoCodecId;
// The video duration
@property (nonatomic,assign) int videoDuration;
// The video bit rate
@property (nonatomic,assign) int videoBitRate;
// The video bit rate mode
@property (nonatomic,assign) int videoBitRateMode;	// enum KalturaBitRateMode
// The video width
@property (nonatomic,assign) int videoWidth;
// The video height
@property (nonatomic,assign) int videoHeight;
// The video frame rate
@property (nonatomic,assign) double videoFrameRate;
// The video display aspect ratio (dar)
@property (nonatomic,assign) double videoDar;
@property (nonatomic,assign) int videoRotation;
// The audio format
@property (nonatomic,copy) NSString* audioFormat;
// The audio codec id
@property (nonatomic,copy) NSString* audioCodecId;
// The audio duration
@property (nonatomic,assign) int audioDuration;
// The audio bit rate
@property (nonatomic,assign) int audioBitRate;
// The audio bit rate mode
@property (nonatomic,assign) int audioBitRateMode;	// enum KalturaBitRateMode
// The number of audio channels
@property (nonatomic,assign) int audioChannels;
// The audio sampling rate
@property (nonatomic,assign) int audioSamplingRate;
// The audio resolution
@property (nonatomic,assign) int audioResolution;
// The writing library
@property (nonatomic,copy) NSString* writingLib;
// The data as returned by the mediainfo command line
@property (nonatomic,copy) NSString* rawData;
@property (nonatomic,copy) NSString* multiStreamInfo;
@property (nonatomic,assign) int scanType;
@property (nonatomic,copy) NSString* multiStream;
@property (nonatomic,assign) int isFastStart;
@property (nonatomic,copy) NSString* contentStreams;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfFlavorAssetId;
- (KalturaFieldType)getTypeOfFileSize;
- (KalturaFieldType)getTypeOfContainerFormat;
- (KalturaFieldType)getTypeOfContainerId;
- (KalturaFieldType)getTypeOfContainerProfile;
- (KalturaFieldType)getTypeOfContainerDuration;
- (KalturaFieldType)getTypeOfContainerBitRate;
- (KalturaFieldType)getTypeOfVideoFormat;
- (KalturaFieldType)getTypeOfVideoCodecId;
- (KalturaFieldType)getTypeOfVideoDuration;
- (KalturaFieldType)getTypeOfVideoBitRate;
- (KalturaFieldType)getTypeOfVideoBitRateMode;
- (KalturaFieldType)getTypeOfVideoWidth;
- (KalturaFieldType)getTypeOfVideoHeight;
- (KalturaFieldType)getTypeOfVideoFrameRate;
- (KalturaFieldType)getTypeOfVideoDar;
- (KalturaFieldType)getTypeOfVideoRotation;
- (KalturaFieldType)getTypeOfAudioFormat;
- (KalturaFieldType)getTypeOfAudioCodecId;
- (KalturaFieldType)getTypeOfAudioDuration;
- (KalturaFieldType)getTypeOfAudioBitRate;
- (KalturaFieldType)getTypeOfAudioBitRateMode;
- (KalturaFieldType)getTypeOfAudioChannels;
- (KalturaFieldType)getTypeOfAudioSamplingRate;
- (KalturaFieldType)getTypeOfAudioResolution;
- (KalturaFieldType)getTypeOfWritingLib;
- (KalturaFieldType)getTypeOfRawData;
- (KalturaFieldType)getTypeOfMultiStreamInfo;
- (KalturaFieldType)getTypeOfScanType;
- (KalturaFieldType)getTypeOfMultiStream;
- (KalturaFieldType)getTypeOfIsFastStart;
- (KalturaFieldType)getTypeOfContentStreams;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setFileSizeFromString:(NSString*)aPropVal;
- (void)setContainerDurationFromString:(NSString*)aPropVal;
- (void)setContainerBitRateFromString:(NSString*)aPropVal;
- (void)setVideoDurationFromString:(NSString*)aPropVal;
- (void)setVideoBitRateFromString:(NSString*)aPropVal;
- (void)setVideoBitRateModeFromString:(NSString*)aPropVal;
- (void)setVideoWidthFromString:(NSString*)aPropVal;
- (void)setVideoHeightFromString:(NSString*)aPropVal;
- (void)setVideoFrameRateFromString:(NSString*)aPropVal;
- (void)setVideoDarFromString:(NSString*)aPropVal;
- (void)setVideoRotationFromString:(NSString*)aPropVal;
- (void)setAudioDurationFromString:(NSString*)aPropVal;
- (void)setAudioBitRateFromString:(NSString*)aPropVal;
- (void)setAudioBitRateModeFromString:(NSString*)aPropVal;
- (void)setAudioChannelsFromString:(NSString*)aPropVal;
- (void)setAudioSamplingRateFromString:(NSString*)aPropVal;
- (void)setAudioResolutionFromString:(NSString*)aPropVal;
- (void)setScanTypeFromString:(NSString*)aPropVal;
- (void)setIsFastStartFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaInfoListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaMediaInfo elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaMediaEntry elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaServer : KalturaObjectBase
// Unique identifier
@property (nonatomic,assign,readonly) int id;
// Server data center id
@property (nonatomic,assign,readonly) int dc;
// Server host name
@property (nonatomic,copy,readonly) NSString* hostname;
// Server first registration date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// Server last update date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int updatedAt;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfDc;
- (KalturaFieldType)getTypeOfHostname;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setDcFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaServerStatus : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMixEntry : KalturaPlayableEntry
// Indicates whether the user has submited a real thumbnail to the mix (Not the one that was generated automaticaly)
@property (nonatomic,assign,readonly) KALTURA_BOOL hasRealThumbnail;
// The editor type used to edit the metadata
@property (nonatomic,assign) int editorType;	// enum KalturaEditorType
// The xml data of the mix
@property (nonatomic,copy) NSString* dataContent;
- (KalturaFieldType)getTypeOfHasRealThumbnail;
- (KalturaFieldType)getTypeOfEditorType;
- (KalturaFieldType)getTypeOfDataContent;
- (void)setHasRealThumbnailFromString:(NSString*)aPropVal;
- (void)setEditorTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMixListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaMixEntry elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaModerationFlag : KalturaObjectBase
// Moderation flag id
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,assign,readonly) int partnerId;
// The user id that added the moderation flag
@property (nonatomic,copy,readonly) NSString* userId;
// The type of the moderation flag (entry or user)
@property (nonatomic,copy,readonly) NSString* moderationObjectType;	// enum KalturaModerationObjectType
// If moderation flag is set for entry, this is the flagged entry id
@property (nonatomic,copy) NSString* flaggedEntryId;
// If moderation flag is set for user, this is the flagged user id
@property (nonatomic,copy) NSString* flaggedUserId;
// The moderation flag status
@property (nonatomic,copy,readonly) NSString* status;	// enum KalturaModerationFlagStatus
// The comment that was added to the flag
@property (nonatomic,copy) NSString* comments;
@property (nonatomic,assign) int flagType;	// enum KalturaModerationFlagType
@property (nonatomic,assign,readonly) int createdAt;
@property (nonatomic,assign,readonly) int updatedAt;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfModerationObjectType;
- (KalturaFieldType)getTypeOfFlaggedEntryId;
- (KalturaFieldType)getTypeOfFlaggedUserId;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfComments;
- (KalturaFieldType)getTypeOfFlagType;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setFlagTypeFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaModerationFlagListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaModerationFlag elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaObjectListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaObject elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayerDeliveryType : KalturaObjectBase
@property (nonatomic,copy) NSString* id;
@property (nonatomic,copy) NSString* label;
@property (nonatomic,retain) NSMutableArray* flashvars;	// of KalturaKeyValue elements
@property (nonatomic,copy) NSString* minVersion;
@property (nonatomic,assign) KALTURA_BOOL enabledByDefault;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfLabel;
- (KalturaFieldType)getTypeOfFlashvars;
- (NSString*)getObjectTypeOfFlashvars;
- (KalturaFieldType)getTypeOfMinVersion;
- (KalturaFieldType)getTypeOfEnabledByDefault;
- (void)setEnabledByDefaultFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayerEmbedCodeType : KalturaObjectBase
@property (nonatomic,copy) NSString* id;
@property (nonatomic,copy) NSString* label;
@property (nonatomic,assign) KALTURA_BOOL entryOnly;
@property (nonatomic,copy) NSString* minVersion;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfLabel;
- (KalturaFieldType)getTypeOfEntryOnly;
- (KalturaFieldType)getTypeOfMinVersion;
- (void)setEntryOnlyFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPartner : KalturaObjectBase
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,copy) NSString* name;
@property (nonatomic,copy) NSString* website;
@property (nonatomic,copy) NSString* notificationUrl;
@property (nonatomic,assign) int appearInSearch;
@property (nonatomic,assign,readonly) int createdAt;
// deprecated - lastName and firstName replaces this field
@property (nonatomic,copy) NSString* adminName;
@property (nonatomic,copy) NSString* adminEmail;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,assign) int commercialUse;	// enum KalturaCommercialUseType
@property (nonatomic,copy) NSString* landingPage;
@property (nonatomic,copy) NSString* userLandingPage;
@property (nonatomic,copy) NSString* contentCategories;
@property (nonatomic,assign) int type;	// enum KalturaPartnerType
@property (nonatomic,copy) NSString* phone;
@property (nonatomic,copy) NSString* describeYourself;
@property (nonatomic,assign) KALTURA_BOOL adultContent;
@property (nonatomic,copy) NSString* defConversionProfileType;
@property (nonatomic,assign) int notify;
@property (nonatomic,assign,readonly) int status;	// enum KalturaPartnerStatus
@property (nonatomic,assign) int allowQuickEdit;
@property (nonatomic,assign) int mergeEntryLists;
@property (nonatomic,copy) NSString* notificationsConfig;
@property (nonatomic,assign) int maxUploadSize;
@property (nonatomic,assign,readonly) int partnerPackage;
@property (nonatomic,copy,readonly) NSString* secret;
@property (nonatomic,copy,readonly) NSString* adminSecret;
@property (nonatomic,copy,readonly) NSString* cmsPassword;
@property (nonatomic,assign) int allowMultiNotification;
@property (nonatomic,assign,readonly) int adminLoginUsersQuota;
@property (nonatomic,copy) NSString* adminUserId;
// firstName and lastName replace the old (deprecated) adminName
@property (nonatomic,copy) NSString* firstName;
// lastName and firstName replace the old (deprecated) adminName
@property (nonatomic,copy) NSString* lastName;
// country code (2char) - this field is optional
@property (nonatomic,copy) NSString* country;
// state code (2char) - this field is optional
@property (nonatomic,copy) NSString* state;
@property (nonatomic,retain) NSMutableArray* additionalParams;	// of KalturaKeyValue elements, insertonly
@property (nonatomic,assign,readonly) int publishersQuota;
@property (nonatomic,assign,readonly) int partnerGroupType;	// enum KalturaPartnerGroupType
@property (nonatomic,assign,readonly) KALTURA_BOOL defaultEntitlementEnforcement;
@property (nonatomic,copy,readonly) NSString* defaultDeliveryType;
@property (nonatomic,copy,readonly) NSString* defaultEmbedCodeType;
@property (nonatomic,retain,readonly) NSMutableArray* deliveryTypes;	// of KalturaPlayerDeliveryType elements
@property (nonatomic,retain,readonly) NSMutableArray* embedCodeTypes;	// of KalturaPlayerEmbedCodeType elements
@property (nonatomic,assign,readonly) int templatePartnerId;
@property (nonatomic,assign,readonly) KALTURA_BOOL ignoreSeoLinks;
@property (nonatomic,copy,readonly) NSString* host;
@property (nonatomic,copy,readonly) NSString* cdnHost;
@property (nonatomic,assign,readonly) KALTURA_BOOL isFirstLogin;
@property (nonatomic,copy,readonly) NSString* logoutUrl;
@property (nonatomic,assign,readonly) int partnerParentId;
@property (nonatomic,copy,readonly) NSString* crmId;
@property (nonatomic,copy) NSString* referenceId;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfWebsite;
- (KalturaFieldType)getTypeOfNotificationUrl;
- (KalturaFieldType)getTypeOfAppearInSearch;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfAdminName;
- (KalturaFieldType)getTypeOfAdminEmail;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfCommercialUse;
- (KalturaFieldType)getTypeOfLandingPage;
- (KalturaFieldType)getTypeOfUserLandingPage;
- (KalturaFieldType)getTypeOfContentCategories;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfPhone;
- (KalturaFieldType)getTypeOfDescribeYourself;
- (KalturaFieldType)getTypeOfAdultContent;
- (KalturaFieldType)getTypeOfDefConversionProfileType;
- (KalturaFieldType)getTypeOfNotify;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfAllowQuickEdit;
- (KalturaFieldType)getTypeOfMergeEntryLists;
- (KalturaFieldType)getTypeOfNotificationsConfig;
- (KalturaFieldType)getTypeOfMaxUploadSize;
- (KalturaFieldType)getTypeOfPartnerPackage;
- (KalturaFieldType)getTypeOfSecret;
- (KalturaFieldType)getTypeOfAdminSecret;
- (KalturaFieldType)getTypeOfCmsPassword;
- (KalturaFieldType)getTypeOfAllowMultiNotification;
- (KalturaFieldType)getTypeOfAdminLoginUsersQuota;
- (KalturaFieldType)getTypeOfAdminUserId;
- (KalturaFieldType)getTypeOfFirstName;
- (KalturaFieldType)getTypeOfLastName;
- (KalturaFieldType)getTypeOfCountry;
- (KalturaFieldType)getTypeOfState;
- (KalturaFieldType)getTypeOfAdditionalParams;
- (NSString*)getObjectTypeOfAdditionalParams;
- (KalturaFieldType)getTypeOfPublishersQuota;
- (KalturaFieldType)getTypeOfPartnerGroupType;
- (KalturaFieldType)getTypeOfDefaultEntitlementEnforcement;
- (KalturaFieldType)getTypeOfDefaultDeliveryType;
- (KalturaFieldType)getTypeOfDefaultEmbedCodeType;
- (KalturaFieldType)getTypeOfDeliveryTypes;
- (NSString*)getObjectTypeOfDeliveryTypes;
- (KalturaFieldType)getTypeOfEmbedCodeTypes;
- (NSString*)getObjectTypeOfEmbedCodeTypes;
- (KalturaFieldType)getTypeOfTemplatePartnerId;
- (KalturaFieldType)getTypeOfIgnoreSeoLinks;
- (KalturaFieldType)getTypeOfHost;
- (KalturaFieldType)getTypeOfCdnHost;
- (KalturaFieldType)getTypeOfIsFirstLogin;
- (KalturaFieldType)getTypeOfLogoutUrl;
- (KalturaFieldType)getTypeOfPartnerParentId;
- (KalturaFieldType)getTypeOfCrmId;
- (KalturaFieldType)getTypeOfReferenceId;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setAppearInSearchFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setCommercialUseFromString:(NSString*)aPropVal;
- (void)setTypeFromString:(NSString*)aPropVal;
- (void)setAdultContentFromString:(NSString*)aPropVal;
- (void)setNotifyFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setAllowQuickEditFromString:(NSString*)aPropVal;
- (void)setMergeEntryListsFromString:(NSString*)aPropVal;
- (void)setMaxUploadSizeFromString:(NSString*)aPropVal;
- (void)setPartnerPackageFromString:(NSString*)aPropVal;
- (void)setAllowMultiNotificationFromString:(NSString*)aPropVal;
- (void)setAdminLoginUsersQuotaFromString:(NSString*)aPropVal;
- (void)setPublishersQuotaFromString:(NSString*)aPropVal;
- (void)setPartnerGroupTypeFromString:(NSString*)aPropVal;
- (void)setDefaultEntitlementEnforcementFromString:(NSString*)aPropVal;
- (void)setTemplatePartnerIdFromString:(NSString*)aPropVal;
- (void)setIgnoreSeoLinksFromString:(NSString*)aPropVal;
- (void)setIsFirstLoginFromString:(NSString*)aPropVal;
- (void)setPartnerParentIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPartnerListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaPartner elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPartnerStatistics : KalturaObjectBase
// Package total allowed bandwidth and storage
@property (nonatomic,assign,readonly) int packageBandwidthAndStorage;
// Partner total hosting in GB on the disk
@property (nonatomic,assign,readonly) double hosting;
// Partner total bandwidth in GB
@property (nonatomic,assign,readonly) double bandwidth;
// total usage in GB - including bandwidth and storage
@property (nonatomic,assign,readonly) int usage;
// Percent of usage out of partner's package. if usage is 5GB and package is 10GB, this value will be 50
@property (nonatomic,assign,readonly) double usagePercent;
// date when partner reached the limit of his package (timestamp)
@property (nonatomic,assign,readonly) int reachedLimitDate;
- (KalturaFieldType)getTypeOfPackageBandwidthAndStorage;
- (KalturaFieldType)getTypeOfHosting;
- (KalturaFieldType)getTypeOfBandwidth;
- (KalturaFieldType)getTypeOfUsage;
- (KalturaFieldType)getTypeOfUsagePercent;
- (KalturaFieldType)getTypeOfReachedLimitDate;
- (void)setPackageBandwidthAndStorageFromString:(NSString*)aPropVal;
- (void)setHostingFromString:(NSString*)aPropVal;
- (void)setBandwidthFromString:(NSString*)aPropVal;
- (void)setUsageFromString:(NSString*)aPropVal;
- (void)setUsagePercentFromString:(NSString*)aPropVal;
- (void)setReachedLimitDateFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPartnerUsage : KalturaObjectBase
// Partner total hosting in GB on the disk
@property (nonatomic,assign,readonly) double hostingGB;
// percent of usage out of partner's package. if usageGB is 5 and package is 10GB, this value will be 50
@property (nonatomic,assign,readonly) double Percent;
// package total BW - actually this is usage, which represents BW+storage
@property (nonatomic,assign,readonly) int packageBW;
// total usage in GB - including bandwidth and storage
@property (nonatomic,assign,readonly) double usageGB;
// date when partner reached the limit of his package (timestamp)
@property (nonatomic,assign,readonly) int reachedLimitDate;
// a semi-colon separated list of comma-separated key-values to represent a usage graph.
// 	 keys could be 1-12 for a year view (1,1.2;2,1.1;3,0.9;...;12,1.4;)
// 	 keys could be 1-[28,29,30,31] depending on the requested month, for a daily view in a given month (1,0.4;2,0.2;...;31,0.1;)
@property (nonatomic,copy,readonly) NSString* usageGraph;
- (KalturaFieldType)getTypeOfHostingGB;
- (KalturaFieldType)getTypeOfPercent;
- (KalturaFieldType)getTypeOfPackageBW;
- (KalturaFieldType)getTypeOfUsageGB;
- (KalturaFieldType)getTypeOfReachedLimitDate;
- (KalturaFieldType)getTypeOfUsageGraph;
- (void)setHostingGBFromString:(NSString*)aPropVal;
- (void)setPercentFromString:(NSString*)aPropVal;
- (void)setPackageBWFromString:(NSString*)aPropVal;
- (void)setUsageGBFromString:(NSString*)aPropVal;
- (void)setReachedLimitDateFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermission : KalturaObjectBase
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,assign,readonly) int type;	// enum KalturaPermissionType
@property (nonatomic,copy) NSString* name;
@property (nonatomic,copy) NSString* friendlyName;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,assign) int status;	// enum KalturaPermissionStatus
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,copy) NSString* dependsOnPermissionNames;
@property (nonatomic,copy) NSString* tags;
@property (nonatomic,copy) NSString* permissionItemsIds;
@property (nonatomic,assign,readonly) int createdAt;
@property (nonatomic,assign,readonly) int updatedAt;
@property (nonatomic,copy) NSString* partnerGroup;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfFriendlyName;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfDependsOnPermissionNames;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfPermissionItemsIds;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfPartnerGroup;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setTypeFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionItem : KalturaObjectBase
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,copy,readonly) NSString* type;	// enum KalturaPermissionItemType
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,copy) NSString* tags;
@property (nonatomic,assign,readonly) int createdAt;
@property (nonatomic,assign,readonly) int updatedAt;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionItemListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaPermissionItem elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaPermission elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlaylist : KalturaBaseEntry
// Content of the playlist - 
// 	 XML if the playlistType is dynamic 
// 	 text if the playlistType is static 
// 	 url if the playlistType is mRss
@property (nonatomic,copy) NSString* playlistContent;
@property (nonatomic,retain) NSMutableArray* filters;	// of KalturaMediaEntryFilterForPlaylist elements
// Maximum count of results to be returned in playlist execution
@property (nonatomic,assign) int totalResults;
// Type of playlist
@property (nonatomic,assign) int playlistType;	// enum KalturaPlaylistType
// Number of plays
@property (nonatomic,assign,readonly) int plays;
// Number of views
@property (nonatomic,assign,readonly) int views;
// The duration in seconds
@property (nonatomic,assign,readonly) int duration;
// The url for this playlist
@property (nonatomic,copy,readonly) NSString* executeUrl;
- (KalturaFieldType)getTypeOfPlaylistContent;
- (KalturaFieldType)getTypeOfFilters;
- (NSString*)getObjectTypeOfFilters;
- (KalturaFieldType)getTypeOfTotalResults;
- (KalturaFieldType)getTypeOfPlaylistType;
- (KalturaFieldType)getTypeOfPlays;
- (KalturaFieldType)getTypeOfViews;
- (KalturaFieldType)getTypeOfDuration;
- (KalturaFieldType)getTypeOfExecuteUrl;
- (void)setTotalResultsFromString:(NSString*)aPropVal;
- (void)setPlaylistTypeFromString:(NSString*)aPropVal;
- (void)setPlaysFromString:(NSString*)aPropVal;
- (void)setViewsFromString:(NSString*)aPropVal;
- (void)setDurationFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlaylistListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaPlaylist elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaRemotePath : KalturaObjectBase
@property (nonatomic,assign,readonly) int storageProfileId;
@property (nonatomic,copy,readonly) NSString* uri;
- (KalturaFieldType)getTypeOfStorageProfileId;
- (KalturaFieldType)getTypeOfUri;
- (void)setStorageProfileIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaRemotePathListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaRemotePath elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// Used to ingest media that is available on remote server and accessible using the supplied URL, media file will be downloaded using import job in order to make the asset ready.
@interface KalturaUrlResource : KalturaContentResource
// Remote URL, FTP, HTTP or HTTPS
@property (nonatomic,copy) NSString* url;
// Force Import Job
@property (nonatomic,assign) KALTURA_BOOL forceAsyncDownload;
- (KalturaFieldType)getTypeOfUrl;
- (KalturaFieldType)getTypeOfForceAsyncDownload;
- (void)setForceAsyncDownloadFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// Used to ingest media that is available on remote server and accessible using the supplied URL, the media file won't be downloaded but a file sync object of URL type will point to the media URL.
@interface KalturaRemoteStorageResource : KalturaUrlResource
// ID of storage profile to be associated with the created file sync, used for file serving URL composing.
@property (nonatomic,assign) int storageProfileId;
- (KalturaFieldType)getTypeOfStorageProfileId;
- (void)setStorageProfileIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportBaseTotal : KalturaObjectBase
@property (nonatomic,copy) NSString* id;
@property (nonatomic,copy) NSString* data;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfData;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportGraph : KalturaObjectBase
@property (nonatomic,copy) NSString* id;
@property (nonatomic,copy) NSString* data;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfData;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportInputBaseFilter : KalturaObjectBase
// Start date as Unix timestamp (In seconds)
@property (nonatomic,assign) int fromDate;
// End date as Unix timestamp (In seconds)
@property (nonatomic,assign) int toDate;
// Start day as string (YYYYMMDD)
@property (nonatomic,copy) NSString* fromDay;
// End date as string (YYYYMMDD)
@property (nonatomic,copy) NSString* toDay;
- (KalturaFieldType)getTypeOfFromDate;
- (KalturaFieldType)getTypeOfToDate;
- (KalturaFieldType)getTypeOfFromDay;
- (KalturaFieldType)getTypeOfToDay;
- (void)setFromDateFromString:(NSString*)aPropVal;
- (void)setToDateFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportResponse : KalturaObjectBase
@property (nonatomic,copy) NSString* columns;
@property (nonatomic,retain) NSMutableArray* results;	// of KalturaString elements
- (KalturaFieldType)getTypeOfColumns;
- (KalturaFieldType)getTypeOfResults;
- (NSString*)getObjectTypeOfResults;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportTable : KalturaObjectBase
@property (nonatomic,copy,readonly) NSString* header;
@property (nonatomic,copy,readonly) NSString* data;
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfHeader;
- (KalturaFieldType)getTypeOfData;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportTotal : KalturaObjectBase
@property (nonatomic,copy) NSString* header;
@property (nonatomic,copy) NSString* data;
- (KalturaFieldType)getTypeOfHeader;
- (KalturaFieldType)getTypeOfData;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaScope : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSearch : KalturaObjectBase
@property (nonatomic,copy) NSString* keyWords;
@property (nonatomic,assign) int searchSource;	// enum KalturaSearchProviderType
@property (nonatomic,assign) int mediaType;	// enum KalturaMediaType
// Use this field to pass dynamic data for searching
// 	 For example - if you set this field to "mymovies_$partner_id"
// 	 The $partner_id will be automatically replcaed with your real partner Id
@property (nonatomic,copy) NSString* extraData;
@property (nonatomic,copy) NSString* authData;
- (KalturaFieldType)getTypeOfKeyWords;
- (KalturaFieldType)getTypeOfSearchSource;
- (KalturaFieldType)getTypeOfMediaType;
- (KalturaFieldType)getTypeOfExtraData;
- (KalturaFieldType)getTypeOfAuthData;
- (void)setSearchSourceFromString:(NSString*)aPropVal;
- (void)setMediaTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSearchAuthData : KalturaObjectBase
// The authentication data that further should be used for search
@property (nonatomic,copy) NSString* authData;
// Login URL when user need to sign-in and authorize the search
@property (nonatomic,copy) NSString* loginUrl;
// Information when there was an error
@property (nonatomic,copy) NSString* message;
- (KalturaFieldType)getTypeOfAuthData;
- (KalturaFieldType)getTypeOfLoginUrl;
- (KalturaFieldType)getTypeOfMessage;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSearchResult : KalturaSearch
@property (nonatomic,copy) NSString* id;
@property (nonatomic,copy) NSString* title;
@property (nonatomic,copy) NSString* thumbUrl;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,copy) NSString* tags;
@property (nonatomic,copy) NSString* url;
@property (nonatomic,copy) NSString* sourceLink;
@property (nonatomic,copy) NSString* credit;
@property (nonatomic,assign) int licenseType;	// enum KalturaLicenseType
@property (nonatomic,copy) NSString* flashPlaybackType;
@property (nonatomic,copy) NSString* fileExt;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfTitle;
- (KalturaFieldType)getTypeOfThumbUrl;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfUrl;
- (KalturaFieldType)getTypeOfSourceLink;
- (KalturaFieldType)getTypeOfCredit;
- (KalturaFieldType)getTypeOfLicenseType;
- (KalturaFieldType)getTypeOfFlashPlaybackType;
- (KalturaFieldType)getTypeOfFileExt;
- (void)setLicenseTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSearchResultResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaSearchResult elements
@property (nonatomic,assign,readonly) KALTURA_BOOL needMediaInfo;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfNeedMediaInfo;
- (void)setNeedMediaInfoFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSessionInfo : KalturaObjectBase
@property (nonatomic,copy,readonly) NSString* ks;
@property (nonatomic,assign,readonly) int sessionType;	// enum KalturaSessionType
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,copy,readonly) NSString* userId;
@property (nonatomic,assign,readonly) int expiry;
@property (nonatomic,copy,readonly) NSString* privileges;
- (KalturaFieldType)getTypeOfKs;
- (KalturaFieldType)getTypeOfSessionType;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfExpiry;
- (KalturaFieldType)getTypeOfPrivileges;
- (void)setSessionTypeFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setExpiryFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSourceFileSyncDescriptor : KalturaFileSyncDescriptor
// The translated path as used by the scheduler
@property (nonatomic,copy) NSString* actualFileSyncLocalPath;
@property (nonatomic,copy) NSString* assetId;
@property (nonatomic,assign) int assetParamsId;
- (KalturaFieldType)getTypeOfActualFileSyncLocalPath;
- (KalturaFieldType)getTypeOfAssetId;
- (KalturaFieldType)getTypeOfAssetParamsId;
- (void)setAssetParamsIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStartWidgetSessionResponse : KalturaObjectBase
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,copy,readonly) NSString* ks;
@property (nonatomic,copy,readonly) NSString* userId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfKs;
- (KalturaFieldType)getTypeOfUserId;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// Will hold data from the Kaltura UI components to be passed on to the reports and analytics system
@interface KalturaStatsEvent : KalturaObjectBase
@property (nonatomic,copy) NSString* clientVer;
@property (nonatomic,assign) int eventType;	// enum KalturaStatsEventType
// the client's timestamp of this event
@property (nonatomic,assign) double eventTimestamp;
// a unique string generated by the client that will represent the client-side session: the primary component will pass it on to other components that sprout from it
@property (nonatomic,copy) NSString* sessionId;
@property (nonatomic,assign) int partnerId;
@property (nonatomic,copy) NSString* entryId;
// the UV cookie - creates in the operational system and should be passed on ofr every event
@property (nonatomic,copy) NSString* uniqueViewer;
@property (nonatomic,copy) NSString* widgetId;
@property (nonatomic,assign) int uiconfId;
// the partner's user id
@property (nonatomic,copy) NSString* userId;
// the timestamp along the video when the event happend
@property (nonatomic,assign) int currentPoint;
// the duration of the video in milliseconds - will make it much faster than quering the db for each entry
@property (nonatomic,assign) int duration;
// will be retrieved from the request of the user
@property (nonatomic,copy,readonly) NSString* userIp;
// the time in milliseconds the event took
@property (nonatomic,assign) int processDuration;
// the id of the GUI control - will be used in the future to better understand what the user clicked
@property (nonatomic,copy) NSString* controlId;
// true if the user ever used seek in this session
@property (nonatomic,assign) KALTURA_BOOL seek;
// timestamp of the new point on the timeline of the video after the user seeks
@property (nonatomic,assign) int anewPoint;
// the referrer of the client
@property (nonatomic,copy) NSString* referrer;
// will indicate if the event is thrown for the first video in the session
@property (nonatomic,assign) KALTURA_BOOL isFirstInSession;
// kaltura application name
@property (nonatomic,copy) NSString* applicationId;
@property (nonatomic,assign) int contextId;
@property (nonatomic,assign) int featureType;	// enum KalturaStatsFeatureType
- (KalturaFieldType)getTypeOfClientVer;
- (KalturaFieldType)getTypeOfEventType;
- (KalturaFieldType)getTypeOfEventTimestamp;
- (KalturaFieldType)getTypeOfSessionId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfUniqueViewer;
- (KalturaFieldType)getTypeOfWidgetId;
- (KalturaFieldType)getTypeOfUiconfId;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfCurrentPoint;
- (KalturaFieldType)getTypeOfDuration;
- (KalturaFieldType)getTypeOfUserIp;
- (KalturaFieldType)getTypeOfProcessDuration;
- (KalturaFieldType)getTypeOfControlId;
- (KalturaFieldType)getTypeOfSeek;
- (KalturaFieldType)getTypeOfNewPoint;
- (KalturaFieldType)getTypeOfReferrer;
- (KalturaFieldType)getTypeOfIsFirstInSession;
- (KalturaFieldType)getTypeOfApplicationId;
- (KalturaFieldType)getTypeOfContextId;
- (KalturaFieldType)getTypeOfFeatureType;
- (void)setEventTypeFromString:(NSString*)aPropVal;
- (void)setEventTimestampFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setUiconfIdFromString:(NSString*)aPropVal;
- (void)setCurrentPointFromString:(NSString*)aPropVal;
- (void)setDurationFromString:(NSString*)aPropVal;
- (void)setProcessDurationFromString:(NSString*)aPropVal;
- (void)setSeekFromString:(NSString*)aPropVal;
- (void)setNewPointFromString:(NSString*)aPropVal;
- (void)setIsFirstInSessionFromString:(NSString*)aPropVal;
- (void)setContextIdFromString:(NSString*)aPropVal;
- (void)setFeatureTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// Will hold data from the Kaltura UI components to be passed on to the reports and analytics system
@interface KalturaStatsKmcEvent : KalturaObjectBase
@property (nonatomic,copy) NSString* clientVer;
@property (nonatomic,copy) NSString* kmcEventActionPath;
@property (nonatomic,assign) int kmcEventType;	// enum KalturaStatsKmcEventType
// the client's timestamp of this event
@property (nonatomic,assign) double eventTimestamp;
// a unique string generated by the client that will represent the client-side session: the primary component will pass it on to other components that sprout from it
@property (nonatomic,copy) NSString* sessionId;
@property (nonatomic,assign) int partnerId;
@property (nonatomic,copy) NSString* entryId;
@property (nonatomic,copy) NSString* widgetId;
@property (nonatomic,assign) int uiconfId;
// the partner's user id
@property (nonatomic,copy) NSString* userId;
// will be retrieved from the request of the user
@property (nonatomic,copy,readonly) NSString* userIp;
- (KalturaFieldType)getTypeOfClientVer;
- (KalturaFieldType)getTypeOfKmcEventActionPath;
- (KalturaFieldType)getTypeOfKmcEventType;
- (KalturaFieldType)getTypeOfEventTimestamp;
- (KalturaFieldType)getTypeOfSessionId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfWidgetId;
- (KalturaFieldType)getTypeOfUiconfId;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfUserIp;
- (void)setKmcEventTypeFromString:(NSString*)aPropVal;
- (void)setEventTimestampFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setUiconfIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageProfile : KalturaObjectBase
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,assign,readonly) int createdAt;
@property (nonatomic,assign,readonly) int updatedAt;
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,copy) NSString* name;
@property (nonatomic,copy) NSString* systemName;
@property (nonatomic,copy) NSString* desciption;
@property (nonatomic,assign) int status;	// enum KalturaStorageProfileStatus
@property (nonatomic,copy) NSString* protocol;	// enum KalturaStorageProfileProtocol
@property (nonatomic,copy) NSString* storageUrl;
@property (nonatomic,copy) NSString* storageBaseDir;
@property (nonatomic,copy) NSString* storageUsername;
@property (nonatomic,copy) NSString* storagePassword;
@property (nonatomic,assign) KALTURA_BOOL storageFtpPassiveMode;
@property (nonatomic,assign) int minFileSize;
@property (nonatomic,assign) int maxFileSize;
@property (nonatomic,copy) NSString* flavorParamsIds;
@property (nonatomic,assign) int maxConcurrentConnections;
@property (nonatomic,copy) NSString* pathManagerClass;
@property (nonatomic,retain) NSMutableArray* pathManagerParams;	// of KalturaKeyValue elements
// No need to create enum for temp field
@property (nonatomic,assign) int trigger;
// Delivery Priority
@property (nonatomic,assign) int deliveryPriority;
@property (nonatomic,assign) int deliveryStatus;	// enum KalturaStorageProfileDeliveryStatus
@property (nonatomic,assign) int readyBehavior;	// enum KalturaStorageProfileReadyBehavior
// Flag sugnifying that the storage exported content should be deleted when soure entry is deleted
@property (nonatomic,assign) int allowAutoDelete;
// Indicates to the local file transfer manager to create a link to the file instead of copying it
@property (nonatomic,assign) KALTURA_BOOL createFileLink;
// Holds storage profile export rules
@property (nonatomic,retain) NSMutableArray* rules;	// of KalturaRule elements
// Delivery profile ids
@property (nonatomic,retain) NSMutableArray* deliveryProfileIds;	// of KalturaKeyValue elements
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfSystemName;
- (KalturaFieldType)getTypeOfDesciption;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfProtocol;
- (KalturaFieldType)getTypeOfStorageUrl;
- (KalturaFieldType)getTypeOfStorageBaseDir;
- (KalturaFieldType)getTypeOfStorageUsername;
- (KalturaFieldType)getTypeOfStoragePassword;
- (KalturaFieldType)getTypeOfStorageFtpPassiveMode;
- (KalturaFieldType)getTypeOfMinFileSize;
- (KalturaFieldType)getTypeOfMaxFileSize;
- (KalturaFieldType)getTypeOfFlavorParamsIds;
- (KalturaFieldType)getTypeOfMaxConcurrentConnections;
- (KalturaFieldType)getTypeOfPathManagerClass;
- (KalturaFieldType)getTypeOfPathManagerParams;
- (NSString*)getObjectTypeOfPathManagerParams;
- (KalturaFieldType)getTypeOfTrigger;
- (KalturaFieldType)getTypeOfDeliveryPriority;
- (KalturaFieldType)getTypeOfDeliveryStatus;
- (KalturaFieldType)getTypeOfReadyBehavior;
- (KalturaFieldType)getTypeOfAllowAutoDelete;
- (KalturaFieldType)getTypeOfCreateFileLink;
- (KalturaFieldType)getTypeOfRules;
- (NSString*)getObjectTypeOfRules;
- (KalturaFieldType)getTypeOfDeliveryProfileIds;
- (NSString*)getObjectTypeOfDeliveryProfileIds;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setStorageFtpPassiveModeFromString:(NSString*)aPropVal;
- (void)setMinFileSizeFromString:(NSString*)aPropVal;
- (void)setMaxFileSizeFromString:(NSString*)aPropVal;
- (void)setMaxConcurrentConnectionsFromString:(NSString*)aPropVal;
- (void)setTriggerFromString:(NSString*)aPropVal;
- (void)setDeliveryPriorityFromString:(NSString*)aPropVal;
- (void)setDeliveryStatusFromString:(NSString*)aPropVal;
- (void)setReadyBehaviorFromString:(NSString*)aPropVal;
- (void)setAllowAutoDeleteFromString:(NSString*)aPropVal;
- (void)setCreateFileLinkFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageProfileListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaStorageProfile elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSyndicationFeedEntryCount : KalturaObjectBase
// the total count of entries that should appear in the feed without flavor filtering
@property (nonatomic,assign) int totalEntryCount;
// count of entries that will appear in the feed (including all relevant filters)
@property (nonatomic,assign) int actualEntryCount;
// count of entries that requires transcoding in order to be included in feed
@property (nonatomic,assign) int requireTranscodingCount;
- (KalturaFieldType)getTypeOfTotalEntryCount;
- (KalturaFieldType)getTypeOfActualEntryCount;
- (KalturaFieldType)getTypeOfRequireTranscodingCount;
- (void)setTotalEntryCountFromString:(NSString*)aPropVal;
- (void)setActualEntryCountFromString:(NSString*)aPropVal;
- (void)setRequireTranscodingCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbAsset : KalturaAsset
// The Flavor Params used to create this Flavor Asset
@property (nonatomic,assign) int thumbParamsId;	// insertonly
// The width of the Flavor Asset
@property (nonatomic,assign,readonly) int width;
// The height of the Flavor Asset
@property (nonatomic,assign,readonly) int height;
// The status of the asset
@property (nonatomic,assign,readonly) int status;	// enum KalturaThumbAssetStatus
- (KalturaFieldType)getTypeOfThumbParamsId;
- (KalturaFieldType)getTypeOfWidth;
- (KalturaFieldType)getTypeOfHeight;
- (KalturaFieldType)getTypeOfStatus;
- (void)setThumbParamsIdFromString:(NSString*)aPropVal;
- (void)setWidthFromString:(NSString*)aPropVal;
- (void)setHeightFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbAssetListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaThumbAsset elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbParams : KalturaAssetParams
@property (nonatomic,assign) int cropType;	// enum KalturaThumbCropType
@property (nonatomic,assign) int quality;
@property (nonatomic,assign) int cropX;
@property (nonatomic,assign) int cropY;
@property (nonatomic,assign) int cropWidth;
@property (nonatomic,assign) int cropHeight;
@property (nonatomic,assign) double videoOffset;
@property (nonatomic,assign) int width;
@property (nonatomic,assign) int height;
@property (nonatomic,assign) double scaleWidth;
@property (nonatomic,assign) double scaleHeight;
// Hexadecimal value
@property (nonatomic,copy) NSString* backgroundColor;
// Id of the flavor params or the thumbnail params to be used as source for the thumbnail creation
@property (nonatomic,assign) int sourceParamsId;
// The container format of the Flavor Params
@property (nonatomic,copy) NSString* format;	// enum KalturaContainerFormat
// The image density (dpi) for example: 72 or 96
@property (nonatomic,assign) int density;
// Strip profiles and comments
@property (nonatomic,assign) KALTURA_BOOL stripProfiles;
// Create thumbnail from the videoLengthpercentage second
@property (nonatomic,assign) int videoOffsetInPercentage;
- (KalturaFieldType)getTypeOfCropType;
- (KalturaFieldType)getTypeOfQuality;
- (KalturaFieldType)getTypeOfCropX;
- (KalturaFieldType)getTypeOfCropY;
- (KalturaFieldType)getTypeOfCropWidth;
- (KalturaFieldType)getTypeOfCropHeight;
- (KalturaFieldType)getTypeOfVideoOffset;
- (KalturaFieldType)getTypeOfWidth;
- (KalturaFieldType)getTypeOfHeight;
- (KalturaFieldType)getTypeOfScaleWidth;
- (KalturaFieldType)getTypeOfScaleHeight;
- (KalturaFieldType)getTypeOfBackgroundColor;
- (KalturaFieldType)getTypeOfSourceParamsId;
- (KalturaFieldType)getTypeOfFormat;
- (KalturaFieldType)getTypeOfDensity;
- (KalturaFieldType)getTypeOfStripProfiles;
- (KalturaFieldType)getTypeOfVideoOffsetInPercentage;
- (void)setCropTypeFromString:(NSString*)aPropVal;
- (void)setQualityFromString:(NSString*)aPropVal;
- (void)setCropXFromString:(NSString*)aPropVal;
- (void)setCropYFromString:(NSString*)aPropVal;
- (void)setCropWidthFromString:(NSString*)aPropVal;
- (void)setCropHeightFromString:(NSString*)aPropVal;
- (void)setVideoOffsetFromString:(NSString*)aPropVal;
- (void)setWidthFromString:(NSString*)aPropVal;
- (void)setHeightFromString:(NSString*)aPropVal;
- (void)setScaleWidthFromString:(NSString*)aPropVal;
- (void)setScaleHeightFromString:(NSString*)aPropVal;
- (void)setSourceParamsIdFromString:(NSString*)aPropVal;
- (void)setDensityFromString:(NSString*)aPropVal;
- (void)setStripProfilesFromString:(NSString*)aPropVal;
- (void)setVideoOffsetInPercentageFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbParamsListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaThumbParams elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbParamsOutput : KalturaThumbParams
@property (nonatomic,assign) int thumbParamsId;
@property (nonatomic,copy) NSString* thumbParamsVersion;
@property (nonatomic,copy) NSString* thumbAssetId;
@property (nonatomic,copy) NSString* thumbAssetVersion;
@property (nonatomic,assign) int rotate;
- (KalturaFieldType)getTypeOfThumbParamsId;
- (KalturaFieldType)getTypeOfThumbParamsVersion;
- (KalturaFieldType)getTypeOfThumbAssetId;
- (KalturaFieldType)getTypeOfThumbAssetVersion;
- (KalturaFieldType)getTypeOfRotate;
- (void)setThumbParamsIdFromString:(NSString*)aPropVal;
- (void)setRotateFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbParamsOutputListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaThumbParamsOutput elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbnailServeOptions : KalturaObjectBase
@property (nonatomic,assign) KALTURA_BOOL download;
- (KalturaFieldType)getTypeOfDownload;
- (void)setDownloadFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUiConf : KalturaObjectBase
@property (nonatomic,assign,readonly) int id;
// Name of the uiConf, this is not a primary key
@property (nonatomic,copy) NSString* name;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,assign) int objType;	// enum KalturaUiConfObjType
@property (nonatomic,copy,readonly) NSString* objTypeAsString;
@property (nonatomic,assign) int width;
@property (nonatomic,assign) int height;
@property (nonatomic,copy) NSString* htmlParams;
@property (nonatomic,copy) NSString* swfUrl;
@property (nonatomic,copy,readonly) NSString* confFilePath;
@property (nonatomic,copy) NSString* confFile;
@property (nonatomic,copy) NSString* confFileFeatures;
@property (nonatomic,copy) NSString* config;
@property (nonatomic,copy) NSString* confVars;
@property (nonatomic,assign) KALTURA_BOOL useCdn;
@property (nonatomic,copy) NSString* tags;
@property (nonatomic,copy) NSString* swfUrlVersion;
// Entry creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// Entry creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int updatedAt;
@property (nonatomic,assign) int creationMode;	// enum KalturaUiConfCreationMode
@property (nonatomic,copy) NSString* html5Url;
// UiConf version
@property (nonatomic,copy,readonly) NSString* version;
@property (nonatomic,copy) NSString* partnerTags;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfObjType;
- (KalturaFieldType)getTypeOfObjTypeAsString;
- (KalturaFieldType)getTypeOfWidth;
- (KalturaFieldType)getTypeOfHeight;
- (KalturaFieldType)getTypeOfHtmlParams;
- (KalturaFieldType)getTypeOfSwfUrl;
- (KalturaFieldType)getTypeOfConfFilePath;
- (KalturaFieldType)getTypeOfConfFile;
- (KalturaFieldType)getTypeOfConfFileFeatures;
- (KalturaFieldType)getTypeOfConfig;
- (KalturaFieldType)getTypeOfConfVars;
- (KalturaFieldType)getTypeOfUseCdn;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfSwfUrlVersion;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfCreationMode;
- (KalturaFieldType)getTypeOfHtml5Url;
- (KalturaFieldType)getTypeOfVersion;
- (KalturaFieldType)getTypeOfPartnerTags;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setObjTypeFromString:(NSString*)aPropVal;
- (void)setWidthFromString:(NSString*)aPropVal;
- (void)setHeightFromString:(NSString*)aPropVal;
- (void)setUseCdnFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
- (void)setCreationModeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUiConfListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaUiConf elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// Info about uiconf type
@interface KalturaUiConfTypeInfo : KalturaObjectBase
// UiConf Type
@property (nonatomic,assign) int type;	// enum KalturaUiConfObjType
// Available versions
@property (nonatomic,retain) NSMutableArray* versions;	// of KalturaString elements
// The direcotry this type is saved at
@property (nonatomic,copy) NSString* directory;
// Filename for this UiConf type
@property (nonatomic,copy) NSString* filename;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfVersions;
- (NSString*)getObjectTypeOfVersions;
- (KalturaFieldType)getTypeOfDirectory;
- (KalturaFieldType)getTypeOfFilename;
- (void)setTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUploadResponse : KalturaObjectBase
@property (nonatomic,copy) NSString* uploadTokenId;
@property (nonatomic,assign) int fileSize;
@property (nonatomic,assign) int errorCode;	// enum KalturaUploadErrorCode
@property (nonatomic,copy) NSString* errorDescription;
- (KalturaFieldType)getTypeOfUploadTokenId;
- (KalturaFieldType)getTypeOfFileSize;
- (KalturaFieldType)getTypeOfErrorCode;
- (KalturaFieldType)getTypeOfErrorDescription;
- (void)setFileSizeFromString:(NSString*)aPropVal;
- (void)setErrorCodeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUploadToken : KalturaObjectBase
// Upload token unique ID
@property (nonatomic,copy,readonly) NSString* id;
// Partner ID of the upload token
@property (nonatomic,assign,readonly) int partnerId;
// User id for the upload token
@property (nonatomic,copy,readonly) NSString* userId;
// Status of the upload token
@property (nonatomic,assign,readonly) int status;	// enum KalturaUploadTokenStatus
// Name of the file for the upload token, can be empty when the upload token is created and will be updated internally after the file is uploaded
@property (nonatomic,copy) NSString* fileName;	// insertonly
// File size in bytes, can be empty when the upload token is created and will be updated internally after the file is uploaded
@property (nonatomic,assign) double fileSize;	// insertonly
// Uploaded file size in bytes, can be used to identify how many bytes were uploaded before resuming
@property (nonatomic,assign,readonly) double uploadedFileSize;
// Creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// Last update date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int updatedAt;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfFileName;
- (KalturaFieldType)getTypeOfFileSize;
- (KalturaFieldType)getTypeOfUploadedFileSize;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setFileSizeFromString:(NSString*)aPropVal;
- (void)setUploadedFileSizeFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUploadTokenListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaUploadToken elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUser : KalturaObjectBase
@property (nonatomic,copy) NSString* id;
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,copy) NSString* screenName;
@property (nonatomic,copy) NSString* fullName;
@property (nonatomic,copy) NSString* email;
@property (nonatomic,assign) int dateOfBirth;
@property (nonatomic,copy) NSString* country;
@property (nonatomic,copy) NSString* state;
@property (nonatomic,copy) NSString* city;
@property (nonatomic,copy) NSString* zip;
@property (nonatomic,copy) NSString* thumbnailUrl;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,copy) NSString* tags;
// Admin tags can be updated only by using an admin session
@property (nonatomic,copy) NSString* adminTags;
@property (nonatomic,assign) int gender;	// enum KalturaGender
@property (nonatomic,assign) int status;	// enum KalturaUserStatus
// Creation date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int createdAt;
// Last update date as Unix timestamp (In seconds)
@property (nonatomic,assign,readonly) int updatedAt;
// Can be used to store various partner related data as a string
@property (nonatomic,copy) NSString* partnerData;
@property (nonatomic,assign) int indexedPartnerDataInt;
@property (nonatomic,copy) NSString* indexedPartnerDataString;
@property (nonatomic,assign,readonly) int storageSize;
@property (nonatomic,copy) NSString* password;	// insertonly
@property (nonatomic,copy) NSString* firstName;
@property (nonatomic,copy) NSString* lastName;
@property (nonatomic,assign) KALTURA_BOOL isAdmin;
@property (nonatomic,copy) NSString* language;	// enum KalturaLanguageCode
@property (nonatomic,assign,readonly) int lastLoginTime;
@property (nonatomic,assign,readonly) int statusUpdatedAt;
@property (nonatomic,assign,readonly) int deletedAt;
@property (nonatomic,assign,readonly) KALTURA_BOOL loginEnabled;
@property (nonatomic,copy) NSString* roleIds;
@property (nonatomic,copy,readonly) NSString* roleNames;
@property (nonatomic,assign,readonly) KALTURA_BOOL isAccountOwner;
@property (nonatomic,copy) NSString* allowedPartnerIds;
@property (nonatomic,copy) NSString* allowedPartnerPackages;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfScreenName;
- (KalturaFieldType)getTypeOfFullName;
- (KalturaFieldType)getTypeOfEmail;
- (KalturaFieldType)getTypeOfDateOfBirth;
- (KalturaFieldType)getTypeOfCountry;
- (KalturaFieldType)getTypeOfState;
- (KalturaFieldType)getTypeOfCity;
- (KalturaFieldType)getTypeOfZip;
- (KalturaFieldType)getTypeOfThumbnailUrl;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfAdminTags;
- (KalturaFieldType)getTypeOfGender;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfPartnerData;
- (KalturaFieldType)getTypeOfIndexedPartnerDataInt;
- (KalturaFieldType)getTypeOfIndexedPartnerDataString;
- (KalturaFieldType)getTypeOfStorageSize;
- (KalturaFieldType)getTypeOfPassword;
- (KalturaFieldType)getTypeOfFirstName;
- (KalturaFieldType)getTypeOfLastName;
- (KalturaFieldType)getTypeOfIsAdmin;
- (KalturaFieldType)getTypeOfLanguage;
- (KalturaFieldType)getTypeOfLastLoginTime;
- (KalturaFieldType)getTypeOfStatusUpdatedAt;
- (KalturaFieldType)getTypeOfDeletedAt;
- (KalturaFieldType)getTypeOfLoginEnabled;
- (KalturaFieldType)getTypeOfRoleIds;
- (KalturaFieldType)getTypeOfRoleNames;
- (KalturaFieldType)getTypeOfIsAccountOwner;
- (KalturaFieldType)getTypeOfAllowedPartnerIds;
- (KalturaFieldType)getTypeOfAllowedPartnerPackages;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setDateOfBirthFromString:(NSString*)aPropVal;
- (void)setGenderFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
- (void)setIndexedPartnerDataIntFromString:(NSString*)aPropVal;
- (void)setStorageSizeFromString:(NSString*)aPropVal;
- (void)setIsAdminFromString:(NSString*)aPropVal;
- (void)setLastLoginTimeFromString:(NSString*)aPropVal;
- (void)setStatusUpdatedAtFromString:(NSString*)aPropVal;
- (void)setDeletedAtFromString:(NSString*)aPropVal;
- (void)setLoginEnabledFromString:(NSString*)aPropVal;
- (void)setIsAccountOwnerFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaUser elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserRole : KalturaObjectBase
@property (nonatomic,assign,readonly) int id;
@property (nonatomic,copy) NSString* name;
@property (nonatomic,copy) NSString* systemName;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,assign) int status;	// enum KalturaUserRoleStatus
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,copy) NSString* permissionNames;
@property (nonatomic,copy) NSString* tags;
@property (nonatomic,assign,readonly) int createdAt;
@property (nonatomic,assign,readonly) int updatedAt;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfSystemName;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfPermissionNames;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (void)setIdFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserRoleListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaUserRole elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidget : KalturaObjectBase
@property (nonatomic,copy,readonly) NSString* id;
@property (nonatomic,copy) NSString* sourceWidgetId;
@property (nonatomic,copy,readonly) NSString* rootWidgetId;
@property (nonatomic,assign,readonly) int partnerId;
@property (nonatomic,copy) NSString* entryId;
@property (nonatomic,assign) int uiConfId;
@property (nonatomic,assign) int securityType;	// enum KalturaWidgetSecurityType
@property (nonatomic,assign) int securityPolicy;
@property (nonatomic,assign,readonly) int createdAt;
@property (nonatomic,assign,readonly) int updatedAt;
// Can be used to store various partner related data as a string
@property (nonatomic,copy) NSString* partnerData;
@property (nonatomic,copy,readonly) NSString* widgetHTML;
// Should enforce entitlement on feed entries
@property (nonatomic,assign) KALTURA_BOOL enforceEntitlement;
// Set privacy context for search entries that assiged to private and public categories within a category privacy context.
@property (nonatomic,copy) NSString* privacyContext;
// Addes the HTML5 script line to the widget's embed code
@property (nonatomic,assign) KALTURA_BOOL addEmbedHtml5Support;
- (KalturaFieldType)getTypeOfId;
- (KalturaFieldType)getTypeOfSourceWidgetId;
- (KalturaFieldType)getTypeOfRootWidgetId;
- (KalturaFieldType)getTypeOfPartnerId;
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfUiConfId;
- (KalturaFieldType)getTypeOfSecurityType;
- (KalturaFieldType)getTypeOfSecurityPolicy;
- (KalturaFieldType)getTypeOfCreatedAt;
- (KalturaFieldType)getTypeOfUpdatedAt;
- (KalturaFieldType)getTypeOfPartnerData;
- (KalturaFieldType)getTypeOfWidgetHTML;
- (KalturaFieldType)getTypeOfEnforceEntitlement;
- (KalturaFieldType)getTypeOfPrivacyContext;
- (KalturaFieldType)getTypeOfAddEmbedHtml5Support;
- (void)setPartnerIdFromString:(NSString*)aPropVal;
- (void)setUiConfIdFromString:(NSString*)aPropVal;
- (void)setSecurityTypeFromString:(NSString*)aPropVal;
- (void)setSecurityPolicyFromString:(NSString*)aPropVal;
- (void)setCreatedAtFromString:(NSString*)aPropVal;
- (void)setUpdatedAtFromString:(NSString*)aPropVal;
- (void)setEnforceEntitlementFromString:(NSString*)aPropVal;
- (void)setAddEmbedHtml5SupportFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidgetListResponse : KalturaObjectBase
@property (nonatomic,retain,readonly) NSMutableArray* objects;	// of KalturaWidget elements
@property (nonatomic,assign,readonly) int totalCount;
- (KalturaFieldType)getTypeOfObjects;
- (NSString*)getObjectTypeOfObjects;
- (KalturaFieldType)getTypeOfTotalCount;
- (void)setTotalCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,copy) NSString* systemNameEqual;
@property (nonatomic,copy) NSString* systemNameIn;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfSystemNameEqual;
- (KalturaFieldType)getTypeOfSystemNameIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlBlockAction : KalturaRuleAction
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlLimitFlavorsAction : KalturaRuleAction
// Comma separated list of flavor ids
@property (nonatomic,copy) NSString* flavorParamsIds;
@property (nonatomic,assign) KALTURA_BOOL isBlockedList;
- (KalturaFieldType)getTypeOfFlavorParamsIds;
- (KalturaFieldType)getTypeOfIsBlockedList;
- (void)setIsBlockedListFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlPreviewAction : KalturaRuleAction
@property (nonatomic,assign) int limit;
- (KalturaFieldType)getTypeOfLimit;
- (void)setLimitFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlProfileBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,copy) NSString* systemNameEqual;
@property (nonatomic,copy) NSString* systemNameIn;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfSystemNameEqual;
- (KalturaFieldType)getTypeOfSystemNameIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAdminUser : KalturaUser
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAmazonS3StorageProfile : KalturaStorageProfile
@property (nonatomic,copy) NSString* filesPermissionInS3;	// enum KalturaAmazonS3StorageProfileFilesPermissionLevel
- (KalturaFieldType)getTypeOfFilesPermissionInS3;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaApiActionPermissionItem : KalturaPermissionItem
@property (nonatomic,copy) NSString* service;
@property (nonatomic,copy) NSString* action;
- (KalturaFieldType)getTypeOfService;
- (KalturaFieldType)getTypeOfAction;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaApiParameterPermissionItem : KalturaPermissionItem
@property (nonatomic,copy) NSString* object;
@property (nonatomic,copy) NSString* parameter;
@property (nonatomic,copy) NSString* action;	// enum KalturaApiParameterPermissionItemAction
- (KalturaFieldType)getTypeOfObject;
- (KalturaFieldType)getTypeOfParameter;
- (KalturaFieldType)getTypeOfAction;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetBaseFilter : KalturaFilter
@property (nonatomic,copy) NSString* idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,copy) NSString* entryIdEqual;
@property (nonatomic,copy) NSString* entryIdIn;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* partnerIdIn;
@property (nonatomic,assign) int sizeGreaterThanOrEqual;
@property (nonatomic,assign) int sizeLessThanOrEqual;
@property (nonatomic,copy) NSString* tagsLike;
@property (nonatomic,copy) NSString* tagsMultiLikeOr;
@property (nonatomic,copy) NSString* tagsMultiLikeAnd;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
@property (nonatomic,assign) int deletedAtGreaterThanOrEqual;
@property (nonatomic,assign) int deletedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfEntryIdEqual;
- (KalturaFieldType)getTypeOfEntryIdIn;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdIn;
- (KalturaFieldType)getTypeOfSizeGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfSizeLessThanOrEqual;
- (KalturaFieldType)getTypeOfTagsLike;
- (KalturaFieldType)getTypeOfTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfDeletedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfDeletedAtLessThanOrEqual;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setSizeGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setSizeLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setDeletedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setDeletedAtLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetParamsBaseFilter : KalturaFilter
@property (nonatomic,copy) NSString* systemNameEqual;
@property (nonatomic,copy) NSString* systemNameIn;
@property (nonatomic,assign) int isSystemDefaultEqual;	// enum KalturaNullableBoolean
@property (nonatomic,copy) NSString* tagsEqual;
- (KalturaFieldType)getTypeOfSystemNameEqual;
- (KalturaFieldType)getTypeOfSystemNameIn;
- (KalturaFieldType)getTypeOfIsSystemDefaultEqual;
- (KalturaFieldType)getTypeOfTagsEqual;
- (void)setIsSystemDefaultEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetParamsOutput : KalturaAssetParams
@property (nonatomic,assign) int assetParamsId;
@property (nonatomic,copy) NSString* assetParamsVersion;
@property (nonatomic,copy) NSString* assetId;
@property (nonatomic,copy) NSString* assetVersion;
@property (nonatomic,assign) int readyBehavior;
// The container format of the Flavor Params
@property (nonatomic,copy) NSString* format;	// enum KalturaContainerFormat
- (KalturaFieldType)getTypeOfAssetParamsId;
- (KalturaFieldType)getTypeOfAssetParamsVersion;
- (KalturaFieldType)getTypeOfAssetId;
- (KalturaFieldType)getTypeOfAssetVersion;
- (KalturaFieldType)getTypeOfReadyBehavior;
- (KalturaFieldType)getTypeOfFormat;
- (void)setAssetParamsIdFromString:(NSString*)aPropVal;
- (void)setReadyBehaviorFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetPropertiesCompareCondition : KalturaCondition
// Array of key/value objects that holds the property and the value to find and compare on an asset object
@property (nonatomic,retain) NSMutableArray* properties;	// of KalturaKeyValue elements
- (KalturaFieldType)getTypeOfProperties;
- (NSString*)getObjectTypeOfProperties;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetsParamsResourceContainers : KalturaResource
// Array of resources associated with asset params ids
@property (nonatomic,retain) NSMutableArray* resources;	// of KalturaAssetParamsResourceContainer elements
- (KalturaFieldType)getTypeOfResources;
- (NSString*)getObjectTypeOfResources;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAuthenticatedCondition : KalturaCondition
// The privelege needed to remove the restriction
@property (nonatomic,retain) NSMutableArray* privileges;	// of KalturaStringValue elements
- (KalturaFieldType)getTypeOfPrivileges;
- (NSString*)getObjectTypeOfPrivileges;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBaseSyndicationFeedBaseFilter : KalturaFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBatchJobBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,assign) int idGreaterThanOrEqual;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* partnerIdIn;
@property (nonatomic,copy) NSString* partnerIdNotIn;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
@property (nonatomic,assign) int executionAttemptsGreaterThanOrEqual;
@property (nonatomic,assign) int executionAttemptsLessThanOrEqual;
@property (nonatomic,assign) int lockVersionGreaterThanOrEqual;
@property (nonatomic,assign) int lockVersionLessThanOrEqual;
@property (nonatomic,copy) NSString* entryIdEqual;
@property (nonatomic,copy) NSString* jobTypeEqual;	// enum KalturaBatchJobType
@property (nonatomic,copy) NSString* jobTypeIn;
@property (nonatomic,copy) NSString* jobTypeNotIn;
@property (nonatomic,assign) int jobSubTypeEqual;
@property (nonatomic,copy) NSString* jobSubTypeIn;
@property (nonatomic,copy) NSString* jobSubTypeNotIn;
@property (nonatomic,assign) int statusEqual;	// enum KalturaBatchJobStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,copy) NSString* statusNotIn;
@property (nonatomic,assign) int priorityGreaterThanOrEqual;
@property (nonatomic,assign) int priorityLessThanOrEqual;
@property (nonatomic,assign) int priorityEqual;
@property (nonatomic,copy) NSString* priorityIn;
@property (nonatomic,copy) NSString* priorityNotIn;
@property (nonatomic,assign) int batchVersionGreaterThanOrEqual;
@property (nonatomic,assign) int batchVersionLessThanOrEqual;
@property (nonatomic,assign) int batchVersionEqual;
@property (nonatomic,assign) int queueTimeGreaterThanOrEqual;
@property (nonatomic,assign) int queueTimeLessThanOrEqual;
@property (nonatomic,assign) int finishTimeGreaterThanOrEqual;
@property (nonatomic,assign) int finishTimeLessThanOrEqual;
@property (nonatomic,assign) int errTypeEqual;	// enum KalturaBatchJobErrorTypes
@property (nonatomic,copy) NSString* errTypeIn;
@property (nonatomic,copy) NSString* errTypeNotIn;
@property (nonatomic,assign) int errNumberEqual;
@property (nonatomic,copy) NSString* errNumberIn;
@property (nonatomic,copy) NSString* errNumberNotIn;
@property (nonatomic,assign) int estimatedEffortLessThan;
@property (nonatomic,assign) int estimatedEffortGreaterThan;
@property (nonatomic,assign) int urgencyLessThanOrEqual;
@property (nonatomic,assign) int urgencyGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdIn;
- (KalturaFieldType)getTypeOfPartnerIdNotIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfExecutionAttemptsGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfExecutionAttemptsLessThanOrEqual;
- (KalturaFieldType)getTypeOfLockVersionGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfLockVersionLessThanOrEqual;
- (KalturaFieldType)getTypeOfEntryIdEqual;
- (KalturaFieldType)getTypeOfJobTypeEqual;
- (KalturaFieldType)getTypeOfJobTypeIn;
- (KalturaFieldType)getTypeOfJobTypeNotIn;
- (KalturaFieldType)getTypeOfJobSubTypeEqual;
- (KalturaFieldType)getTypeOfJobSubTypeIn;
- (KalturaFieldType)getTypeOfJobSubTypeNotIn;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfStatusNotIn;
- (KalturaFieldType)getTypeOfPriorityGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfPriorityLessThanOrEqual;
- (KalturaFieldType)getTypeOfPriorityEqual;
- (KalturaFieldType)getTypeOfPriorityIn;
- (KalturaFieldType)getTypeOfPriorityNotIn;
- (KalturaFieldType)getTypeOfBatchVersionGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfBatchVersionLessThanOrEqual;
- (KalturaFieldType)getTypeOfBatchVersionEqual;
- (KalturaFieldType)getTypeOfQueueTimeGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfQueueTimeLessThanOrEqual;
- (KalturaFieldType)getTypeOfFinishTimeGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfFinishTimeLessThanOrEqual;
- (KalturaFieldType)getTypeOfErrTypeEqual;
- (KalturaFieldType)getTypeOfErrTypeIn;
- (KalturaFieldType)getTypeOfErrTypeNotIn;
- (KalturaFieldType)getTypeOfErrNumberEqual;
- (KalturaFieldType)getTypeOfErrNumberIn;
- (KalturaFieldType)getTypeOfErrNumberNotIn;
- (KalturaFieldType)getTypeOfEstimatedEffortLessThan;
- (KalturaFieldType)getTypeOfEstimatedEffortGreaterThan;
- (KalturaFieldType)getTypeOfUrgencyLessThanOrEqual;
- (KalturaFieldType)getTypeOfUrgencyGreaterThanOrEqual;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setIdGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setExecutionAttemptsGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setExecutionAttemptsLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setLockVersionGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setLockVersionLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setJobSubTypeEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
- (void)setPriorityGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setPriorityLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setPriorityEqualFromString:(NSString*)aPropVal;
- (void)setBatchVersionGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setBatchVersionLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setBatchVersionEqualFromString:(NSString*)aPropVal;
- (void)setQueueTimeGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setQueueTimeLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setFinishTimeGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setFinishTimeLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setErrTypeEqualFromString:(NSString*)aPropVal;
- (void)setErrNumberEqualFromString:(NSString*)aPropVal;
- (void)setEstimatedEffortLessThanFromString:(NSString*)aPropVal;
- (void)setEstimatedEffortGreaterThanFromString:(NSString*)aPropVal;
- (void)setUrgencyLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUrgencyGreaterThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// A boolean representation to return an array of booleans
@interface KalturaBooleanValue : KalturaValue
@property (nonatomic,assign) KALTURA_BOOL value;
- (KalturaFieldType)getTypeOfValue;
- (void)setValueFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkDownloadJobData : KalturaJobData
// Comma separated list of entry ids
@property (nonatomic,copy) NSString* entryIds;
// Flavor params id to use for conversion
@property (nonatomic,assign) int flavorParamsId;
// The id of the requesting user
@property (nonatomic,copy) NSString* puserId;
- (KalturaFieldType)getTypeOfEntryIds;
- (KalturaFieldType)getTypeOfFlavorParamsId;
- (KalturaFieldType)getTypeOfPuserId;
- (void)setFlavorParamsIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadBaseFilter : KalturaFilter
@property (nonatomic,assign) int uploadedOnGreaterThanOrEqual;
@property (nonatomic,assign) int uploadedOnLessThanOrEqual;
@property (nonatomic,assign) int uploadedOnEqual;
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,assign) int statusEqual;	// enum KalturaBatchJobStatus
@property (nonatomic,copy) NSString* bulkUploadObjectTypeEqual;	// enum KalturaBulkUploadObjectType
@property (nonatomic,copy) NSString* bulkUploadObjectTypeIn;
- (KalturaFieldType)getTypeOfUploadedOnGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUploadedOnLessThanOrEqual;
- (KalturaFieldType)getTypeOfUploadedOnEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfBulkUploadObjectTypeEqual;
- (KalturaFieldType)getTypeOfBulkUploadObjectTypeIn;
- (void)setUploadedOnGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUploadedOnLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUploadedOnEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// This class represents object-specific data passed to the 
//  bulk upload job.
@interface KalturaBulkUploadCategoryData : KalturaBulkUploadObjectData
@end

// @package Kaltura
// @subpackage Client
// This class represents object-specific data passed to the 
//  bulk upload job.
@interface KalturaBulkUploadCategoryEntryData : KalturaBulkUploadObjectData
@end

// @package Kaltura
// @subpackage Client
// This class represents object-specific data passed to the 
//  bulk upload job.
@interface KalturaBulkUploadCategoryUserData : KalturaBulkUploadObjectData
@end

// @package Kaltura
// @subpackage Client
// This class represents object-specific data passed to the 
//  bulk upload job.
@interface KalturaBulkUploadEntryData : KalturaBulkUploadObjectData
// Selected profile id for all bulk entries
@property (nonatomic,assign) int conversionProfileId;
- (KalturaFieldType)getTypeOfConversionProfileId;
- (void)setConversionProfileIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadJobData : KalturaJobData
@property (nonatomic,copy,readonly) NSString* userId;
// The screen name of the user
@property (nonatomic,copy,readonly) NSString* uploadedBy;
// Selected profile id for all bulk entries
@property (nonatomic,assign,readonly) int conversionProfileId;
// Created by the API
@property (nonatomic,copy,readonly) NSString* resultsFileLocalPath;
// Created by the API
@property (nonatomic,copy,readonly) NSString* resultsFileUrl;
// Number of created entries
@property (nonatomic,assign,readonly) int numOfEntries;
// Number of created objects
@property (nonatomic,assign,readonly) int numOfObjects;
// The bulk upload file path
@property (nonatomic,copy,readonly) NSString* filePath;
// Type of object for bulk upload
@property (nonatomic,copy,readonly) NSString* bulkUploadObjectType;	// enum KalturaBulkUploadObjectType
// Friendly name of the file, used to be recognized later in the logs.
@property (nonatomic,copy) NSString* fileName;
// Data pertaining to the objects being uploaded
@property (nonatomic,retain,readonly) KalturaBulkUploadObjectData* objectData;
// Type of bulk upload
@property (nonatomic,copy,readonly) NSString* type;	// enum KalturaBulkUploadType
// Recipients of the email for bulk upload success/failure
@property (nonatomic,copy) NSString* emailRecipients;
// Number of objects that finished on error status
@property (nonatomic,assign) int numOfErrorObjects;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfUploadedBy;
- (KalturaFieldType)getTypeOfConversionProfileId;
- (KalturaFieldType)getTypeOfResultsFileLocalPath;
- (KalturaFieldType)getTypeOfResultsFileUrl;
- (KalturaFieldType)getTypeOfNumOfEntries;
- (KalturaFieldType)getTypeOfNumOfObjects;
- (KalturaFieldType)getTypeOfFilePath;
- (KalturaFieldType)getTypeOfBulkUploadObjectType;
- (KalturaFieldType)getTypeOfFileName;
- (KalturaFieldType)getTypeOfObjectData;
- (NSString*)getObjectTypeOfObjectData;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfEmailRecipients;
- (KalturaFieldType)getTypeOfNumOfErrorObjects;
- (void)setConversionProfileIdFromString:(NSString*)aPropVal;
- (void)setNumOfEntriesFromString:(NSString*)aPropVal;
- (void)setNumOfObjectsFromString:(NSString*)aPropVal;
- (void)setNumOfErrorObjectsFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadResultCategory : KalturaBulkUploadResult
@property (nonatomic,copy) NSString* relativePath;
@property (nonatomic,copy) NSString* name;
@property (nonatomic,copy) NSString* referenceId;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,copy) NSString* tags;
@property (nonatomic,assign) int appearInList;
@property (nonatomic,assign) int privacy;
@property (nonatomic,assign) int inheritanceType;
@property (nonatomic,assign) int userJoinPolicy;
@property (nonatomic,assign) int defaultPermissionLevel;
@property (nonatomic,copy) NSString* owner;
@property (nonatomic,assign) int contributionPolicy;
@property (nonatomic,assign) int partnerSortValue;
@property (nonatomic,assign) KALTURA_BOOL moderation;
- (KalturaFieldType)getTypeOfRelativePath;
- (KalturaFieldType)getTypeOfName;
- (KalturaFieldType)getTypeOfReferenceId;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfAppearInList;
- (KalturaFieldType)getTypeOfPrivacy;
- (KalturaFieldType)getTypeOfInheritanceType;
- (KalturaFieldType)getTypeOfUserJoinPolicy;
- (KalturaFieldType)getTypeOfDefaultPermissionLevel;
- (KalturaFieldType)getTypeOfOwner;
- (KalturaFieldType)getTypeOfContributionPolicy;
- (KalturaFieldType)getTypeOfPartnerSortValue;
- (KalturaFieldType)getTypeOfModeration;
- (void)setAppearInListFromString:(NSString*)aPropVal;
- (void)setPrivacyFromString:(NSString*)aPropVal;
- (void)setInheritanceTypeFromString:(NSString*)aPropVal;
- (void)setUserJoinPolicyFromString:(NSString*)aPropVal;
- (void)setDefaultPermissionLevelFromString:(NSString*)aPropVal;
- (void)setContributionPolicyFromString:(NSString*)aPropVal;
- (void)setPartnerSortValueFromString:(NSString*)aPropVal;
- (void)setModerationFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadResultCategoryEntry : KalturaBulkUploadResult
@property (nonatomic,assign) int categoryId;
@property (nonatomic,copy) NSString* entryId;
- (KalturaFieldType)getTypeOfCategoryId;
- (KalturaFieldType)getTypeOfEntryId;
- (void)setCategoryIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadResultCategoryUser : KalturaBulkUploadResult
@property (nonatomic,assign) int categoryId;
@property (nonatomic,copy) NSString* categoryReferenceId;
@property (nonatomic,copy) NSString* userId;
@property (nonatomic,assign) int permissionLevel;
@property (nonatomic,assign) int updateMethod;
@property (nonatomic,assign) int requiredObjectStatus;
- (KalturaFieldType)getTypeOfCategoryId;
- (KalturaFieldType)getTypeOfCategoryReferenceId;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfPermissionLevel;
- (KalturaFieldType)getTypeOfUpdateMethod;
- (KalturaFieldType)getTypeOfRequiredObjectStatus;
- (void)setCategoryIdFromString:(NSString*)aPropVal;
- (void)setPermissionLevelFromString:(NSString*)aPropVal;
- (void)setUpdateMethodFromString:(NSString*)aPropVal;
- (void)setRequiredObjectStatusFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadResultEntry : KalturaBulkUploadResult
@property (nonatomic,copy) NSString* entryId;
@property (nonatomic,copy) NSString* title;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,copy) NSString* tags;
@property (nonatomic,copy) NSString* url;
@property (nonatomic,copy) NSString* contentType;
@property (nonatomic,assign) int conversionProfileId;
@property (nonatomic,assign) int accessControlProfileId;
@property (nonatomic,copy) NSString* category;
@property (nonatomic,assign) int scheduleStartDate;
@property (nonatomic,assign) int scheduleEndDate;
@property (nonatomic,assign) int entryStatus;
@property (nonatomic,copy) NSString* thumbnailUrl;
@property (nonatomic,assign) KALTURA_BOOL thumbnailSaved;
@property (nonatomic,copy) NSString* sshPrivateKey;
@property (nonatomic,copy) NSString* sshPublicKey;
@property (nonatomic,copy) NSString* sshKeyPassphrase;
@property (nonatomic,copy) NSString* creatorId;
@property (nonatomic,copy) NSString* entitledUsersEdit;
@property (nonatomic,copy) NSString* entitledUsersPublish;
@property (nonatomic,copy) NSString* ownerId;
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfTitle;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfUrl;
- (KalturaFieldType)getTypeOfContentType;
- (KalturaFieldType)getTypeOfConversionProfileId;
- (KalturaFieldType)getTypeOfAccessControlProfileId;
- (KalturaFieldType)getTypeOfCategory;
- (KalturaFieldType)getTypeOfScheduleStartDate;
- (KalturaFieldType)getTypeOfScheduleEndDate;
- (KalturaFieldType)getTypeOfEntryStatus;
- (KalturaFieldType)getTypeOfThumbnailUrl;
- (KalturaFieldType)getTypeOfThumbnailSaved;
- (KalturaFieldType)getTypeOfSshPrivateKey;
- (KalturaFieldType)getTypeOfSshPublicKey;
- (KalturaFieldType)getTypeOfSshKeyPassphrase;
- (KalturaFieldType)getTypeOfCreatorId;
- (KalturaFieldType)getTypeOfEntitledUsersEdit;
- (KalturaFieldType)getTypeOfEntitledUsersPublish;
- (KalturaFieldType)getTypeOfOwnerId;
- (void)setConversionProfileIdFromString:(NSString*)aPropVal;
- (void)setAccessControlProfileIdFromString:(NSString*)aPropVal;
- (void)setScheduleStartDateFromString:(NSString*)aPropVal;
- (void)setScheduleEndDateFromString:(NSString*)aPropVal;
- (void)setEntryStatusFromString:(NSString*)aPropVal;
- (void)setThumbnailSavedFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadResultUser : KalturaBulkUploadResult
@property (nonatomic,copy) NSString* userId;
@property (nonatomic,copy) NSString* screenName;
@property (nonatomic,copy) NSString* email;
@property (nonatomic,copy) NSString* description;
@property (nonatomic,copy) NSString* tags;
@property (nonatomic,assign) int dateOfBirth;
@property (nonatomic,copy) NSString* country;
@property (nonatomic,copy) NSString* state;
@property (nonatomic,copy) NSString* city;
@property (nonatomic,copy) NSString* zip;
@property (nonatomic,assign) int gender;
@property (nonatomic,copy) NSString* firstName;
@property (nonatomic,copy) NSString* lastName;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfScreenName;
- (KalturaFieldType)getTypeOfEmail;
- (KalturaFieldType)getTypeOfDescription;
- (KalturaFieldType)getTypeOfTags;
- (KalturaFieldType)getTypeOfDateOfBirth;
- (KalturaFieldType)getTypeOfCountry;
- (KalturaFieldType)getTypeOfState;
- (KalturaFieldType)getTypeOfCity;
- (KalturaFieldType)getTypeOfZip;
- (KalturaFieldType)getTypeOfGender;
- (KalturaFieldType)getTypeOfFirstName;
- (KalturaFieldType)getTypeOfLastName;
- (void)setDateOfBirthFromString:(NSString*)aPropVal;
- (void)setGenderFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// This class represents object-specific data passed to the 
//  bulk upload job.
@interface KalturaBulkUploadUserData : KalturaBulkUploadObjectData
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCaptureThumbJobData : KalturaJobData
@property (nonatomic,copy) NSString* srcFileSyncLocalPath;
// The translated path as used by the scheduler
@property (nonatomic,copy) NSString* actualSrcFileSyncLocalPath;
@property (nonatomic,copy) NSString* srcFileSyncRemoteUrl;
@property (nonatomic,assign) int thumbParamsOutputId;
@property (nonatomic,copy) NSString* thumbAssetId;
@property (nonatomic,copy) NSString* srcAssetId;
@property (nonatomic,copy) NSString* srcAssetType;	// enum KalturaAssetType
@property (nonatomic,copy) NSString* thumbPath;
- (KalturaFieldType)getTypeOfSrcFileSyncLocalPath;
- (KalturaFieldType)getTypeOfActualSrcFileSyncLocalPath;
- (KalturaFieldType)getTypeOfSrcFileSyncRemoteUrl;
- (KalturaFieldType)getTypeOfThumbParamsOutputId;
- (KalturaFieldType)getTypeOfThumbAssetId;
- (KalturaFieldType)getTypeOfSrcAssetId;
- (KalturaFieldType)getTypeOfSrcAssetType;
- (KalturaFieldType)getTypeOfThumbPath;
- (void)setThumbParamsOutputIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,assign) int parentIdEqual;
@property (nonatomic,copy) NSString* parentIdIn;
@property (nonatomic,assign) int depthEqual;
@property (nonatomic,copy) NSString* fullNameEqual;
@property (nonatomic,copy) NSString* fullNameStartsWith;
@property (nonatomic,copy) NSString* fullNameIn;
@property (nonatomic,copy) NSString* fullIdsEqual;
@property (nonatomic,copy) NSString* fullIdsStartsWith;
@property (nonatomic,copy) NSString* fullIdsMatchOr;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
@property (nonatomic,copy) NSString* tagsLike;
@property (nonatomic,copy) NSString* tagsMultiLikeOr;
@property (nonatomic,copy) NSString* tagsMultiLikeAnd;
@property (nonatomic,assign) int appearInListEqual;	// enum KalturaAppearInListType
@property (nonatomic,assign) int privacyEqual;	// enum KalturaPrivacyType
@property (nonatomic,copy) NSString* privacyIn;
@property (nonatomic,assign) int inheritanceTypeEqual;	// enum KalturaInheritanceType
@property (nonatomic,copy) NSString* inheritanceTypeIn;
@property (nonatomic,copy) NSString* referenceIdEqual;
@property (nonatomic,assign) int referenceIdEmpty;	// enum KalturaNullableBoolean
@property (nonatomic,assign) int contributionPolicyEqual;	// enum KalturaContributionPolicyType
@property (nonatomic,assign) int membersCountGreaterThanOrEqual;
@property (nonatomic,assign) int membersCountLessThanOrEqual;
@property (nonatomic,assign) int pendingMembersCountGreaterThanOrEqual;
@property (nonatomic,assign) int pendingMembersCountLessThanOrEqual;
@property (nonatomic,copy) NSString* privacyContextEqual;
@property (nonatomic,assign) int statusEqual;	// enum KalturaCategoryStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,assign) int inheritedParentIdEqual;
@property (nonatomic,copy) NSString* inheritedParentIdIn;
@property (nonatomic,assign) int partnerSortValueGreaterThanOrEqual;
@property (nonatomic,assign) int partnerSortValueLessThanOrEqual;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfParentIdEqual;
- (KalturaFieldType)getTypeOfParentIdIn;
- (KalturaFieldType)getTypeOfDepthEqual;
- (KalturaFieldType)getTypeOfFullNameEqual;
- (KalturaFieldType)getTypeOfFullNameStartsWith;
- (KalturaFieldType)getTypeOfFullNameIn;
- (KalturaFieldType)getTypeOfFullIdsEqual;
- (KalturaFieldType)getTypeOfFullIdsStartsWith;
- (KalturaFieldType)getTypeOfFullIdsMatchOr;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfTagsLike;
- (KalturaFieldType)getTypeOfTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfAppearInListEqual;
- (KalturaFieldType)getTypeOfPrivacyEqual;
- (KalturaFieldType)getTypeOfPrivacyIn;
- (KalturaFieldType)getTypeOfInheritanceTypeEqual;
- (KalturaFieldType)getTypeOfInheritanceTypeIn;
- (KalturaFieldType)getTypeOfReferenceIdEqual;
- (KalturaFieldType)getTypeOfReferenceIdEmpty;
- (KalturaFieldType)getTypeOfContributionPolicyEqual;
- (KalturaFieldType)getTypeOfMembersCountGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfMembersCountLessThanOrEqual;
- (KalturaFieldType)getTypeOfPendingMembersCountGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfPendingMembersCountLessThanOrEqual;
- (KalturaFieldType)getTypeOfPrivacyContextEqual;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfInheritedParentIdEqual;
- (KalturaFieldType)getTypeOfInheritedParentIdIn;
- (KalturaFieldType)getTypeOfPartnerSortValueGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfPartnerSortValueLessThanOrEqual;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setParentIdEqualFromString:(NSString*)aPropVal;
- (void)setDepthEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setAppearInListEqualFromString:(NSString*)aPropVal;
- (void)setPrivacyEqualFromString:(NSString*)aPropVal;
- (void)setInheritanceTypeEqualFromString:(NSString*)aPropVal;
- (void)setReferenceIdEmptyFromString:(NSString*)aPropVal;
- (void)setContributionPolicyEqualFromString:(NSString*)aPropVal;
- (void)setMembersCountGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setMembersCountLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setPendingMembersCountGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setPendingMembersCountLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
- (void)setInheritedParentIdEqualFromString:(NSString*)aPropVal;
- (void)setPartnerSortValueGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setPartnerSortValueLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryEntryAdvancedFilter : KalturaSearchItem
@property (nonatomic,copy) NSString* categoriesMatchOr;
@property (nonatomic,copy) NSString* categoryEntryStatusIn;
@property (nonatomic,copy) NSString* orderBy;	// enum KalturaCategoryEntryAdvancedOrderBy
@property (nonatomic,assign) int categoryIdEqual;
- (KalturaFieldType)getTypeOfCategoriesMatchOr;
- (KalturaFieldType)getTypeOfCategoryEntryStatusIn;
- (KalturaFieldType)getTypeOfOrderBy;
- (KalturaFieldType)getTypeOfCategoryIdEqual;
- (void)setCategoryIdEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryEntryBaseFilter : KalturaFilter
@property (nonatomic,assign) int categoryIdEqual;
@property (nonatomic,copy) NSString* categoryIdIn;
@property (nonatomic,copy) NSString* entryIdEqual;
@property (nonatomic,copy) NSString* entryIdIn;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,copy) NSString* categoryFullIdsStartsWith;
@property (nonatomic,assign) int statusEqual;	// enum KalturaCategoryEntryStatus
@property (nonatomic,copy) NSString* statusIn;
- (KalturaFieldType)getTypeOfCategoryIdEqual;
- (KalturaFieldType)getTypeOfCategoryIdIn;
- (KalturaFieldType)getTypeOfEntryIdEqual;
- (KalturaFieldType)getTypeOfEntryIdIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfCategoryFullIdsStartsWith;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (void)setCategoryIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryIdentifier : KalturaObjectIdentifier
// Identifier of the object
@property (nonatomic,copy) NSString* identifier;	// enum KalturaCategoryIdentifierField
- (KalturaFieldType)getTypeOfIdentifier;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryUserAdvancedFilter : KalturaSearchItem
@property (nonatomic,copy) NSString* memberIdEq;
@property (nonatomic,copy) NSString* memberIdIn;
@property (nonatomic,copy) NSString* memberPermissionsMatchOr;
@property (nonatomic,copy) NSString* memberPermissionsMatchAnd;
- (KalturaFieldType)getTypeOfMemberIdEq;
- (KalturaFieldType)getTypeOfMemberIdIn;
- (KalturaFieldType)getTypeOfMemberPermissionsMatchOr;
- (KalturaFieldType)getTypeOfMemberPermissionsMatchAnd;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryUserBaseFilter : KalturaFilter
@property (nonatomic,assign) int categoryIdEqual;
@property (nonatomic,copy) NSString* categoryIdIn;
@property (nonatomic,copy) NSString* userIdEqual;
@property (nonatomic,copy) NSString* userIdIn;
@property (nonatomic,assign) int permissionLevelEqual;	// enum KalturaCategoryUserPermissionLevel
@property (nonatomic,copy) NSString* permissionLevelIn;
@property (nonatomic,assign) int statusEqual;	// enum KalturaCategoryUserStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
@property (nonatomic,assign) int updateMethodEqual;	// enum KalturaUpdateMethodType
@property (nonatomic,copy) NSString* updateMethodIn;
@property (nonatomic,copy) NSString* categoryFullIdsStartsWith;
@property (nonatomic,copy) NSString* categoryFullIdsEqual;
@property (nonatomic,copy) NSString* permissionNamesMatchAnd;
@property (nonatomic,copy) NSString* permissionNamesMatchOr;
@property (nonatomic,copy) NSString* permissionNamesNotContains;
- (KalturaFieldType)getTypeOfCategoryIdEqual;
- (KalturaFieldType)getTypeOfCategoryIdIn;
- (KalturaFieldType)getTypeOfUserIdEqual;
- (KalturaFieldType)getTypeOfUserIdIn;
- (KalturaFieldType)getTypeOfPermissionLevelEqual;
- (KalturaFieldType)getTypeOfPermissionLevelIn;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdateMethodEqual;
- (KalturaFieldType)getTypeOfUpdateMethodIn;
- (KalturaFieldType)getTypeOfCategoryFullIdsStartsWith;
- (KalturaFieldType)getTypeOfCategoryFullIdsEqual;
- (KalturaFieldType)getTypeOfPermissionNamesMatchAnd;
- (KalturaFieldType)getTypeOfPermissionNamesMatchOr;
- (KalturaFieldType)getTypeOfPermissionNamesNotContains;
- (void)setCategoryIdEqualFromString:(NSString*)aPropVal;
- (void)setPermissionLevelEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdateMethodEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// Clip operation attributes
@interface KalturaClipAttributes : KalturaOperationAttributes
// Offset in milliseconds
@property (nonatomic,assign) int offset;
// Duration in milliseconds
@property (nonatomic,assign) int duration;
- (KalturaFieldType)getTypeOfOffset;
- (KalturaFieldType)getTypeOfDuration;
- (void)setOffsetFromString:(NSString*)aPropVal;
- (void)setDurationFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCompareCondition : KalturaCondition
// Value to evaluate against the field and operator
@property (nonatomic,retain) KalturaIntegerValue* value;
// Comparing operator
@property (nonatomic,copy) NSString* comparison;	// enum KalturaSearchConditionComparison
- (KalturaFieldType)getTypeOfValue;
- (NSString*)getObjectTypeOfValue;
- (KalturaFieldType)getTypeOfComparison;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDataCenterContentResource : KalturaContentResource
@end

// @package Kaltura
// @subpackage Client
// Concat operation attributes
@interface KalturaConcatAttributes : KalturaOperationAttributes
// The resource to be concatenated
@property (nonatomic,retain) KalturaDataCenterContentResource* resource;
- (KalturaFieldType)getTypeOfResource;
- (NSString*)getObjectTypeOfResource;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConcatJobData : KalturaJobData
// Source files to be concatenated
@property (nonatomic,retain) NSMutableArray* srcFiles;	// of KalturaString elements
// Output file
@property (nonatomic,copy) NSString* destFilePath;
// Flavor asset to be ingested with the output
@property (nonatomic,copy) NSString* flavorAssetId;
// Clipping offset in seconds
@property (nonatomic,assign) double offset;
// Clipping duration in seconds
@property (nonatomic,assign) double duration;
- (KalturaFieldType)getTypeOfSrcFiles;
- (NSString*)getObjectTypeOfSrcFiles;
- (KalturaFieldType)getTypeOfDestFilePath;
- (KalturaFieldType)getTypeOfFlavorAssetId;
- (KalturaFieldType)getTypeOfOffset;
- (KalturaFieldType)getTypeOfDuration;
- (void)setOffsetFromString:(NSString*)aPropVal;
- (void)setDurationFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaControlPanelCommandBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int createdByIdEqual;
@property (nonatomic,assign) int typeEqual;	// enum KalturaControlPanelCommandType
@property (nonatomic,copy) NSString* typeIn;
@property (nonatomic,assign) int targetTypeEqual;	// enum KalturaControlPanelCommandTargetType
@property (nonatomic,copy) NSString* targetTypeIn;
@property (nonatomic,assign) int statusEqual;	// enum KalturaControlPanelCommandStatus
@property (nonatomic,copy) NSString* statusIn;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedByIdEqual;
- (KalturaFieldType)getTypeOfTypeEqual;
- (KalturaFieldType)getTypeOfTypeIn;
- (KalturaFieldType)getTypeOfTargetTypeEqual;
- (KalturaFieldType)getTypeOfTargetTypeIn;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedByIdEqualFromString:(NSString*)aPropVal;
- (void)setTypeEqualFromString:(NSString*)aPropVal;
- (void)setTargetTypeEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConvartableJobData : KalturaJobData
@property (nonatomic,copy) NSString* srcFileSyncLocalPath;
// The translated path as used by the scheduler
@property (nonatomic,copy) NSString* actualSrcFileSyncLocalPath;
@property (nonatomic,copy) NSString* srcFileSyncRemoteUrl;
@property (nonatomic,retain) NSMutableArray* srcFileSyncs;	// of KalturaSourceFileSyncDescriptor elements
@property (nonatomic,assign) int engineVersion;
@property (nonatomic,assign) int flavorParamsOutputId;
@property (nonatomic,retain) KalturaFlavorParamsOutput* flavorParamsOutput;
@property (nonatomic,assign) int mediaInfoId;
@property (nonatomic,assign) int currentOperationSet;
@property (nonatomic,assign) int currentOperationIndex;
@property (nonatomic,retain) NSMutableArray* pluginData;	// of KalturaKeyValue elements
- (KalturaFieldType)getTypeOfSrcFileSyncLocalPath;
- (KalturaFieldType)getTypeOfActualSrcFileSyncLocalPath;
- (KalturaFieldType)getTypeOfSrcFileSyncRemoteUrl;
- (KalturaFieldType)getTypeOfSrcFileSyncs;
- (NSString*)getObjectTypeOfSrcFileSyncs;
- (KalturaFieldType)getTypeOfEngineVersion;
- (KalturaFieldType)getTypeOfFlavorParamsOutputId;
- (KalturaFieldType)getTypeOfFlavorParamsOutput;
- (NSString*)getObjectTypeOfFlavorParamsOutput;
- (KalturaFieldType)getTypeOfMediaInfoId;
- (KalturaFieldType)getTypeOfCurrentOperationSet;
- (KalturaFieldType)getTypeOfCurrentOperationIndex;
- (KalturaFieldType)getTypeOfPluginData;
- (NSString*)getObjectTypeOfPluginData;
- (void)setEngineVersionFromString:(NSString*)aPropVal;
- (void)setFlavorParamsOutputIdFromString:(NSString*)aPropVal;
- (void)setMediaInfoIdFromString:(NSString*)aPropVal;
- (void)setCurrentOperationSetFromString:(NSString*)aPropVal;
- (void)setCurrentOperationIndexFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfileAssetParamsBaseFilter : KalturaFilter
@property (nonatomic,assign) int conversionProfileIdEqual;
@property (nonatomic,copy) NSString* conversionProfileIdIn;
@property (nonatomic,assign) int assetParamsIdEqual;
@property (nonatomic,copy) NSString* assetParamsIdIn;
@property (nonatomic,assign) int readyBehaviorEqual;	// enum KalturaFlavorReadyBehaviorType
@property (nonatomic,copy) NSString* readyBehaviorIn;
@property (nonatomic,assign) int originEqual;	// enum KalturaAssetParamsOrigin
@property (nonatomic,copy) NSString* originIn;
@property (nonatomic,copy) NSString* systemNameEqual;
@property (nonatomic,copy) NSString* systemNameIn;
- (KalturaFieldType)getTypeOfConversionProfileIdEqual;
- (KalturaFieldType)getTypeOfConversionProfileIdIn;
- (KalturaFieldType)getTypeOfAssetParamsIdEqual;
- (KalturaFieldType)getTypeOfAssetParamsIdIn;
- (KalturaFieldType)getTypeOfReadyBehaviorEqual;
- (KalturaFieldType)getTypeOfReadyBehaviorIn;
- (KalturaFieldType)getTypeOfOriginEqual;
- (KalturaFieldType)getTypeOfOriginIn;
- (KalturaFieldType)getTypeOfSystemNameEqual;
- (KalturaFieldType)getTypeOfSystemNameIn;
- (void)setConversionProfileIdEqualFromString:(NSString*)aPropVal;
- (void)setAssetParamsIdEqualFromString:(NSString*)aPropVal;
- (void)setReadyBehaviorEqualFromString:(NSString*)aPropVal;
- (void)setOriginEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfileBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,copy) NSString* statusEqual;	// enum KalturaConversionProfileStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,copy) NSString* typeEqual;	// enum KalturaConversionProfileType
@property (nonatomic,copy) NSString* typeIn;
@property (nonatomic,copy) NSString* nameEqual;
@property (nonatomic,copy) NSString* systemNameEqual;
@property (nonatomic,copy) NSString* systemNameIn;
@property (nonatomic,copy) NSString* tagsMultiLikeOr;
@property (nonatomic,copy) NSString* tagsMultiLikeAnd;
@property (nonatomic,copy) NSString* defaultEntryIdEqual;
@property (nonatomic,copy) NSString* defaultEntryIdIn;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfTypeEqual;
- (KalturaFieldType)getTypeOfTypeIn;
- (KalturaFieldType)getTypeOfNameEqual;
- (KalturaFieldType)getTypeOfSystemNameEqual;
- (KalturaFieldType)getTypeOfSystemNameIn;
- (KalturaFieldType)getTypeOfTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfDefaultEntryIdEqual;
- (KalturaFieldType)getTypeOfDefaultEntryIdIn;
- (void)setIdEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConvertLiveSegmentJobData : KalturaJobData
// Live stream entry id
@property (nonatomic,copy) NSString* entryId;
@property (nonatomic,copy) NSString* assetId;
// Primary or secondary media server
@property (nonatomic,assign) int mediaServerIndex;	// enum KalturaMediaServerIndex
// The index of the file within the entry
@property (nonatomic,assign) int fileIndex;
// The recorded live media
@property (nonatomic,copy) NSString* srcFilePath;
// The output file
@property (nonatomic,copy) NSString* destFilePath;
// Duration of the live entry including all recorded segments including the current
@property (nonatomic,assign) double endTime;
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfAssetId;
- (KalturaFieldType)getTypeOfMediaServerIndex;
- (KalturaFieldType)getTypeOfFileIndex;
- (KalturaFieldType)getTypeOfSrcFilePath;
- (KalturaFieldType)getTypeOfDestFilePath;
- (KalturaFieldType)getTypeOfEndTime;
- (void)setMediaServerIndexFromString:(NSString*)aPropVal;
- (void)setFileIndexFromString:(NSString*)aPropVal;
- (void)setEndTimeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConvertProfileJobData : KalturaJobData
@property (nonatomic,copy) NSString* inputFileSyncLocalPath;
// The height of last created thumbnail, will be used to comapare if this thumbnail is the best we can have
@property (nonatomic,assign) int thumbHeight;
// The bit rate of last created thumbnail, will be used to comapare if this thumbnail is the best we can have
@property (nonatomic,assign) int thumbBitrate;
- (KalturaFieldType)getTypeOfInputFileSyncLocalPath;
- (KalturaFieldType)getTypeOfThumbHeight;
- (KalturaFieldType)getTypeOfThumbBitrate;
- (void)setThumbHeightFromString:(NSString*)aPropVal;
- (void)setThumbBitrateFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCopyPartnerJobData : KalturaJobData
// Id of the partner to copy from
@property (nonatomic,assign) int fromPartnerId;
// Id of the partner to copy to
@property (nonatomic,assign) int toPartnerId;
- (KalturaFieldType)getTypeOfFromPartnerId;
- (KalturaFieldType)getTypeOfToPartnerId;
- (void)setFromPartnerIdFromString:(NSString*)aPropVal;
- (void)setToPartnerIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCountryRestriction : KalturaBaseRestriction
// Country restriction type (Allow or deny)
@property (nonatomic,assign) int countryRestrictionType;	// enum KalturaCountryRestrictionType
// Comma separated list of country codes to allow to deny
@property (nonatomic,copy) NSString* countryList;
- (KalturaFieldType)getTypeOfCountryRestrictionType;
- (KalturaFieldType)getTypeOfCountryList;
- (void)setCountryRestrictionTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeleteFileJobData : KalturaJobData
@property (nonatomic,copy) NSString* localFileSyncPath;
- (KalturaFieldType)getTypeOfLocalFileSyncPath;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeleteJobData : KalturaJobData
// The filter should return the list of objects that need to be deleted.
@property (nonatomic,retain) KalturaFilter* filter;
- (KalturaFieldType)getTypeOfFilter;
- (NSString*)getObjectTypeOfFilter;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiAppleHttpManifest : KalturaDeliveryProfile
// Should we use timing parameters - clipTo / seekFrom
@property (nonatomic,assign) KALTURA_BOOL supportClipping;
- (KalturaFieldType)getTypeOfSupportClipping;
- (void)setSupportClippingFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiHds : KalturaDeliveryProfile
// Should we use timing parameters - clipTo / seekFrom
@property (nonatomic,assign) KALTURA_BOOL supportClipping;
- (KalturaFieldType)getTypeOfSupportClipping;
- (void)setSupportClippingFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiHttp : KalturaDeliveryProfile
// Should we use intelliseek
@property (nonatomic,assign) KALTURA_BOOL useIntelliseek;
- (KalturaFieldType)getTypeOfUseIntelliseek;
- (void)setUseIntelliseekFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* partnerIdIn;
@property (nonatomic,copy) NSString* systemNameEqual;
@property (nonatomic,copy) NSString* systemNameIn;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
@property (nonatomic,copy) NSString* streamerTypeEqual;	// enum KalturaPlaybackProtocol
@property (nonatomic,assign) int statusEqual;	// enum KalturaDeliveryStatus
@property (nonatomic,copy) NSString* statusIn;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdIn;
- (KalturaFieldType)getTypeOfSystemNameEqual;
- (KalturaFieldType)getTypeOfSystemNameIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfStreamerTypeEqual;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericAppleHttp : KalturaDeliveryProfile
@property (nonatomic,copy) NSString* pattern;
// rendererClass
@property (nonatomic,copy) NSString* rendererClass;
// Enable to make playManifest redirect to the domain of the delivery profile
@property (nonatomic,assign) int manifestRedirect;	// enum KalturaNullableBoolean
- (KalturaFieldType)getTypeOfPattern;
- (KalturaFieldType)getTypeOfRendererClass;
- (KalturaFieldType)getTypeOfManifestRedirect;
- (void)setManifestRedirectFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericHds : KalturaDeliveryProfile
@property (nonatomic,copy) NSString* pattern;
// rendererClass
@property (nonatomic,copy) NSString* rendererClass;
- (KalturaFieldType)getTypeOfPattern;
- (KalturaFieldType)getTypeOfRendererClass;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericHttp : KalturaDeliveryProfile
@property (nonatomic,copy) NSString* pattern;
- (KalturaFieldType)getTypeOfPattern;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericSilverLight : KalturaDeliveryProfile
@property (nonatomic,copy) NSString* pattern;
- (KalturaFieldType)getTypeOfPattern;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileLiveAppleHttp : KalturaDeliveryProfile
@property (nonatomic,assign) KALTURA_BOOL disableExtraAttributes;
@property (nonatomic,assign) KALTURA_BOOL forceProxy;
- (KalturaFieldType)getTypeOfDisableExtraAttributes;
- (KalturaFieldType)getTypeOfForceProxy;
- (void)setDisableExtraAttributesFromString:(NSString*)aPropVal;
- (void)setForceProxyFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileRtmp : KalturaDeliveryProfile
// enforceRtmpe
@property (nonatomic,assign) KALTURA_BOOL enforceRtmpe;
// a prefix that is added to all stream urls (replaces storageProfile::rtmpPrefix)
@property (nonatomic,copy) NSString* prefix;
- (KalturaFieldType)getTypeOfEnforceRtmpe;
- (KalturaFieldType)getTypeOfPrefix;
- (void)setEnforceRtmpeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDirectoryRestriction : KalturaBaseRestriction
// Kaltura directory restriction type
@property (nonatomic,assign) int directoryRestrictionType;	// enum KalturaDirectoryRestrictionType
- (KalturaFieldType)getTypeOfDirectoryRestrictionType;
- (void)setDirectoryRestrictionTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryUserFilter : KalturaCategoryUserBaseFilter
// Return the list of categoryUser that are not inherited from parent category - only the direct categoryUsers.
@property (nonatomic,assign) KALTURA_BOOL categoryDirectMembers;
// Free text search on user id or screen name
@property (nonatomic,copy) NSString* freeText;
- (KalturaFieldType)getTypeOfCategoryDirectMembers;
- (KalturaFieldType)getTypeOfFreeText;
- (void)setCategoryDirectMembersFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserBaseFilter : KalturaFilter
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* screenNameLike;
@property (nonatomic,copy) NSString* screenNameStartsWith;
@property (nonatomic,copy) NSString* emailLike;
@property (nonatomic,copy) NSString* emailStartsWith;
@property (nonatomic,copy) NSString* tagsMultiLikeOr;
@property (nonatomic,copy) NSString* tagsMultiLikeAnd;
@property (nonatomic,assign) int statusEqual;	// enum KalturaUserStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,copy) NSString* firstNameStartsWith;
@property (nonatomic,copy) NSString* lastNameStartsWith;
@property (nonatomic,assign) int isAdminEqual;	// enum KalturaNullableBoolean
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfScreenNameLike;
- (KalturaFieldType)getTypeOfScreenNameStartsWith;
- (KalturaFieldType)getTypeOfEmailLike;
- (KalturaFieldType)getTypeOfEmailStartsWith;
- (KalturaFieldType)getTypeOfTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfFirstNameStartsWith;
- (KalturaFieldType)getTypeOfLastNameStartsWith;
- (KalturaFieldType)getTypeOfIsAdminEqual;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setIsAdminEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserFilter : KalturaUserBaseFilter
@property (nonatomic,copy) NSString* idOrScreenNameStartsWith;
@property (nonatomic,copy) NSString* idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,assign) int loginEnabledEqual;	// enum KalturaNullableBoolean
@property (nonatomic,copy) NSString* roleIdEqual;
@property (nonatomic,copy) NSString* roleIdsEqual;
@property (nonatomic,copy) NSString* roleIdsIn;
@property (nonatomic,copy) NSString* firstNameOrLastNameStartsWith;
// Permission names filter expression
@property (nonatomic,copy) NSString* permissionNamesMultiLikeOr;
// Permission names filter expression
@property (nonatomic,copy) NSString* permissionNamesMultiLikeAnd;
- (KalturaFieldType)getTypeOfIdOrScreenNameStartsWith;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfLoginEnabledEqual;
- (KalturaFieldType)getTypeOfRoleIdEqual;
- (KalturaFieldType)getTypeOfRoleIdsEqual;
- (KalturaFieldType)getTypeOfRoleIdsIn;
- (KalturaFieldType)getTypeOfFirstNameOrLastNameStartsWith;
- (KalturaFieldType)getTypeOfPermissionNamesMultiLikeOr;
- (KalturaFieldType)getTypeOfPermissionNamesMultiLikeAnd;
- (void)setLoginEnabledEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEntryContext : KalturaContext
// The entry ID in the context of which the playlist should be built
@property (nonatomic,copy) NSString* entryId;
// Is this a redirected entry followup?
@property (nonatomic,assign) int followEntryRedirect;	// enum KalturaNullableBoolean
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfFollowEntryRedirect;
- (void)setFollowEntryRedirectFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// Object which contains contextual entry-related data.
@interface KalturaEntryContextDataParams : KalturaAccessControlScope
// Id of the current flavor.
@property (nonatomic,copy) NSString* flavorAssetId;
// The tags of the flavors that should be used for playback.
@property (nonatomic,copy) NSString* flavorTags;
// Playback streamer type: RTMP, HTTP, appleHttps, rtsp, sl.
@property (nonatomic,copy) NSString* streamerType;
// Protocol of the specific media object.
@property (nonatomic,copy) NSString* mediaProtocol;
- (KalturaFieldType)getTypeOfFlavorAssetId;
- (KalturaFieldType)getTypeOfFlavorTags;
- (KalturaFieldType)getTypeOfStreamerType;
- (KalturaFieldType)getTypeOfMediaProtocol;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEntryContextDataResult : KalturaContextDataResult
@property (nonatomic,assign) KALTURA_BOOL isSiteRestricted;
@property (nonatomic,assign) KALTURA_BOOL isCountryRestricted;
@property (nonatomic,assign) KALTURA_BOOL isSessionRestricted;
@property (nonatomic,assign) KALTURA_BOOL isIpAddressRestricted;
@property (nonatomic,assign) KALTURA_BOOL isUserAgentRestricted;
@property (nonatomic,assign) int previewLength;
@property (nonatomic,assign) KALTURA_BOOL isScheduledNow;
@property (nonatomic,assign) KALTURA_BOOL isAdmin;
// http/rtmp/hdnetwork
@property (nonatomic,copy) NSString* streamerType;
// http/https, rtmp/rtmpe
@property (nonatomic,copy) NSString* mediaProtocol;
@property (nonatomic,copy) NSString* storageProfilesXML;
// Array of messages as received from the access control rules that invalidated
@property (nonatomic,retain) NSMutableArray* accessControlMessages;	// of KalturaString elements
// Array of actions as received from the access control rules that invalidated
@property (nonatomic,retain) NSMutableArray* accessControlActions;	// of KalturaRuleAction elements
// Array of allowed flavor assets according to access control limitations and requested tags
@property (nonatomic,retain) NSMutableArray* flavorAssets;	// of KalturaFlavorAsset elements
- (KalturaFieldType)getTypeOfIsSiteRestricted;
- (KalturaFieldType)getTypeOfIsCountryRestricted;
- (KalturaFieldType)getTypeOfIsSessionRestricted;
- (KalturaFieldType)getTypeOfIsIpAddressRestricted;
- (KalturaFieldType)getTypeOfIsUserAgentRestricted;
- (KalturaFieldType)getTypeOfPreviewLength;
- (KalturaFieldType)getTypeOfIsScheduledNow;
- (KalturaFieldType)getTypeOfIsAdmin;
- (KalturaFieldType)getTypeOfStreamerType;
- (KalturaFieldType)getTypeOfMediaProtocol;
- (KalturaFieldType)getTypeOfStorageProfilesXML;
- (KalturaFieldType)getTypeOfAccessControlMessages;
- (NSString*)getObjectTypeOfAccessControlMessages;
- (KalturaFieldType)getTypeOfAccessControlActions;
- (NSString*)getObjectTypeOfAccessControlActions;
- (KalturaFieldType)getTypeOfFlavorAssets;
- (NSString*)getObjectTypeOfFlavorAssets;
- (void)setIsSiteRestrictedFromString:(NSString*)aPropVal;
- (void)setIsCountryRestrictedFromString:(NSString*)aPropVal;
- (void)setIsSessionRestrictedFromString:(NSString*)aPropVal;
- (void)setIsIpAddressRestrictedFromString:(NSString*)aPropVal;
- (void)setIsUserAgentRestrictedFromString:(NSString*)aPropVal;
- (void)setPreviewLengthFromString:(NSString*)aPropVal;
- (void)setIsScheduledNowFromString:(NSString*)aPropVal;
- (void)setIsAdminFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEntryCuePointSearchFilter : KalturaSearchItem
@property (nonatomic,copy) NSString* cuePointsFreeText;
@property (nonatomic,copy) NSString* cuePointTypeIn;
@property (nonatomic,assign) int cuePointSubTypeEqual;
- (KalturaFieldType)getTypeOfCuePointsFreeText;
- (KalturaFieldType)getTypeOfCuePointTypeIn;
- (KalturaFieldType)getTypeOfCuePointSubTypeEqual;
- (void)setCuePointSubTypeEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEntryIdentifier : KalturaObjectIdentifier
// Identifier of the object
@property (nonatomic,copy) NSString* identifier;	// enum KalturaEntryIdentifierField
- (KalturaFieldType)getTypeOfIdentifier;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEntryLiveStats : KalturaLiveStats
@property (nonatomic,copy) NSString* entryId;
@property (nonatomic,assign) int peakAudience;
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfPeakAudience;
- (void)setPeakAudienceFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// A boolean representation to return evaluated dynamic value
@interface KalturaBooleanField : KalturaBooleanValue
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFileAssetBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* fileAssetObjectTypeEqual;	// enum KalturaFileAssetObjectType
@property (nonatomic,copy) NSString* objectIdEqual;
@property (nonatomic,copy) NSString* objectIdIn;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
@property (nonatomic,copy) NSString* statusEqual;	// enum KalturaFileAssetStatus
@property (nonatomic,copy) NSString* statusIn;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfFileAssetObjectTypeEqual;
- (KalturaFieldType)getTypeOfObjectIdEqual;
- (KalturaFieldType)getTypeOfObjectIdIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlattenJobData : KalturaJobData
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGenericSyndicationFeed : KalturaBaseSyndicationFeed
// feed description
@property (nonatomic,copy) NSString* feedDescription;
// feed landing page (i.e publisher website)
@property (nonatomic,copy) NSString* feedLandingPage;
- (KalturaFieldType)getTypeOfFeedDescription;
- (KalturaFieldType)getTypeOfFeedLandingPage;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGoogleVideoSyndicationFeed : KalturaBaseSyndicationFeed
@property (nonatomic,copy) NSString* adultContent;	// enum KalturaGoogleSyndicationFeedAdultValues
- (KalturaFieldType)getTypeOfAdultContent;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaITunesSyndicationFeed : KalturaBaseSyndicationFeed
// feed description
@property (nonatomic,copy) NSString* feedDescription;
// feed language
@property (nonatomic,copy) NSString* language;
// feed landing page (i.e publisher website)
@property (nonatomic,copy) NSString* feedLandingPage;
// author/publisher name
@property (nonatomic,copy) NSString* ownerName;
// publisher email
@property (nonatomic,copy) NSString* ownerEmail;
// podcast thumbnail
@property (nonatomic,copy) NSString* feedImageUrl;
@property (nonatomic,copy,readonly) NSString* category;	// enum KalturaITunesSyndicationFeedCategories
@property (nonatomic,copy) NSString* adultContent;	// enum KalturaITunesSyndicationFeedAdultValues
@property (nonatomic,copy) NSString* feedAuthor;
// true in case you want to enfore the palylist order on the
@property (nonatomic,assign) int enforceOrder;	// enum KalturaNullableBoolean
- (KalturaFieldType)getTypeOfFeedDescription;
- (KalturaFieldType)getTypeOfLanguage;
- (KalturaFieldType)getTypeOfFeedLandingPage;
- (KalturaFieldType)getTypeOfOwnerName;
- (KalturaFieldType)getTypeOfOwnerEmail;
- (KalturaFieldType)getTypeOfFeedImageUrl;
- (KalturaFieldType)getTypeOfCategory;
- (KalturaFieldType)getTypeOfAdultContent;
- (KalturaFieldType)getTypeOfFeedAuthor;
- (KalturaFieldType)getTypeOfEnforceOrder;
- (void)setEnforceOrderFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaImportJobData : KalturaJobData
@property (nonatomic,copy) NSString* srcFileUrl;
@property (nonatomic,copy) NSString* destFileLocalPath;
@property (nonatomic,copy) NSString* flavorAssetId;
@property (nonatomic,assign) int fileSize;
- (KalturaFieldType)getTypeOfSrcFileUrl;
- (KalturaFieldType)getTypeOfDestFileLocalPath;
- (KalturaFieldType)getTypeOfFlavorAssetId;
- (KalturaFieldType)getTypeOfFileSize;
- (void)setFileSizeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaIndexAdvancedFilter : KalturaSearchItem
@property (nonatomic,assign) int indexIdGreaterThan;
- (KalturaFieldType)getTypeOfIndexIdGreaterThan;
- (void)setIndexIdGreaterThanFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaIndexJobData : KalturaJobData
// The filter should return the list of objects that need to be reindexed.
@property (nonatomic,retain) KalturaFilter* filter;
// Indicates the last id that reindexed, used when the batch crached, to re-run from the last crash point.
@property (nonatomic,assign) int lastIndexId;
// Indicates that the object columns and attributes values should be recalculated before reindexed.
@property (nonatomic,assign) KALTURA_BOOL shouldUpdate;
- (KalturaFieldType)getTypeOfFilter;
- (NSString*)getObjectTypeOfFilter;
- (KalturaFieldType)getTypeOfLastIndexId;
- (KalturaFieldType)getTypeOfShouldUpdate;
- (void)setLastIndexIdFromString:(NSString*)aPropVal;
- (void)setShouldUpdateFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaIpAddressRestriction : KalturaBaseRestriction
// Ip address restriction type (Allow or deny)
@property (nonatomic,assign) int ipAddressRestrictionType;	// enum KalturaIpAddressRestrictionType
// Comma separated list of ip address to allow to deny
@property (nonatomic,copy) NSString* ipAddressList;
- (KalturaFieldType)getTypeOfIpAddressRestrictionType;
- (KalturaFieldType)getTypeOfIpAddressList;
- (void)setIpAddressRestrictionTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLimitFlavorsRestriction : KalturaBaseRestriction
// Limit flavors restriction type (Allow or deny)
@property (nonatomic,assign) int limitFlavorsRestrictionType;	// enum KalturaLimitFlavorsRestrictionType
// Comma separated list of flavor params ids to allow to deny
@property (nonatomic,copy) NSString* flavorParamsIds;
- (KalturaFieldType)getTypeOfLimitFlavorsRestrictionType;
- (KalturaFieldType)getTypeOfFlavorParamsIds;
- (void)setLimitFlavorsRestrictionTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannelSegmentBaseFilter : KalturaFilter
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
@property (nonatomic,copy) NSString* statusEqual;	// enum KalturaLiveChannelSegmentStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,copy) NSString* channelIdEqual;
@property (nonatomic,copy) NSString* channelIdIn;
@property (nonatomic,assign) double startTimeGreaterThanOrEqual;
@property (nonatomic,assign) double startTimeLessThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfChannelIdEqual;
- (KalturaFieldType)getTypeOfChannelIdIn;
- (KalturaFieldType)getTypeOfStartTimeGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfStartTimeLessThanOrEqual;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setStartTimeGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setStartTimeLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveReportExportJobData : KalturaJobData
@property (nonatomic,assign) int timeReference;
@property (nonatomic,assign) int timeZoneOffset;
@property (nonatomic,copy) NSString* entryIds;
@property (nonatomic,copy) NSString* outputPath;
@property (nonatomic,copy) NSString* recipientEmail;
- (KalturaFieldType)getTypeOfTimeReference;
- (KalturaFieldType)getTypeOfTimeZoneOffset;
- (KalturaFieldType)getTypeOfEntryIds;
- (KalturaFieldType)getTypeOfOutputPath;
- (KalturaFieldType)getTypeOfRecipientEmail;
- (void)setTimeReferenceFromString:(NSString*)aPropVal;
- (void)setTimeZoneOffsetFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
// A representation of an RTMP live stream configuration
@interface KalturaLiveStreamPushPublishRTMPConfiguration : KalturaLiveStreamPushPublishConfiguration
@property (nonatomic,copy) NSString* userId;
@property (nonatomic,copy) NSString* password;
@property (nonatomic,copy) NSString* streamName;
@property (nonatomic,copy) NSString* applicationName;
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfPassword;
- (KalturaFieldType)getTypeOfStreamName;
- (KalturaFieldType)getTypeOfApplicationName;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMailJobData : KalturaJobData
@property (nonatomic,copy) NSString* mailType;	// enum KalturaMailType
@property (nonatomic,assign) int mailPriority;
@property (nonatomic,assign) int status;	// enum KalturaMailJobStatus
@property (nonatomic,copy) NSString* recipientName;
@property (nonatomic,copy) NSString* recipientEmail;
// kuserId
@property (nonatomic,assign) int recipientId;
@property (nonatomic,copy) NSString* fromName;
@property (nonatomic,copy) NSString* fromEmail;
@property (nonatomic,copy) NSString* bodyParams;
@property (nonatomic,copy) NSString* subjectParams;
@property (nonatomic,copy) NSString* templatePath;
@property (nonatomic,copy) NSString* language;	// enum KalturaLanguageCode
@property (nonatomic,assign) int campaignId;
@property (nonatomic,assign) int minSendDate;
@property (nonatomic,assign) KALTURA_BOOL isHtml;
@property (nonatomic,copy) NSString* separator;
- (KalturaFieldType)getTypeOfMailType;
- (KalturaFieldType)getTypeOfMailPriority;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfRecipientName;
- (KalturaFieldType)getTypeOfRecipientEmail;
- (KalturaFieldType)getTypeOfRecipientId;
- (KalturaFieldType)getTypeOfFromName;
- (KalturaFieldType)getTypeOfFromEmail;
- (KalturaFieldType)getTypeOfBodyParams;
- (KalturaFieldType)getTypeOfSubjectParams;
- (KalturaFieldType)getTypeOfTemplatePath;
- (KalturaFieldType)getTypeOfLanguage;
- (KalturaFieldType)getTypeOfCampaignId;
- (KalturaFieldType)getTypeOfMinSendDate;
- (KalturaFieldType)getTypeOfIsHtml;
- (KalturaFieldType)getTypeOfSeparator;
- (void)setMailPriorityFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setRecipientIdFromString:(NSString*)aPropVal;
- (void)setCampaignIdFromString:(NSString*)aPropVal;
- (void)setMinSendDateFromString:(NSString*)aPropVal;
- (void)setIsHtmlFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMatchCondition : KalturaCondition
@property (nonatomic,retain) NSMutableArray* values;	// of KalturaStringValue elements
- (KalturaFieldType)getTypeOfValues;
- (NSString*)getObjectTypeOfValues;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaInfoBaseFilter : KalturaFilter
@property (nonatomic,copy) NSString* flavorAssetIdEqual;
- (KalturaFieldType)getTypeOfFlavorAssetIdEqual;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaServerBaseFilter : KalturaFilter
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMoveCategoryEntriesJobData : KalturaJobData
// Source category id
@property (nonatomic,assign) int srcCategoryId;
// Destination category id
@property (nonatomic,assign) int destCategoryId;
// Saves the last category id that its entries moved completely
//      In case of crash the batch will restart from that point
@property (nonatomic,assign) int lastMovedCategoryId;
// Saves the last page index of the child categories filter pager
//      In case of crash the batch will restart from that point
@property (nonatomic,assign) int lastMovedCategoryPageIndex;
// Saves the last page index of the category entries filter pager
//      In case of crash the batch will restart from that point
@property (nonatomic,assign) int lastMovedCategoryEntryPageIndex;
// All entries from all child categories will be moved as well
@property (nonatomic,assign) KALTURA_BOOL moveFromChildren;
// Entries won't be deleted from the source entry
@property (nonatomic,assign) KALTURA_BOOL acopyOnly;
// Destination categories fallback ids
@property (nonatomic,copy) NSString* destCategoryFullIds;
- (KalturaFieldType)getTypeOfSrcCategoryId;
- (KalturaFieldType)getTypeOfDestCategoryId;
- (KalturaFieldType)getTypeOfLastMovedCategoryId;
- (KalturaFieldType)getTypeOfLastMovedCategoryPageIndex;
- (KalturaFieldType)getTypeOfLastMovedCategoryEntryPageIndex;
- (KalturaFieldType)getTypeOfMoveFromChildren;
- (KalturaFieldType)getTypeOfCopyOnly;
- (KalturaFieldType)getTypeOfDestCategoryFullIds;
- (void)setSrcCategoryIdFromString:(NSString*)aPropVal;
- (void)setDestCategoryIdFromString:(NSString*)aPropVal;
- (void)setLastMovedCategoryIdFromString:(NSString*)aPropVal;
- (void)setLastMovedCategoryPageIndexFromString:(NSString*)aPropVal;
- (void)setLastMovedCategoryEntryPageIndexFromString:(NSString*)aPropVal;
- (void)setMoveFromChildrenFromString:(NSString*)aPropVal;
- (void)setCopyOnlyFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaNotificationJobData : KalturaJobData
@property (nonatomic,copy) NSString* userId;
@property (nonatomic,assign) int type;	// enum KalturaNotificationType
@property (nonatomic,copy) NSString* typeAsString;
@property (nonatomic,copy) NSString* objectId;
@property (nonatomic,assign) int status;	// enum KalturaNotificationStatus
@property (nonatomic,copy) NSString* data;
@property (nonatomic,assign) int numberOfAttempts;
@property (nonatomic,copy) NSString* notificationResult;
@property (nonatomic,assign) int objType;	// enum KalturaNotificationObjectType
- (KalturaFieldType)getTypeOfUserId;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfTypeAsString;
- (KalturaFieldType)getTypeOfObjectId;
- (KalturaFieldType)getTypeOfStatus;
- (KalturaFieldType)getTypeOfData;
- (KalturaFieldType)getTypeOfNumberOfAttempts;
- (KalturaFieldType)getTypeOfNotificationResult;
- (KalturaFieldType)getTypeOfObjType;
- (void)setTypeFromString:(NSString*)aPropVal;
- (void)setStatusFromString:(NSString*)aPropVal;
- (void)setNumberOfAttemptsFromString:(NSString*)aPropVal;
- (void)setObjTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPartnerBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,copy) NSString* idNotIn;
@property (nonatomic,copy) NSString* nameLike;
@property (nonatomic,copy) NSString* nameMultiLikeOr;
@property (nonatomic,copy) NSString* nameMultiLikeAnd;
@property (nonatomic,copy) NSString* nameEqual;
@property (nonatomic,assign) int statusEqual;	// enum KalturaPartnerStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,assign) int partnerPackageEqual;
@property (nonatomic,assign) int partnerPackageGreaterThanOrEqual;
@property (nonatomic,assign) int partnerPackageLessThanOrEqual;
@property (nonatomic,assign) int partnerGroupTypeEqual;	// enum KalturaPartnerGroupType
@property (nonatomic,copy) NSString* partnerNameDescriptionWebsiteAdminNameAdminEmailLike;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfIdNotIn;
- (KalturaFieldType)getTypeOfNameLike;
- (KalturaFieldType)getTypeOfNameMultiLikeOr;
- (KalturaFieldType)getTypeOfNameMultiLikeAnd;
- (KalturaFieldType)getTypeOfNameEqual;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfPartnerPackageEqual;
- (KalturaFieldType)getTypeOfPartnerPackageGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfPartnerPackageLessThanOrEqual;
- (KalturaFieldType)getTypeOfPartnerGroupTypeEqual;
- (KalturaFieldType)getTypeOfPartnerNameDescriptionWebsiteAdminNameAdminEmailLike;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
- (void)setPartnerPackageEqualFromString:(NSString*)aPropVal;
- (void)setPartnerPackageGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setPartnerPackageLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setPartnerGroupTypeEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,assign) int typeEqual;	// enum KalturaPermissionType
@property (nonatomic,copy) NSString* typeIn;
@property (nonatomic,copy) NSString* nameEqual;
@property (nonatomic,copy) NSString* nameIn;
@property (nonatomic,copy) NSString* friendlyNameLike;
@property (nonatomic,copy) NSString* descriptionLike;
@property (nonatomic,assign) int statusEqual;	// enum KalturaPermissionStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* partnerIdIn;
@property (nonatomic,copy) NSString* dependsOnPermissionNamesMultiLikeOr;
@property (nonatomic,copy) NSString* dependsOnPermissionNamesMultiLikeAnd;
@property (nonatomic,copy) NSString* tagsMultiLikeOr;
@property (nonatomic,copy) NSString* tagsMultiLikeAnd;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfTypeEqual;
- (KalturaFieldType)getTypeOfTypeIn;
- (KalturaFieldType)getTypeOfNameEqual;
- (KalturaFieldType)getTypeOfNameIn;
- (KalturaFieldType)getTypeOfFriendlyNameLike;
- (KalturaFieldType)getTypeOfDescriptionLike;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdIn;
- (KalturaFieldType)getTypeOfDependsOnPermissionNamesMultiLikeOr;
- (KalturaFieldType)getTypeOfDependsOnPermissionNamesMultiLikeAnd;
- (KalturaFieldType)getTypeOfTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setTypeEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionItemBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,copy) NSString* typeEqual;	// enum KalturaPermissionItemType
@property (nonatomic,copy) NSString* typeIn;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* partnerIdIn;
@property (nonatomic,copy) NSString* tagsMultiLikeOr;
@property (nonatomic,copy) NSString* tagsMultiLikeAnd;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfTypeEqual;
- (KalturaFieldType)getTypeOfTypeIn;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdIn;
- (KalturaFieldType)getTypeOfTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaProvisionJobData : KalturaJobData
@property (nonatomic,copy) NSString* streamID;
@property (nonatomic,copy) NSString* backupStreamID;
@property (nonatomic,copy) NSString* rtmp;
@property (nonatomic,copy) NSString* encoderIP;
@property (nonatomic,copy) NSString* backupEncoderIP;
@property (nonatomic,copy) NSString* encoderPassword;
@property (nonatomic,copy) NSString* encoderUsername;
@property (nonatomic,assign) int endDate;
@property (nonatomic,copy) NSString* returnVal;
@property (nonatomic,assign) int mediaType;
@property (nonatomic,copy) NSString* primaryBroadcastingUrl;
@property (nonatomic,copy) NSString* secondaryBroadcastingUrl;
@property (nonatomic,copy) NSString* streamName;
- (KalturaFieldType)getTypeOfStreamID;
- (KalturaFieldType)getTypeOfBackupStreamID;
- (KalturaFieldType)getTypeOfRtmp;
- (KalturaFieldType)getTypeOfEncoderIP;
- (KalturaFieldType)getTypeOfBackupEncoderIP;
- (KalturaFieldType)getTypeOfEncoderPassword;
- (KalturaFieldType)getTypeOfEncoderUsername;
- (KalturaFieldType)getTypeOfEndDate;
- (KalturaFieldType)getTypeOfReturnVal;
- (KalturaFieldType)getTypeOfMediaType;
- (KalturaFieldType)getTypeOfPrimaryBroadcastingUrl;
- (KalturaFieldType)getTypeOfSecondaryBroadcastingUrl;
- (KalturaFieldType)getTypeOfStreamName;
- (void)setEndDateFromString:(NSString*)aPropVal;
- (void)setMediaTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* partnerIdIn;
@property (nonatomic,copy) NSString* systemNameEqual;
@property (nonatomic,copy) NSString* systemNameIn;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdIn;
- (KalturaFieldType)getTypeOfSystemNameEqual;
- (KalturaFieldType)getTypeOfSystemNameIn;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportInputFilter : KalturaReportInputBaseFilter
// Search keywords to filter objects
@property (nonatomic,copy) NSString* keywords;
// Search keywords in onjects tags
@property (nonatomic,assign) KALTURA_BOOL searchInTags;
// Search keywords in onjects admin tags
@property (nonatomic,assign) KALTURA_BOOL searchInAdminTags;
// Search onjects in specified categories
@property (nonatomic,copy) NSString* categories;
// Time zone offset in minutes
@property (nonatomic,assign) int timeZoneOffset;
// Aggregated results according to interval
@property (nonatomic,copy) NSString* interval;	// enum KalturaReportInterval
- (KalturaFieldType)getTypeOfKeywords;
- (KalturaFieldType)getTypeOfSearchInTags;
- (KalturaFieldType)getTypeOfSearchInAdminTags;
- (KalturaFieldType)getTypeOfCategories;
- (KalturaFieldType)getTypeOfTimeZoneOffset;
- (KalturaFieldType)getTypeOfInterval;
- (void)setSearchInTagsFromString:(NSString*)aPropVal;
- (void)setSearchInAdminTagsFromString:(NSString*)aPropVal;
- (void)setTimeZoneOffsetFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSearchCondition : KalturaSearchItem
@property (nonatomic,copy) NSString* field;
@property (nonatomic,copy) NSString* value;
- (KalturaFieldType)getTypeOfField;
- (KalturaFieldType)getTypeOfValue;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSearchOperator : KalturaSearchItem
@property (nonatomic,assign) int type;	// enum KalturaSearchOperatorType
@property (nonatomic,retain) NSMutableArray* items;	// of KalturaSearchItem elements
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfItems;
- (NSString*)getObjectTypeOfItems;
- (void)setTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSessionRestriction : KalturaBaseRestriction
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSiteRestriction : KalturaBaseRestriction
// The site restriction type (allow or deny)
@property (nonatomic,assign) int siteRestrictionType;	// enum KalturaSiteRestrictionType
// Comma separated list of sites (domains) to allow or deny
@property (nonatomic,copy) NSString* siteList;
- (KalturaFieldType)getTypeOfSiteRestrictionType;
- (KalturaFieldType)getTypeOfSiteList;
- (void)setSiteRestrictionTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageAddAction : KalturaRuleAction
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageJobData : KalturaJobData
@property (nonatomic,copy) NSString* serverUrl;
@property (nonatomic,copy) NSString* serverUsername;
@property (nonatomic,copy) NSString* serverPassword;
@property (nonatomic,assign) KALTURA_BOOL ftpPassiveMode;
@property (nonatomic,copy) NSString* srcFileSyncLocalPath;
@property (nonatomic,copy) NSString* srcFileSyncId;
@property (nonatomic,copy) NSString* destFileSyncStoredPath;
- (KalturaFieldType)getTypeOfServerUrl;
- (KalturaFieldType)getTypeOfServerUsername;
- (KalturaFieldType)getTypeOfServerPassword;
- (KalturaFieldType)getTypeOfFtpPassiveMode;
- (KalturaFieldType)getTypeOfSrcFileSyncLocalPath;
- (KalturaFieldType)getTypeOfSrcFileSyncId;
- (KalturaFieldType)getTypeOfDestFileSyncStoredPath;
- (void)setFtpPassiveModeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageProfileBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* partnerIdIn;
@property (nonatomic,copy) NSString* systemNameEqual;
@property (nonatomic,copy) NSString* systemNameIn;
@property (nonatomic,assign) int statusEqual;	// enum KalturaStorageProfileStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,copy) NSString* protocolEqual;	// enum KalturaStorageProfileProtocol
@property (nonatomic,copy) NSString* protocolIn;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdIn;
- (KalturaFieldType)getTypeOfSystemNameEqual;
- (KalturaFieldType)getTypeOfSystemNameIn;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfProtocolEqual;
- (KalturaFieldType)getTypeOfProtocolIn;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSyncCategoryPrivacyContextJobData : KalturaJobData
// category id
@property (nonatomic,assign) int categoryId;
// Saves the last category entry creation date that was updated
//      In case of crash the batch will restart from that point
@property (nonatomic,assign) int lastUpdatedCategoryEntryCreatedAt;
// Saves the last sub category creation date that was updated
//      In case of crash the batch will restart from that point
@property (nonatomic,assign) int lastUpdatedCategoryCreatedAt;
- (KalturaFieldType)getTypeOfCategoryId;
- (KalturaFieldType)getTypeOfLastUpdatedCategoryEntryCreatedAt;
- (KalturaFieldType)getTypeOfLastUpdatedCategoryCreatedAt;
- (void)setCategoryIdFromString:(NSString*)aPropVal;
- (void)setLastUpdatedCategoryEntryCreatedAtFromString:(NSString*)aPropVal;
- (void)setLastUpdatedCategoryCreatedAtFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaTubeMogulSyndicationFeed : KalturaBaseSyndicationFeed
@property (nonatomic,copy,readonly) NSString* category;	// enum KalturaTubeMogulSyndicationFeedCategories
- (KalturaFieldType)getTypeOfCategory;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUiConfBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,copy) NSString* nameLike;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* partnerIdIn;
@property (nonatomic,assign) int objTypeEqual;	// enum KalturaUiConfObjType
@property (nonatomic,copy) NSString* objTypeIn;
@property (nonatomic,copy) NSString* tagsMultiLikeOr;
@property (nonatomic,copy) NSString* tagsMultiLikeAnd;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
@property (nonatomic,assign) int creationModeEqual;	// enum KalturaUiConfCreationMode
@property (nonatomic,copy) NSString* creationModeIn;
@property (nonatomic,copy) NSString* versionEqual;
@property (nonatomic,copy) NSString* versionMultiLikeOr;
@property (nonatomic,copy) NSString* versionMultiLikeAnd;
@property (nonatomic,copy) NSString* partnerTagsMultiLikeOr;
@property (nonatomic,copy) NSString* partnerTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfNameLike;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdIn;
- (KalturaFieldType)getTypeOfObjTypeEqual;
- (KalturaFieldType)getTypeOfObjTypeIn;
- (KalturaFieldType)getTypeOfTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfCreationModeEqual;
- (KalturaFieldType)getTypeOfCreationModeIn;
- (KalturaFieldType)getTypeOfVersionEqual;
- (KalturaFieldType)getTypeOfVersionMultiLikeOr;
- (KalturaFieldType)getTypeOfVersionMultiLikeAnd;
- (KalturaFieldType)getTypeOfPartnerTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfPartnerTagsMultiLikeAnd;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setObjTypeEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreationModeEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUploadTokenBaseFilter : KalturaFilter
@property (nonatomic,copy) NSString* idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,copy) NSString* userIdEqual;
@property (nonatomic,assign) int statusEqual;	// enum KalturaUploadTokenStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,copy) NSString* fileNameEqual;
@property (nonatomic,assign) double fileSizeEqual;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfUserIdEqual;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfFileNameEqual;
- (KalturaFieldType)getTypeOfFileSizeEqual;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
- (void)setFileSizeEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlRecognizerAkamaiG2O : KalturaUrlRecognizer
// headerData
@property (nonatomic,copy) NSString* headerData;
// headerSign
@property (nonatomic,copy) NSString* headerSign;
// timeout
@property (nonatomic,assign) int timeout;
// salt
@property (nonatomic,copy) NSString* salt;
- (KalturaFieldType)getTypeOfHeaderData;
- (KalturaFieldType)getTypeOfHeaderSign;
- (KalturaFieldType)getTypeOfTimeout;
- (KalturaFieldType)getTypeOfSalt;
- (void)setTimeoutFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlTokenizerAkamaiHttp : KalturaUrlTokenizer
// param
@property (nonatomic,copy) NSString* paramName;
@property (nonatomic,copy) NSString* rootDir;
- (KalturaFieldType)getTypeOfParamName;
- (KalturaFieldType)getTypeOfRootDir;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlTokenizerAkamaiRtmp : KalturaUrlTokenizer
// profile
@property (nonatomic,copy) NSString* profile;
// Type
@property (nonatomic,copy) NSString* type;
@property (nonatomic,copy) NSString* aifp;
@property (nonatomic,assign) KALTURA_BOOL usePrefix;
- (KalturaFieldType)getTypeOfProfile;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfAifp;
- (KalturaFieldType)getTypeOfUsePrefix;
- (void)setUsePrefixFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlTokenizerAkamaiRtsp : KalturaUrlTokenizer
// host
@property (nonatomic,copy) NSString* host;
// Cp-Code
@property (nonatomic,assign) int cpcode;
- (KalturaFieldType)getTypeOfHost;
- (KalturaFieldType)getTypeOfCpcode;
- (void)setCpcodeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlTokenizerAkamaiSecureHd : KalturaUrlTokenizer
@property (nonatomic,copy) NSString* paramName;
@property (nonatomic,copy) NSString* aclPostfix;
@property (nonatomic,copy) NSString* customPostfixes;
@property (nonatomic,copy) NSString* useCookieHosts;
@property (nonatomic,copy) NSString* rootDir;
- (KalturaFieldType)getTypeOfParamName;
- (KalturaFieldType)getTypeOfAclPostfix;
- (KalturaFieldType)getTypeOfCustomPostfixes;
- (KalturaFieldType)getTypeOfUseCookieHosts;
- (KalturaFieldType)getTypeOfRootDir;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlTokenizerBitGravity : KalturaUrlTokenizer
// hashPatternRegex
@property (nonatomic,copy) NSString* hashPatternRegex;
- (KalturaFieldType)getTypeOfHashPatternRegex;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlTokenizerLevel3 : KalturaUrlTokenizer
// paramName
@property (nonatomic,copy) NSString* paramName;
// expiryName
@property (nonatomic,copy) NSString* expiryName;
// gen
@property (nonatomic,copy) NSString* gen;
- (KalturaFieldType)getTypeOfParamName;
- (KalturaFieldType)getTypeOfExpiryName;
- (KalturaFieldType)getTypeOfGen;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlTokenizerLimeLight : KalturaUrlTokenizer
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlTokenizerUplynk : KalturaUrlTokenizer
// accountId
@property (nonatomic,copy) NSString* accountId;
- (KalturaFieldType)getTypeOfAccountId;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUrlTokenizerVelocix : KalturaUrlTokenizer
// hdsPaths
@property (nonatomic,copy) NSString* hdsPaths;
// tokenParamName
@property (nonatomic,copy) NSString* paramName;
// secure URL prefix
@property (nonatomic,copy) NSString* authPrefix;
- (KalturaFieldType)getTypeOfHdsPaths;
- (KalturaFieldType)getTypeOfParamName;
- (KalturaFieldType)getTypeOfAuthPrefix;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserAgentRestriction : KalturaBaseRestriction
// User agent restriction type (Allow or deny)
@property (nonatomic,assign) int userAgentRestrictionType;	// enum KalturaUserAgentRestrictionType
// A comma seperated list of user agent regular expressions
@property (nonatomic,copy) NSString* userAgentRegexList;
- (KalturaFieldType)getTypeOfUserAgentRestrictionType;
- (KalturaFieldType)getTypeOfUserAgentRegexList;
- (void)setUserAgentRestrictionTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserLoginDataBaseFilter : KalturaFilter
@property (nonatomic,copy) NSString* loginEmailEqual;
- (KalturaFieldType)getTypeOfLoginEmailEqual;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserRoleBaseFilter : KalturaFilter
@property (nonatomic,assign) int idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,copy) NSString* nameEqual;
@property (nonatomic,copy) NSString* nameIn;
@property (nonatomic,copy) NSString* systemNameEqual;
@property (nonatomic,copy) NSString* systemNameIn;
@property (nonatomic,copy) NSString* descriptionLike;
@property (nonatomic,assign) int statusEqual;	// enum KalturaUserRoleStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* partnerIdIn;
@property (nonatomic,copy) NSString* tagsMultiLikeOr;
@property (nonatomic,copy) NSString* tagsMultiLikeAnd;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfNameEqual;
- (KalturaFieldType)getTypeOfNameIn;
- (KalturaFieldType)getTypeOfSystemNameEqual;
- (KalturaFieldType)getTypeOfSystemNameIn;
- (KalturaFieldType)getTypeOfDescriptionLike;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdIn;
- (KalturaFieldType)getTypeOfTagsMultiLikeOr;
- (KalturaFieldType)getTypeOfTagsMultiLikeAnd;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (void)setIdEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserRoleCondition : KalturaCondition
// Comma separated list of role ids
@property (nonatomic,copy) NSString* roleIds;
- (KalturaFieldType)getTypeOfRoleIds;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidgetBaseFilter : KalturaFilter
@property (nonatomic,copy) NSString* idEqual;
@property (nonatomic,copy) NSString* idIn;
@property (nonatomic,copy) NSString* sourceWidgetIdEqual;
@property (nonatomic,copy) NSString* rootWidgetIdEqual;
@property (nonatomic,assign) int partnerIdEqual;
@property (nonatomic,copy) NSString* entryIdEqual;
@property (nonatomic,assign) int uiConfIdEqual;
@property (nonatomic,assign) int createdAtGreaterThanOrEqual;
@property (nonatomic,assign) int createdAtLessThanOrEqual;
@property (nonatomic,assign) int updatedAtGreaterThanOrEqual;
@property (nonatomic,assign) int updatedAtLessThanOrEqual;
@property (nonatomic,copy) NSString* partnerDataLike;
- (KalturaFieldType)getTypeOfIdEqual;
- (KalturaFieldType)getTypeOfIdIn;
- (KalturaFieldType)getTypeOfSourceWidgetIdEqual;
- (KalturaFieldType)getTypeOfRootWidgetIdEqual;
- (KalturaFieldType)getTypeOfPartnerIdEqual;
- (KalturaFieldType)getTypeOfEntryIdEqual;
- (KalturaFieldType)getTypeOfUiConfIdEqual;
- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual;
- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual;
- (KalturaFieldType)getTypeOfPartnerDataLike;
- (void)setPartnerIdEqualFromString:(NSString*)aPropVal;
- (void)setUiConfIdEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal;
- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaYahooSyndicationFeed : KalturaBaseSyndicationFeed
@property (nonatomic,copy,readonly) NSString* category;	// enum KalturaYahooSyndicationFeedCategories
@property (nonatomic,copy) NSString* adultContent;	// enum KalturaYahooSyndicationFeedAdultValues
// feed description
@property (nonatomic,copy) NSString* feedDescription;
// feed landing page (i.e publisher website)
@property (nonatomic,copy) NSString* feedLandingPage;
- (KalturaFieldType)getTypeOfCategory;
- (KalturaFieldType)getTypeOfAdultContent;
- (KalturaFieldType)getTypeOfFeedDescription;
- (KalturaFieldType)getTypeOfFeedLandingPage;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlFilter : KalturaAccessControlBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlProfileFilter : KalturaAccessControlProfileBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAkamaiProvisionJobData : KalturaProvisionJobData
@property (nonatomic,copy) NSString* wsdlUsername;
@property (nonatomic,copy) NSString* wsdlPassword;
@property (nonatomic,copy) NSString* cpcode;
@property (nonatomic,copy) NSString* emailId;
@property (nonatomic,copy) NSString* primaryContact;
@property (nonatomic,copy) NSString* secondaryContact;
- (KalturaFieldType)getTypeOfWsdlUsername;
- (KalturaFieldType)getTypeOfWsdlPassword;
- (KalturaFieldType)getTypeOfCpcode;
- (KalturaFieldType)getTypeOfEmailId;
- (KalturaFieldType)getTypeOfPrimaryContact;
- (KalturaFieldType)getTypeOfSecondaryContact;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAkamaiUniversalProvisionJobData : KalturaProvisionJobData
@property (nonatomic,assign) int streamId;
@property (nonatomic,copy) NSString* systemUserName;
@property (nonatomic,copy) NSString* systemPassword;
@property (nonatomic,copy) NSString* domainName;
@property (nonatomic,assign) int dvrEnabled;	// enum KalturaDVRStatus
@property (nonatomic,assign) int dvrWindow;
@property (nonatomic,copy) NSString* primaryContact;
@property (nonatomic,copy) NSString* secondaryContact;
@property (nonatomic,copy) NSString* streamType;	// enum KalturaAkamaiUniversalStreamType
@property (nonatomic,copy) NSString* notificationEmail;
- (KalturaFieldType)getTypeOfStreamId;
- (KalturaFieldType)getTypeOfSystemUserName;
- (KalturaFieldType)getTypeOfSystemPassword;
- (KalturaFieldType)getTypeOfDomainName;
- (KalturaFieldType)getTypeOfDvrEnabled;
- (KalturaFieldType)getTypeOfDvrWindow;
- (KalturaFieldType)getTypeOfPrimaryContact;
- (KalturaFieldType)getTypeOfSecondaryContact;
- (KalturaFieldType)getTypeOfStreamType;
- (KalturaFieldType)getTypeOfNotificationEmail;
- (void)setStreamIdFromString:(NSString*)aPropVal;
- (void)setDvrEnabledFromString:(NSString*)aPropVal;
- (void)setDvrWindowFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetFilter : KalturaAssetBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetParamsFilter : KalturaAssetParamsBaseFilter
@end

// @package Kaltura
// @subpackage Client
// Used to ingest media that is already ingested to Kaltura system as a different flavor asset in the past, the new created flavor asset will be ready immediately using a file sync of link type that will point to the existing file sync of the existing flavor asset.
@interface KalturaAssetResource : KalturaContentResource
// ID of the source asset
@property (nonatomic,copy) NSString* assetId;
- (KalturaFieldType)getTypeOfAssetId;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBaseSyndicationFeedFilter : KalturaBaseSyndicationFeedBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBatchJobFilter : KalturaBatchJobBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBulkUploadFilter : KalturaBulkUploadBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryEntryFilter : KalturaCategoryEntryBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCategoryFilter : KalturaCategoryBaseFilter
@property (nonatomic,copy) NSString* freeText;
@property (nonatomic,copy) NSString* membersIn;
@property (nonatomic,copy) NSString* nameOrReferenceIdStartsWith;
@property (nonatomic,copy) NSString* managerEqual;
@property (nonatomic,copy) NSString* memberEqual;
@property (nonatomic,copy) NSString* fullNameStartsWithIn;
// not includes the category itself (only sub categories)
@property (nonatomic,copy) NSString* ancestorIdIn;
@property (nonatomic,copy) NSString* idOrInheritedParentIdIn;
- (KalturaFieldType)getTypeOfFreeText;
- (KalturaFieldType)getTypeOfMembersIn;
- (KalturaFieldType)getTypeOfNameOrReferenceIdStartsWith;
- (KalturaFieldType)getTypeOfManagerEqual;
- (KalturaFieldType)getTypeOfMemberEqual;
- (KalturaFieldType)getTypeOfFullNameStartsWithIn;
- (KalturaFieldType)getTypeOfAncestorIdIn;
- (KalturaFieldType)getTypeOfIdOrInheritedParentIdIn;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaControlPanelCommandFilter : KalturaControlPanelCommandBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfileFilter : KalturaConversionProfileBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConversionProfileAssetParamsFilter : KalturaConversionProfileAssetParamsBaseFilter
@property (nonatomic,retain) KalturaConversionProfileFilter* conversionProfileIdFilter;
@property (nonatomic,retain) KalturaAssetParamsFilter* assetParamsIdFilter;
- (KalturaFieldType)getTypeOfConversionProfileIdFilter;
- (NSString*)getObjectTypeOfConversionProfileIdFilter;
- (KalturaFieldType)getTypeOfAssetParamsIdFilter;
- (NSString*)getObjectTypeOfAssetParamsIdFilter;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConvertCollectionJobData : KalturaConvartableJobData
@property (nonatomic,copy) NSString* destDirLocalPath;
@property (nonatomic,copy) NSString* destDirRemoteUrl;
@property (nonatomic,copy) NSString* destFileName;
@property (nonatomic,copy) NSString* inputXmlLocalPath;
@property (nonatomic,copy) NSString* inputXmlRemoteUrl;
@property (nonatomic,copy) NSString* commandLinesStr;
@property (nonatomic,retain) NSMutableArray* flavors;	// of KalturaConvertCollectionFlavorData elements
- (KalturaFieldType)getTypeOfDestDirLocalPath;
- (KalturaFieldType)getTypeOfDestDirRemoteUrl;
- (KalturaFieldType)getTypeOfDestFileName;
- (KalturaFieldType)getTypeOfInputXmlLocalPath;
- (KalturaFieldType)getTypeOfInputXmlRemoteUrl;
- (KalturaFieldType)getTypeOfCommandLinesStr;
- (KalturaFieldType)getTypeOfFlavors;
- (NSString*)getObjectTypeOfFlavors;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaConvertJobData : KalturaConvartableJobData
@property (nonatomic,copy) NSString* destFileSyncLocalPath;
@property (nonatomic,copy) NSString* destFileSyncRemoteUrl;
@property (nonatomic,copy) NSString* logFileSyncLocalPath;
@property (nonatomic,copy) NSString* logFileSyncRemoteUrl;
@property (nonatomic,copy) NSString* flavorAssetId;
@property (nonatomic,copy) NSString* remoteMediaId;
@property (nonatomic,copy) NSString* customData;
@property (nonatomic,retain) NSMutableArray* extraDestFileSyncs;	// of KalturaDestFileSyncDescriptor elements
@property (nonatomic,copy) NSString* engineMessage;
- (KalturaFieldType)getTypeOfDestFileSyncLocalPath;
- (KalturaFieldType)getTypeOfDestFileSyncRemoteUrl;
- (KalturaFieldType)getTypeOfLogFileSyncLocalPath;
- (KalturaFieldType)getTypeOfLogFileSyncRemoteUrl;
- (KalturaFieldType)getTypeOfFlavorAssetId;
- (KalturaFieldType)getTypeOfRemoteMediaId;
- (KalturaFieldType)getTypeOfCustomData;
- (KalturaFieldType)getTypeOfExtraDestFileSyncs;
- (NSString*)getObjectTypeOfExtraDestFileSyncs;
- (KalturaFieldType)getTypeOfEngineMessage;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaCountryCondition : KalturaMatchCondition
// The ip geo coder engine to be used
@property (nonatomic,copy) NSString* geoCoderType;	// enum KalturaGeoCoderType
- (KalturaFieldType)getTypeOfGeoCoderType;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileFilter : KalturaDeliveryProfileBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericRtmp : KalturaDeliveryProfileRtmp
@property (nonatomic,copy) NSString* pattern;
// rendererClass
@property (nonatomic,copy) NSString* rendererClass;
- (KalturaFieldType)getTypeOfPattern;
- (KalturaFieldType)getTypeOfRendererClass;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEndUserReportInputFilter : KalturaReportInputFilter
@property (nonatomic,copy) NSString* application;
@property (nonatomic,copy) NSString* userIds;
@property (nonatomic,copy) NSString* playbackContext;
@property (nonatomic,copy) NSString* ancestorPlaybackContext;
- (KalturaFieldType)getTypeOfApplication;
- (KalturaFieldType)getTypeOfUserIds;
- (KalturaFieldType)getTypeOfPlaybackContext;
- (KalturaFieldType)getTypeOfAncestorPlaybackContext;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEntryReferrerLiveStats : KalturaEntryLiveStats
@property (nonatomic,copy) NSString* referrer;
- (KalturaFieldType)getTypeOfReferrer;
@end

// @package Kaltura
// @subpackage Client
// Used to ingest media that is already ingested to Kaltura system as a different entry in the past, the new created flavor asset will be ready immediately using a file sync of link type that will point to the existing file sync of the existing entry.
@interface KalturaEntryResource : KalturaContentResource
// ID of the source entry
@property (nonatomic,copy) NSString* entryId;
// ID of the source flavor params, set to null to use the source flavor
@property (nonatomic,assign) int flavorParamsId;
- (KalturaFieldType)getTypeOfEntryId;
- (KalturaFieldType)getTypeOfFlavorParamsId;
- (void)setFlavorParamsIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaExtractMediaJobData : KalturaConvartableJobData
@property (nonatomic,copy) NSString* flavorAssetId;
- (KalturaFieldType)getTypeOfFlavorAssetId;
@end

// @package Kaltura
// @subpackage Client
// An int representation to return evaluated dynamic value
@interface KalturaIntegerField : KalturaIntegerValue
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFieldCompareCondition : KalturaCompareCondition
// Field to evaluate
@property (nonatomic,retain) KalturaIntegerField* field;
- (KalturaFieldType)getTypeOfField;
- (NSString*)getObjectTypeOfField;
@end

// @package Kaltura
// @subpackage Client
// A string representation to return evaluated dynamic value
@interface KalturaStringField : KalturaStringValue
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFieldMatchCondition : KalturaMatchCondition
// Field to evaluate
@property (nonatomic,retain) KalturaStringField* field;
- (KalturaFieldType)getTypeOfField;
- (NSString*)getObjectTypeOfField;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFileAssetFilter : KalturaFileAssetBaseFilter
@end

// @package Kaltura
// @subpackage Client
// Used to ingest media that is already ingested to Kaltura system as a different file in the past, the new created flavor asset will be ready immediately using a file sync of link type that will point to the existing file sync.
@interface KalturaFileSyncResource : KalturaContentResource
// The object type of the file sync object
@property (nonatomic,assign) int fileSyncObjectType;
// The object sub-type of the file sync object
@property (nonatomic,assign) int objectSubType;
// The object id of the file sync object
@property (nonatomic,copy) NSString* objectId;
// The version of the file sync object
@property (nonatomic,copy) NSString* version;
- (KalturaFieldType)getTypeOfFileSyncObjectType;
- (KalturaFieldType)getTypeOfObjectSubType;
- (KalturaFieldType)getTypeOfObjectId;
- (KalturaFieldType)getTypeOfVersion;
- (void)setFileSyncObjectTypeFromString:(NSString*)aPropVal;
- (void)setObjectSubTypeFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGenericXsltSyndicationFeed : KalturaGenericSyndicationFeed
@property (nonatomic,copy) NSString* xslt;
@property (nonatomic,retain) NSMutableArray* itemXpathsToExtend;	// of KalturaExtendingItemMrssParameter elements
- (KalturaFieldType)getTypeOfXslt;
- (KalturaFieldType)getTypeOfItemXpathsToExtend;
- (NSString*)getObjectTypeOfItemXpathsToExtend;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGeoDistanceCondition : KalturaMatchCondition
// The ip geo coder engine to be used
@property (nonatomic,copy) NSString* geoCoderType;	// enum KalturaGeoCoderType
- (KalturaFieldType)getTypeOfGeoCoderType;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGeoTimeLiveStats : KalturaEntryLiveStats
@property (nonatomic,retain) KalturaCoordinate* city;
@property (nonatomic,retain) KalturaCoordinate* country;
- (KalturaFieldType)getTypeOfCity;
- (NSString*)getObjectTypeOfCity;
- (KalturaFieldType)getTypeOfCountry;
- (NSString*)getObjectTypeOfCountry;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaIpAddressCondition : KalturaMatchCondition
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveAsset : KalturaFlavorAsset
@property (nonatomic,copy) NSString* multicastIP;
@property (nonatomic,assign) int multicastPort;
- (KalturaFieldType)getTypeOfMulticastIP;
- (KalturaFieldType)getTypeOfMulticastPort;
- (void)setMulticastPortFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannelSegmentFilter : KalturaLiveChannelSegmentBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveParams : KalturaFlavorParams
// Suffix to be added to the stream name after the entry id {entry_id}_{stream_suffix}, e.g. for entry id 0_kjdu5jr6 and suffix 1, the stream name will be 0_kjdu5jr6_1
@property (nonatomic,copy) NSString* streamSuffix;
- (KalturaFieldType)getTypeOfStreamSuffix;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaFlavorParams : KalturaFlavorParams
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaInfoFilter : KalturaMediaInfoBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaServerFilter : KalturaMediaServerBaseFilter
@end

// @package Kaltura
// @subpackage Client
// A resource that perform operation (transcoding, clipping, cropping) before the flavor is ready.
@interface KalturaOperationResource : KalturaContentResource
// Only KalturaEntryResource and KalturaAssetResource are supported
@property (nonatomic,retain) KalturaContentResource* resource;
@property (nonatomic,retain) NSMutableArray* operationAttributes;	// of KalturaOperationAttributes elements
// ID of alternative asset params to be used instead of the system default flavor params
@property (nonatomic,assign) int assetParamsId;
- (KalturaFieldType)getTypeOfResource;
- (NSString*)getObjectTypeOfResource;
- (KalturaFieldType)getTypeOfOperationAttributes;
- (NSString*)getObjectTypeOfOperationAttributes;
- (KalturaFieldType)getTypeOfAssetParamsId;
- (void)setAssetParamsIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPartnerFilter : KalturaPartnerBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionFilter : KalturaPermissionBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPermissionItemFilter : KalturaPermissionItemBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPostConvertJobData : KalturaConvartableJobData
@property (nonatomic,copy) NSString* flavorAssetId;
// Indicates if a thumbnail should be created
@property (nonatomic,assign) KALTURA_BOOL createThumb;
// The path of the created thumbnail
@property (nonatomic,copy) NSString* thumbPath;
// The position of the thumbnail in the media file
@property (nonatomic,assign) int thumbOffset;
// The height of the movie, will be used to comapare if this thumbnail is the best we can have
@property (nonatomic,assign) int thumbHeight;
// The bit rate of the movie, will be used to comapare if this thumbnail is the best we can have
@property (nonatomic,assign) int thumbBitrate;
@property (nonatomic,copy) NSString* customData;
- (KalturaFieldType)getTypeOfFlavorAssetId;
- (KalturaFieldType)getTypeOfCreateThumb;
- (KalturaFieldType)getTypeOfThumbPath;
- (KalturaFieldType)getTypeOfThumbOffset;
- (KalturaFieldType)getTypeOfThumbHeight;
- (KalturaFieldType)getTypeOfThumbBitrate;
- (KalturaFieldType)getTypeOfCustomData;
- (void)setCreateThumbFromString:(NSString*)aPropVal;
- (void)setThumbOffsetFromString:(NSString*)aPropVal;
- (void)setThumbHeightFromString:(NSString*)aPropVal;
- (void)setThumbBitrateFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPreviewRestriction : KalturaSessionRestriction
// The preview restriction length
@property (nonatomic,assign) int previewLength;
- (KalturaFieldType)getTypeOfPreviewLength;
- (void)setPreviewLengthFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaRegexCondition : KalturaMatchCondition
@end

// @package Kaltura
// @subpackage Client
// Used to ingest media that is available on remote server and accessible using the supplied URL, the media file won't be downloaded but a file sync object of URL type will point to the media URL.
@interface KalturaRemoteStorageResources : KalturaContentResource
// Array of remote stoage resources
@property (nonatomic,retain) NSMutableArray* resources;	// of KalturaRemoteStorageResource elements
- (KalturaFieldType)getTypeOfResources;
- (NSString*)getObjectTypeOfResources;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaReportFilter : KalturaReportBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSearchComparableCondition : KalturaSearchCondition
@property (nonatomic,copy) NSString* comparison;	// enum KalturaSearchConditionComparison
- (KalturaFieldType)getTypeOfComparison;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSiteCondition : KalturaMatchCondition
@end

// @package Kaltura
// @subpackage Client
@interface KalturaSshImportJobData : KalturaImportJobData
@property (nonatomic,copy) NSString* privateKey;
@property (nonatomic,copy) NSString* publicKey;
@property (nonatomic,copy) NSString* passPhrase;
- (KalturaFieldType)getTypeOfPrivateKey;
- (KalturaFieldType)getTypeOfPublicKey;
- (KalturaFieldType)getTypeOfPassPhrase;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageDeleteJobData : KalturaStorageJobData
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageExportJobData : KalturaStorageJobData
@property (nonatomic,assign) KALTURA_BOOL force;
@property (nonatomic,assign) KALTURA_BOOL createLink;
- (KalturaFieldType)getTypeOfForce;
- (KalturaFieldType)getTypeOfCreateLink;
- (void)setForceFromString:(NSString*)aPropVal;
- (void)setCreateLinkFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaStorageProfileFilter : KalturaStorageProfileBaseFilter
@end

// @package Kaltura
// @subpackage Client
// Used to ingest string content.
@interface KalturaStringResource : KalturaContentResource
// Textual content
@property (nonatomic,copy) NSString* content;
- (KalturaFieldType)getTypeOfContent;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUiConfFilter : KalturaUiConfBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUploadTokenFilter : KalturaUploadTokenBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserLoginDataFilter : KalturaUserLoginDataBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserRoleFilter : KalturaUserRoleBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaWidgetFilter : KalturaWidgetBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAdminUserBaseFilter : KalturaUserFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAmazonS3StorageExportJobData : KalturaStorageExportJobData
@property (nonatomic,copy) NSString* filesPermissionInS3;	// enum KalturaAmazonS3StorageProfileFilesPermissionLevel
- (KalturaFieldType)getTypeOfFilesPermissionInS3;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAmazonS3StorageProfileBaseFilter : KalturaStorageProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaApiActionPermissionItemBaseFilter : KalturaPermissionItemFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaApiParameterPermissionItemBaseFilter : KalturaPermissionItemFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetParamsOutputBaseFilter : KalturaAssetParamsFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaBatchJobFilterExt : KalturaBatchJobFilter
@property (nonatomic,copy) NSString* jobTypeAndSubTypeIn;
- (KalturaFieldType)getTypeOfJobTypeAndSubTypeIn;
@end

// @package Kaltura
// @subpackage Client
// Represents the current request country context as calculated based on the IP address
@interface KalturaCoordinatesContextField : KalturaStringField
// The ip geo coder engine to be used
@property (nonatomic,copy) NSString* geoCoderType;	// enum KalturaGeoCoderType
- (KalturaFieldType)getTypeOfGeoCoderType;
@end

// @package Kaltura
// @subpackage Client
// Represents the current request country context as calculated based on the IP address
@interface KalturaCountryContextField : KalturaStringField
// The ip geo coder engine to be used
@property (nonatomic,copy) NSString* geoCoderType;	// enum KalturaGeoCoderType
- (KalturaFieldType)getTypeOfGeoCoderType;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDataEntryBaseFilter : KalturaBaseEntryFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiAppleHttpManifestBaseFilter : KalturaDeliveryProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiHdsBaseFilter : KalturaDeliveryProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiHttpBaseFilter : KalturaDeliveryProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericAppleHttpBaseFilter : KalturaDeliveryProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericHdsBaseFilter : KalturaDeliveryProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericHttpBaseFilter : KalturaDeliveryProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericSilverLightBaseFilter : KalturaDeliveryProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileLiveAppleHttpBaseFilter : KalturaDeliveryProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileRtmpBaseFilter : KalturaDeliveryProfileFilter
@end

// @package Kaltura
// @subpackage Client
// Evaluates PHP statement, depends on the execution context
@interface KalturaEvalBooleanField : KalturaBooleanField
// PHP code
@property (nonatomic,copy) NSString* code;
- (KalturaFieldType)getTypeOfCode;
@end

// @package Kaltura
// @subpackage Client
// Evaluates PHP statement, depends on the execution context
@interface KalturaEvalStringField : KalturaStringField
// PHP code
@property (nonatomic,copy) NSString* code;
- (KalturaFieldType)getTypeOfCode;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorAssetBaseFilter : KalturaAssetFilter
@property (nonatomic,assign) int flavorParamsIdEqual;
@property (nonatomic,copy) NSString* flavorParamsIdIn;
@property (nonatomic,assign) int statusEqual;	// enum KalturaFlavorAssetStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,copy) NSString* statusNotIn;
- (KalturaFieldType)getTypeOfFlavorParamsIdEqual;
- (KalturaFieldType)getTypeOfFlavorParamsIdIn;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfStatusNotIn;
- (void)setFlavorParamsIdEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorParamsBaseFilter : KalturaAssetParamsFilter
@property (nonatomic,copy) NSString* formatEqual;	// enum KalturaContainerFormat
- (KalturaFieldType)getTypeOfFormatEqual;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGenericSyndicationFeedBaseFilter : KalturaBaseSyndicationFeedFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGoogleVideoSyndicationFeedBaseFilter : KalturaBaseSyndicationFeedFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaITunesSyndicationFeedBaseFilter : KalturaBaseSyndicationFeedFilter
@end

// @package Kaltura
// @subpackage Client
// Represents the current request IP address context
@interface KalturaIpAddressContextField : KalturaStringField
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaFlavorParamsOutput : KalturaFlavorParamsOutput
@end

// @package Kaltura
// @subpackage Client
// Evaluates object ID according to given context
@interface KalturaObjectIdField : KalturaStringField
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlaylistBaseFilter : KalturaBaseEntryFilter
@end

// @package Kaltura
// @subpackage Client
// Used to ingest media file that is already accessible on the shared disc.
@interface KalturaServerFileResource : KalturaDataCenterContentResource
// Full path to the local file
@property (nonatomic,copy) NSString* localFilePath;
- (KalturaFieldType)getTypeOfLocalFilePath;
@end

// @package Kaltura
// @subpackage Client
// Used to ingest media that is available on remote SSH server and accessible using the supplied URL, media file will be downloaded using import job in order to make the asset ready.
@interface KalturaSshUrlResource : KalturaUrlResource
// SSH private key
@property (nonatomic,copy) NSString* privateKey;
// SSH public key
@property (nonatomic,copy) NSString* publicKey;
// Passphrase for SSH keys
@property (nonatomic,copy) NSString* keyPassphrase;
- (KalturaFieldType)getTypeOfPrivateKey;
- (KalturaFieldType)getTypeOfPublicKey;
- (KalturaFieldType)getTypeOfKeyPassphrase;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbAssetBaseFilter : KalturaAssetFilter
@property (nonatomic,assign) int thumbParamsIdEqual;
@property (nonatomic,copy) NSString* thumbParamsIdIn;
@property (nonatomic,assign) int statusEqual;	// enum KalturaThumbAssetStatus
@property (nonatomic,copy) NSString* statusIn;
@property (nonatomic,copy) NSString* statusNotIn;
- (KalturaFieldType)getTypeOfThumbParamsIdEqual;
- (KalturaFieldType)getTypeOfThumbParamsIdIn;
- (KalturaFieldType)getTypeOfStatusEqual;
- (KalturaFieldType)getTypeOfStatusIn;
- (KalturaFieldType)getTypeOfStatusNotIn;
- (void)setThumbParamsIdEqualFromString:(NSString*)aPropVal;
- (void)setStatusEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbParamsBaseFilter : KalturaAssetParamsFilter
@property (nonatomic,copy) NSString* formatEqual;	// enum KalturaContainerFormat
- (KalturaFieldType)getTypeOfFormatEqual;
@end

// @package Kaltura
// @subpackage Client
// Represents the current time context on Kaltura servers
@interface KalturaTimeContextField : KalturaIntegerField
// Time offset in seconds since current time
@property (nonatomic,assign) int offset;
- (KalturaFieldType)getTypeOfOffset;
- (void)setOffsetFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaTubeMogulSyndicationFeedBaseFilter : KalturaBaseSyndicationFeedFilter
@end

// @package Kaltura
// @subpackage Client
// Used to ingest media that uploaded to the system and represented by token that returned from upload.upload action or uploadToken.add action.
@interface KalturaUploadedFileTokenResource : KalturaDataCenterContentResource
// Token that returned from upload.upload action or uploadToken.add action.
@property (nonatomic,copy) NSString* token;
- (KalturaFieldType)getTypeOfToken;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUserAgentCondition : KalturaRegexCondition
@end

// @package Kaltura
// @subpackage Client
// Represents the current request user agent context
@interface KalturaUserAgentContextField : KalturaStringField
@end

// @package Kaltura
// @subpackage Client
// Represents the current session user e-mail address context
@interface KalturaUserEmailContextField : KalturaStringField
@end

// @package Kaltura
// @subpackage Client
// Used to ingest media that streamed to the system and represented by token that returned from media server such as FMS or red5.
@interface KalturaWebcamTokenResource : KalturaDataCenterContentResource
// Token that returned from media server such as FMS or red5.
@property (nonatomic,copy) NSString* token;
- (KalturaFieldType)getTypeOfToken;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaYahooSyndicationFeedBaseFilter : KalturaBaseSyndicationFeedFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAdminUserFilter : KalturaAdminUserBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAmazonS3StorageProfileFilter : KalturaAmazonS3StorageProfileBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaApiActionPermissionItemFilter : KalturaApiActionPermissionItemBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaApiParameterPermissionItemFilter : KalturaApiParameterPermissionItemBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAssetParamsOutputFilter : KalturaAssetParamsOutputBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDataEntryFilter : KalturaDataEntryBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiAppleHttpManifestFilter : KalturaDeliveryProfileAkamaiAppleHttpManifestBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiHdsFilter : KalturaDeliveryProfileAkamaiHdsBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileAkamaiHttpFilter : KalturaDeliveryProfileAkamaiHttpBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericAppleHttpFilter : KalturaDeliveryProfileGenericAppleHttpBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericHdsFilter : KalturaDeliveryProfileGenericHdsBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericHttpFilter : KalturaDeliveryProfileGenericHttpBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericSilverLightFilter : KalturaDeliveryProfileGenericSilverLightBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileLiveAppleHttpFilter : KalturaDeliveryProfileLiveAppleHttpBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileRtmpFilter : KalturaDeliveryProfileRtmpBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorAssetFilter : KalturaFlavorAssetBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorParamsFilter : KalturaFlavorParamsBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGenericSyndicationFeedFilter : KalturaGenericSyndicationFeedBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGoogleVideoSyndicationFeedFilter : KalturaGoogleVideoSyndicationFeedBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaITunesSyndicationFeedFilter : KalturaITunesSyndicationFeedBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlaylistFilter : KalturaPlaylistBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbAssetFilter : KalturaThumbAssetBaseFilter
@property (nonatomic,copy) NSString* typeIn;
- (KalturaFieldType)getTypeOfTypeIn;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbParamsFilter : KalturaThumbParamsBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaTubeMogulSyndicationFeedFilter : KalturaTubeMogulSyndicationFeedBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaYahooSyndicationFeedFilter : KalturaYahooSyndicationFeedBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericRtmpBaseFilter : KalturaDeliveryProfileRtmpFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorParamsOutputBaseFilter : KalturaFlavorParamsFilter
@property (nonatomic,assign) int flavorParamsIdEqual;
@property (nonatomic,copy) NSString* flavorParamsVersionEqual;
@property (nonatomic,copy) NSString* flavorAssetIdEqual;
@property (nonatomic,copy) NSString* flavorAssetVersionEqual;
- (KalturaFieldType)getTypeOfFlavorParamsIdEqual;
- (KalturaFieldType)getTypeOfFlavorParamsVersionEqual;
- (KalturaFieldType)getTypeOfFlavorAssetIdEqual;
- (KalturaFieldType)getTypeOfFlavorAssetVersionEqual;
- (void)setFlavorParamsIdEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGenericXsltSyndicationFeedBaseFilter : KalturaGenericSyndicationFeedFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveAssetBaseFilter : KalturaFlavorAssetFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveParamsBaseFilter : KalturaFlavorParamsFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStreamAdminEntry : KalturaLiveStreamEntry
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaFlavorParamsBaseFilter : KalturaFlavorParamsFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMixEntryBaseFilter : KalturaPlayableEntryFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbParamsOutputBaseFilter : KalturaThumbParamsFilter
@property (nonatomic,assign) int thumbParamsIdEqual;
@property (nonatomic,copy) NSString* thumbParamsVersionEqual;
@property (nonatomic,copy) NSString* thumbAssetIdEqual;
@property (nonatomic,copy) NSString* thumbAssetVersionEqual;
- (KalturaFieldType)getTypeOfThumbParamsIdEqual;
- (KalturaFieldType)getTypeOfThumbParamsVersionEqual;
- (KalturaFieldType)getTypeOfThumbAssetIdEqual;
- (KalturaFieldType)getTypeOfThumbAssetVersionEqual;
- (void)setThumbParamsIdEqualFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaDeliveryProfileGenericRtmpFilter : KalturaDeliveryProfileGenericRtmpBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaFlavorParamsOutputFilter : KalturaFlavorParamsOutputBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaGenericXsltSyndicationFeedFilter : KalturaGenericXsltSyndicationFeedBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveAssetFilter : KalturaLiveAssetBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveParamsFilter : KalturaLiveParamsBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaFlavorParamsFilter : KalturaMediaFlavorParamsBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMixEntryFilter : KalturaMixEntryBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaThumbParamsOutputFilter : KalturaThumbParamsOutputBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveEntryBaseFilter : KalturaMediaEntryFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaFlavorParamsOutputBaseFilter : KalturaFlavorParamsOutputFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveEntryFilter : KalturaLiveEntryBaseFilter
@property (nonatomic,assign) int isLive;	// enum KalturaNullableBoolean
@property (nonatomic,assign) int isRecordedEntryIdEmpty;	// enum KalturaNullableBoolean
- (KalturaFieldType)getTypeOfIsLive;
- (KalturaFieldType)getTypeOfIsRecordedEntryIdEmpty;
- (void)setIsLiveFromString:(NSString*)aPropVal;
- (void)setIsRecordedEntryIdEmptyFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaMediaFlavorParamsOutputFilter : KalturaMediaFlavorParamsOutputBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannelBaseFilter : KalturaLiveEntryFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStreamEntryBaseFilter : KalturaLiveEntryFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveChannelFilter : KalturaLiveChannelBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStreamEntryFilter : KalturaLiveStreamEntryBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStreamAdminEntryBaseFilter : KalturaLiveStreamEntryFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveStreamAdminEntryFilter : KalturaLiveStreamAdminEntryBaseFilter
@end

///////////////////////// services /////////////////////////
// @package Kaltura
// @subpackage Client
// Manage access control profiles
@interface KalturaAccessControlProfileService : KalturaServiceBase
// Add new access control profile
- (KalturaAccessControlProfile*)addWithAccessControlProfile:(KalturaAccessControlProfile*)aAccessControlProfile;
// Get access control profile by id
- (KalturaAccessControlProfile*)getWithId:(int)aId;
// Update access control profile by id
- (KalturaAccessControlProfile*)updateWithId:(int)aId withAccessControlProfile:(KalturaAccessControlProfile*)aAccessControlProfile;
// Delete access control profile by id
- (void)deleteWithId:(int)aId;
// List access control profiles by filter and pager
- (KalturaAccessControlProfileListResponse*)listWithFilter:(KalturaAccessControlProfileFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaAccessControlProfileListResponse*)listWithFilter:(KalturaAccessControlProfileFilter*)aFilter;
- (KalturaAccessControlProfileListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// Add & Manage Access Controls
@interface KalturaAccessControlService : KalturaServiceBase
// Add new Access Control Profile
- (KalturaAccessControl*)addWithAccessControl:(KalturaAccessControl*)aAccessControl;
// Get Access Control Profile by id
- (KalturaAccessControl*)getWithId:(int)aId;
// Update Access Control Profile by id
- (KalturaAccessControl*)updateWithId:(int)aId withAccessControl:(KalturaAccessControl*)aAccessControl;
// Delete Access Control Profile by id
- (void)deleteWithId:(int)aId;
// List Access Control Profiles by filter and pager
- (KalturaAccessControlListResponse*)listWithFilter:(KalturaAccessControlFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaAccessControlListResponse*)listWithFilter:(KalturaAccessControlFilter*)aFilter;
- (KalturaAccessControlListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// Manage details for the administrative user
@interface KalturaAdminUserService : KalturaServiceBase
// Update admin user password and email
- (KalturaAdminUser*)updatePasswordWithEmail:(NSString*)aEmail withPassword:(NSString*)aPassword withNewEmail:(NSString*)aNewEmail withNewPassword:(NSString*)aNewPassword;
- (KalturaAdminUser*)updatePasswordWithEmail:(NSString*)aEmail withPassword:(NSString*)aPassword withNewEmail:(NSString*)aNewEmail;
- (KalturaAdminUser*)updatePasswordWithEmail:(NSString*)aEmail withPassword:(NSString*)aPassword;
// Reset admin user password and send it to the users email address
- (void)resetPasswordWithEmail:(NSString*)aEmail;
// Get an admin session using admin email and password (Used for login to the KMC application)
- (NSString*)loginWithEmail:(NSString*)aEmail withPassword:(NSString*)aPassword withPartnerId:(int)aPartnerId;
- (NSString*)loginWithEmail:(NSString*)aEmail withPassword:(NSString*)aPassword;
// Set initial users password
- (void)setInitialPasswordWithHashKey:(NSString*)aHashKey withNewPassword:(NSString*)aNewPassword;
@end

// @package Kaltura
// @subpackage Client
// Base Entry Service
@interface KalturaBaseEntryService : KalturaServiceBase
// Generic add entry, should be used when the uploaded entry type is not known.
- (KalturaBaseEntry*)addWithEntry:(KalturaBaseEntry*)aEntry withType:(NSString*)aType;
- (KalturaBaseEntry*)addWithEntry:(KalturaBaseEntry*)aEntry;
// Attach content resource to entry in status NO_MEDIA
- (KalturaBaseEntry*)addContentWithEntryId:(NSString*)aEntryId withResource:(KalturaResource*)aResource;
// Generic add entry using an uploaded file, should be used when the uploaded entry type is not known.
- (KalturaBaseEntry*)addFromUploadedFileWithEntry:(KalturaBaseEntry*)aEntry withUploadTokenId:(NSString*)aUploadTokenId withType:(NSString*)aType;
- (KalturaBaseEntry*)addFromUploadedFileWithEntry:(KalturaBaseEntry*)aEntry withUploadTokenId:(NSString*)aUploadTokenId;
// Get base entry by ID.
- (KalturaBaseEntry*)getWithEntryId:(NSString*)aEntryId withVersion:(int)aVersion;
- (KalturaBaseEntry*)getWithEntryId:(NSString*)aEntryId;
// Get remote storage existing paths for the asset.
- (KalturaRemotePathListResponse*)getRemotePathsWithEntryId:(NSString*)aEntryId;
// Update base entry. Only the properties that were set will be updated.
- (KalturaBaseEntry*)updateWithEntryId:(NSString*)aEntryId withBaseEntry:(KalturaBaseEntry*)aBaseEntry;
// Update the content resource associated with the entry.
- (KalturaBaseEntry*)updateContentWithEntryId:(NSString*)aEntryId withResource:(KalturaResource*)aResource withConversionProfileId:(int)aConversionProfileId withAdvancedOptions:(KalturaEntryReplacementOptions*)aAdvancedOptions;
- (KalturaBaseEntry*)updateContentWithEntryId:(NSString*)aEntryId withResource:(KalturaResource*)aResource withConversionProfileId:(int)aConversionProfileId;
- (KalturaBaseEntry*)updateContentWithEntryId:(NSString*)aEntryId withResource:(KalturaResource*)aResource;
// Get an array of KalturaBaseEntry objects by a comma-separated list of ids.
- (NSMutableArray*)getByIdsWithEntryIds:(NSString*)aEntryIds;
// Delete an entry.
- (void)deleteWithEntryId:(NSString*)aEntryId;
// List base entries by filter with paging support.
- (KalturaBaseEntryListResponse*)listWithFilter:(KalturaBaseEntryFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaBaseEntryListResponse*)listWithFilter:(KalturaBaseEntryFilter*)aFilter;
- (KalturaBaseEntryListResponse*)list;
// List base entries by filter according to reference id
- (KalturaBaseEntryListResponse*)listByReferenceIdWithRefId:(NSString*)aRefId withPager:(KalturaFilterPager*)aPager;
- (KalturaBaseEntryListResponse*)listByReferenceIdWithRefId:(NSString*)aRefId;
// Count base entries by filter.
- (int)countWithFilter:(KalturaBaseEntryFilter*)aFilter;
- (int)count;
// Upload a file to Kaltura, that can be used to create an entry.
- (NSString*)uploadWithFileData:(NSString*)aFileData;
// Update entry thumbnail using a raw jpeg file.
- (KalturaBaseEntry*)updateThumbnailJpegWithEntryId:(NSString*)aEntryId withFileData:(NSString*)aFileData;
// Update entry thumbnail using url.
- (KalturaBaseEntry*)updateThumbnailFromUrlWithEntryId:(NSString*)aEntryId withUrl:(NSString*)aUrl;
// Update entry thumbnail from a different entry by a specified time offset (in seconds).
- (KalturaBaseEntry*)updateThumbnailFromSourceEntryWithEntryId:(NSString*)aEntryId withSourceEntryId:(NSString*)aSourceEntryId withTimeOffset:(int)aTimeOffset;
// Flag inappropriate entry for moderation.
- (void)flagWithModerationFlag:(KalturaModerationFlag*)aModerationFlag;
// Reject the entry and mark the pending flags (if any) as moderated (this will make the entry non-playable).
- (void)rejectWithEntryId:(NSString*)aEntryId;
// Approve the entry and mark the pending flags (if any) as moderated (this will make the entry playable).
- (void)approveWithEntryId:(NSString*)aEntryId;
// List all pending flags for the entry.
- (KalturaModerationFlagListResponse*)listFlagsWithEntryId:(NSString*)aEntryId withPager:(KalturaFilterPager*)aPager;
- (KalturaModerationFlagListResponse*)listFlagsWithEntryId:(NSString*)aEntryId;
// Anonymously rank an entry, no validation is done on duplicate rankings.
- (void)anonymousRankWithEntryId:(NSString*)aEntryId withRank:(int)aRank;
// This action delivers entry-related data, based on the user's context: access control, restriction, playback format and storage information.
- (KalturaEntryContextDataResult*)getContextDataWithEntryId:(NSString*)aEntryId withContextDataParams:(KalturaEntryContextDataParams*)aContextDataParams;
- (KalturaBaseEntry*)exportWithEntryId:(NSString*)aEntryId withStorageProfileId:(int)aStorageProfileId;
// Index an entry by id.
- (int)indexWithId:(NSString*)aId withShouldUpdate:(KALTURA_BOOL)aShouldUpdate;
- (int)indexWithId:(NSString*)aId;
// Clone an entry with optional attributes to apply to the clone
- (KalturaBaseEntry*)cloneWithEntryId:(NSString*)aEntryId;
@end

// @package Kaltura
// @subpackage Client
// Bulk upload service is used to upload & manage bulk uploads using CSV files.
//  This service manages only entry bulk uploads.
@interface KalturaBulkUploadService : KalturaServiceBase
// Add new bulk upload batch job
// 	 Conversion profile id can be specified in the API or in the CSV file, the one in the CSV file will be stronger.
// 	 If no conversion profile was specified, partner's default will be used
- (KalturaBulkUpload*)addWithConversionProfileId:(int)aConversionProfileId withCsvFileData:(NSString*)aCsvFileData withBulkUploadType:(NSString*)aBulkUploadType withUploadedBy:(NSString*)aUploadedBy withFileName:(NSString*)aFileName;
- (KalturaBulkUpload*)addWithConversionProfileId:(int)aConversionProfileId withCsvFileData:(NSString*)aCsvFileData withBulkUploadType:(NSString*)aBulkUploadType withUploadedBy:(NSString*)aUploadedBy;
- (KalturaBulkUpload*)addWithConversionProfileId:(int)aConversionProfileId withCsvFileData:(NSString*)aCsvFileData withBulkUploadType:(NSString*)aBulkUploadType;
- (KalturaBulkUpload*)addWithConversionProfileId:(int)aConversionProfileId withCsvFileData:(NSString*)aCsvFileData;
// Get bulk upload batch job by id
- (KalturaBulkUpload*)getWithId:(int)aId;
// List bulk upload batch jobs
- (KalturaBulkUploadListResponse*)listWithPager:(KalturaFilterPager*)aPager;
- (KalturaBulkUploadListResponse*)list;
// serve action returan the original file.
- (NSString*)serveWithId:(int)aId;
// serveLog action returan the original file.
- (NSString*)serveLogWithId:(int)aId;
// Aborts the bulk upload and all its child jobs
- (KalturaBulkUpload*)abortWithId:(int)aId;
@end

// @package Kaltura
// @subpackage Client
// Add & Manage CategoryEntry - assign entry to category
@interface KalturaCategoryEntryService : KalturaServiceBase
// Add new CategoryEntry
- (KalturaCategoryEntry*)addWithCategoryEntry:(KalturaCategoryEntry*)aCategoryEntry;
// Delete CategoryEntry
- (void)deleteWithEntryId:(NSString*)aEntryId withCategoryId:(int)aCategoryId;
// List all categoryEntry
- (KalturaCategoryEntryListResponse*)listWithFilter:(KalturaCategoryEntryFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaCategoryEntryListResponse*)listWithFilter:(KalturaCategoryEntryFilter*)aFilter;
- (KalturaCategoryEntryListResponse*)list;
// Index CategoryEntry by Id
- (int)indexWithEntryId:(NSString*)aEntryId withCategoryId:(int)aCategoryId withShouldUpdate:(KALTURA_BOOL)aShouldUpdate;
- (int)indexWithEntryId:(NSString*)aEntryId withCategoryId:(int)aCategoryId;
// activate CategoryEntry when it is pending moderation
- (void)activateWithEntryId:(NSString*)aEntryId withCategoryId:(int)aCategoryId;
// activate CategoryEntry when it is pending moderation
- (void)rejectWithEntryId:(NSString*)aEntryId withCategoryId:(int)aCategoryId;
// update privacy context from the category
- (void)syncPrivacyContextWithEntryId:(NSString*)aEntryId withCategoryId:(int)aCategoryId;
@end

// @package Kaltura
// @subpackage Client
// Add & Manage Categories
@interface KalturaCategoryService : KalturaServiceBase
// Add new Category
- (KalturaCategory*)addWithCategory:(KalturaCategory*)aCategory;
// Get Category by id
- (KalturaCategory*)getWithId:(int)aId;
// Update Category
- (KalturaCategory*)updateWithId:(int)aId withCategory:(KalturaCategory*)aCategory;
// Delete a Category
- (void)deleteWithId:(int)aId withMoveEntriesToParentCategory:(int)aMoveEntriesToParentCategory;
- (void)deleteWithId:(int)aId;
// List all categories
- (KalturaCategoryListResponse*)listWithFilter:(KalturaCategoryFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaCategoryListResponse*)listWithFilter:(KalturaCategoryFilter*)aFilter;
- (KalturaCategoryListResponse*)list;
// Index Category by id
- (int)indexWithId:(int)aId withShouldUpdate:(KALTURA_BOOL)aShouldUpdate;
- (int)indexWithId:(int)aId;
// Move categories that belong to the same parent category to a target categroy - enabled only for ks with disable entitlement
- (KalturaCategoryListResponse*)moveWithCategoryIds:(NSString*)aCategoryIds withTargetCategoryParentId:(int)aTargetCategoryParentId;
// Unlock categories
- (void)unlockCategories;
- (KalturaBulkUpload*)addFromBulkUploadWithFileData:(NSString*)aFileData withBulkUploadData:(KalturaBulkUploadJobData*)aBulkUploadData withBulkUploadCategoryData:(KalturaBulkUploadCategoryData*)aBulkUploadCategoryData;
- (KalturaBulkUpload*)addFromBulkUploadWithFileData:(NSString*)aFileData withBulkUploadData:(KalturaBulkUploadJobData*)aBulkUploadData;
- (KalturaBulkUpload*)addFromBulkUploadWithFileData:(NSString*)aFileData;
@end

// @package Kaltura
// @subpackage Client
// Add & Manage CategoryUser - membership of a user in a category
@interface KalturaCategoryUserService : KalturaServiceBase
// Add new CategoryUser
- (KalturaCategoryUser*)addWithCategoryUser:(KalturaCategoryUser*)aCategoryUser;
// Get CategoryUser by id
- (KalturaCategoryUser*)getWithCategoryId:(int)aCategoryId withUserId:(NSString*)aUserId;
// Update CategoryUser by id
- (KalturaCategoryUser*)updateWithCategoryId:(int)aCategoryId withUserId:(NSString*)aUserId withCategoryUser:(KalturaCategoryUser*)aCategoryUser withOverride:(KALTURA_BOOL)aOverride;
- (KalturaCategoryUser*)updateWithCategoryId:(int)aCategoryId withUserId:(NSString*)aUserId withCategoryUser:(KalturaCategoryUser*)aCategoryUser;
// Delete a CategoryUser
- (void)deleteWithCategoryId:(int)aCategoryId withUserId:(NSString*)aUserId;
// activate CategoryUser
- (KalturaCategoryUser*)activateWithCategoryId:(int)aCategoryId withUserId:(NSString*)aUserId;
// reject CategoryUser
- (KalturaCategoryUser*)deactivateWithCategoryId:(int)aCategoryId withUserId:(NSString*)aUserId;
// List all categories
- (KalturaCategoryUserListResponse*)listWithFilter:(KalturaCategoryUserFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaCategoryUserListResponse*)listWithFilter:(KalturaCategoryUserFilter*)aFilter;
- (KalturaCategoryUserListResponse*)list;
// Copy all memeber from parent category
- (void)copyFromCategoryWithCategoryId:(int)aCategoryId;
// Index CategoryUser by userid and category id
- (int)indexWithUserId:(NSString*)aUserId withCategoryId:(int)aCategoryId withShouldUpdate:(KALTURA_BOOL)aShouldUpdate;
- (int)indexWithUserId:(NSString*)aUserId withCategoryId:(int)aCategoryId;
- (KalturaBulkUpload*)addFromBulkUploadWithFileData:(NSString*)aFileData withBulkUploadData:(KalturaBulkUploadJobData*)aBulkUploadData withBulkUploadCategoryUserData:(KalturaBulkUploadCategoryUserData*)aBulkUploadCategoryUserData;
- (KalturaBulkUpload*)addFromBulkUploadWithFileData:(NSString*)aFileData withBulkUploadData:(KalturaBulkUploadJobData*)aBulkUploadData;
- (KalturaBulkUpload*)addFromBulkUploadWithFileData:(NSString*)aFileData;
@end

// @package Kaltura
// @subpackage Client
// Manage the connection between Conversion Profiles and Asset Params
@interface KalturaConversionProfileAssetParamsService : KalturaServiceBase
// Lists asset parmas of conversion profile by ID
- (KalturaConversionProfileAssetParamsListResponse*)listWithFilter:(KalturaConversionProfileAssetParamsFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaConversionProfileAssetParamsListResponse*)listWithFilter:(KalturaConversionProfileAssetParamsFilter*)aFilter;
- (KalturaConversionProfileAssetParamsListResponse*)list;
// Update asset parmas of conversion profile by ID
- (KalturaConversionProfileAssetParams*)updateWithConversionProfileId:(int)aConversionProfileId withAssetParamsId:(int)aAssetParamsId withConversionProfileAssetParams:(KalturaConversionProfileAssetParams*)aConversionProfileAssetParams;
@end

// @package Kaltura
// @subpackage Client
// Add & Manage Conversion Profiles
@interface KalturaConversionProfileService : KalturaServiceBase
// Set Conversion Profile to be the partner default
- (KalturaConversionProfile*)setAsDefaultWithId:(int)aId;
// Get the partner's default conversion profile
- (KalturaConversionProfile*)getDefaultWithType:(NSString*)aType;
- (KalturaConversionProfile*)getDefault;
// Add new Conversion Profile
- (KalturaConversionProfile*)addWithConversionProfile:(KalturaConversionProfile*)aConversionProfile;
// Get Conversion Profile by ID
- (KalturaConversionProfile*)getWithId:(int)aId;
// Update Conversion Profile by ID
- (KalturaConversionProfile*)updateWithId:(int)aId withConversionProfile:(KalturaConversionProfile*)aConversionProfile;
// Delete Conversion Profile by ID
- (void)deleteWithId:(int)aId;
// List Conversion Profiles by filter with paging support
- (KalturaConversionProfileListResponse*)listWithFilter:(KalturaConversionProfileFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaConversionProfileListResponse*)listWithFilter:(KalturaConversionProfileFilter*)aFilter;
- (KalturaConversionProfileListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// Data service lets you manage data content (textual content)
@interface KalturaDataService : KalturaServiceBase
// Adds a new data entry
- (KalturaDataEntry*)addWithDataEntry:(KalturaDataEntry*)aDataEntry;
// Get data entry by ID.
- (KalturaDataEntry*)getWithEntryId:(NSString*)aEntryId withVersion:(int)aVersion;
- (KalturaDataEntry*)getWithEntryId:(NSString*)aEntryId;
// Update data entry. Only the properties that were set will be updated.
- (KalturaDataEntry*)updateWithEntryId:(NSString*)aEntryId withDocumentEntry:(KalturaDataEntry*)aDocumentEntry;
// Delete a data entry.
- (void)deleteWithEntryId:(NSString*)aEntryId;
// List data entries by filter with paging support.
- (KalturaDataListResponse*)listWithFilter:(KalturaDataEntryFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaDataListResponse*)listWithFilter:(KalturaDataEntryFilter*)aFilter;
- (KalturaDataListResponse*)list;
// serve action returan the file from dataContent field.
- (NSString*)serveWithEntryId:(NSString*)aEntryId withVersion:(int)aVersion withForceProxy:(KALTURA_BOOL)aForceProxy;
- (NSString*)serveWithEntryId:(NSString*)aEntryId withVersion:(int)aVersion;
- (NSString*)serveWithEntryId:(NSString*)aEntryId;
@end

// @package Kaltura
// @subpackage Client
// delivery service is used to control delivery objects
@interface KalturaDeliveryProfileService : KalturaServiceBase
// Add new delivery.
- (KalturaDeliveryProfile*)addWithDelivery:(KalturaDeliveryProfile*)aDelivery;
// Update exisiting delivery
- (KalturaDeliveryProfile*)updateWithId:(NSString*)aId withDelivery:(KalturaDeliveryProfile*)aDelivery;
// Get delivery by id
- (KalturaDeliveryProfile*)getWithId:(NSString*)aId;
// Add delivery based on existing delivery.
// 	Must provide valid sourceDeliveryId
- (KalturaDeliveryProfile*)cloneWithDeliveryId:(int)aDeliveryId;
// Retrieve a list of available delivery depends on the filter given
- (KalturaDeliveryProfileListResponse*)listWithFilter:(KalturaDeliveryProfileFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaDeliveryProfileListResponse*)listWithFilter:(KalturaDeliveryProfileFilter*)aFilter;
- (KalturaDeliveryProfileListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// EmailIngestionProfile service lets you manage email ingestion profile records
@interface KalturaEmailIngestionProfileService : KalturaServiceBase
// EmailIngestionProfile Add action allows you to add a EmailIngestionProfile to Kaltura DB
- (KalturaEmailIngestionProfile*)addWithEmailIP:(KalturaEmailIngestionProfile*)aEmailIP;
// Retrieve a EmailIngestionProfile by email address
- (KalturaEmailIngestionProfile*)getByEmailAddressWithEmailAddress:(NSString*)aEmailAddress;
// Retrieve a EmailIngestionProfile by id
- (KalturaEmailIngestionProfile*)getWithId:(int)aId;
// Update an existing EmailIngestionProfile
- (KalturaEmailIngestionProfile*)updateWithId:(int)aId withEmailIP:(KalturaEmailIngestionProfile*)aEmailIP;
// Delete an existing EmailIngestionProfile
- (void)deleteWithId:(int)aId;
// add KalturaMediaEntry from email ingestion
- (KalturaMediaEntry*)addMediaEntryWithMediaEntry:(KalturaMediaEntry*)aMediaEntry withUploadTokenId:(NSString*)aUploadTokenId withEmailProfId:(int)aEmailProfId withFromAddress:(NSString*)aFromAddress withEmailMsgId:(NSString*)aEmailMsgId;
@end

// @package Kaltura
// @subpackage Client
// Manage file assets
@interface KalturaFileAssetService : KalturaServiceBase
// Add new file asset
- (KalturaFileAsset*)addWithFileAsset:(KalturaFileAsset*)aFileAsset;
// Get file asset by id
- (KalturaFileAsset*)getWithId:(int)aId;
// Update file asset by id
- (KalturaFileAsset*)updateWithId:(int)aId withFileAsset:(KalturaFileAsset*)aFileAsset;
// Delete file asset by id
- (void)deleteWithId:(int)aId;
// Serve file asset by id
- (NSString*)serveWithId:(int)aId;
// Set content of file asset
- (KalturaFileAsset*)setContentWithId:(NSString*)aId withContentResource:(KalturaContentResource*)aContentResource;
// List file assets by filter and pager
- (KalturaFileAssetListResponse*)listWithFilter:(KalturaFileAssetFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaFileAssetListResponse*)listWithFilter:(KalturaFileAssetFilter*)aFilter;
@end

// @package Kaltura
// @subpackage Client
// Retrieve information and invoke actions on Flavor Asset
@interface KalturaFlavorAssetService : KalturaServiceBase
// Add flavor asset
- (KalturaFlavorAsset*)addWithEntryId:(NSString*)aEntryId withFlavorAsset:(KalturaFlavorAsset*)aFlavorAsset;
// Update flavor asset
- (KalturaFlavorAsset*)updateWithId:(NSString*)aId withFlavorAsset:(KalturaFlavorAsset*)aFlavorAsset;
// Update content of flavor asset
- (KalturaFlavorAsset*)setContentWithId:(NSString*)aId withContentResource:(KalturaContentResource*)aContentResource;
// Get Flavor Asset by ID
- (KalturaFlavorAsset*)getWithId:(NSString*)aId;
// Get Flavor Assets for Entry
- (NSMutableArray*)getByEntryIdWithEntryId:(NSString*)aEntryId;
// List Flavor Assets by filter and pager
- (KalturaFlavorAssetListResponse*)listWithFilter:(KalturaAssetFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaFlavorAssetListResponse*)listWithFilter:(KalturaAssetFilter*)aFilter;
- (KalturaFlavorAssetListResponse*)list;
// Get web playable Flavor Assets for Entry
- (NSMutableArray*)getWebPlayableByEntryIdWithEntryId:(NSString*)aEntryId;
// Add and convert new Flavor Asset for Entry with specific Flavor Params
- (void)convertWithEntryId:(NSString*)aEntryId withFlavorParamsId:(int)aFlavorParamsId withPriority:(int)aPriority;
- (void)convertWithEntryId:(NSString*)aEntryId withFlavorParamsId:(int)aFlavorParamsId;
// Reconvert Flavor Asset by ID
- (void)reconvertWithId:(NSString*)aId;
// Delete Flavor Asset by ID
- (void)deleteWithId:(NSString*)aId;
// Get download URL for the asset
- (NSString*)getUrlWithId:(NSString*)aId withStorageId:(int)aStorageId withForceProxy:(KALTURA_BOOL)aForceProxy;
- (NSString*)getUrlWithId:(NSString*)aId withStorageId:(int)aStorageId;
- (NSString*)getUrlWithId:(NSString*)aId;
// Get remote storage existing paths for the asset
- (KalturaRemotePathListResponse*)getRemotePathsWithId:(NSString*)aId;
// Get download URL for the Flavor Asset
- (NSString*)getDownloadUrlWithId:(NSString*)aId withUseCdn:(KALTURA_BOOL)aUseCdn;
- (NSString*)getDownloadUrlWithId:(NSString*)aId;
// Get Flavor Asset with the relevant Flavor Params (Flavor Params can exist without Flavor Asset & vice versa)
- (NSMutableArray*)getFlavorAssetsWithParamsWithEntryId:(NSString*)aEntryId;
// manually export an asset
- (KalturaFlavorAsset*)exportWithAssetId:(NSString*)aAssetId withStorageProfileId:(int)aStorageProfileId;
// Set a given flavor as the original flavor
- (void)setAsSourceWithAssetId:(NSString*)aAssetId;
// delete all local file syncs for this asset
- (void)deleteLocalContentWithAssetId:(NSString*)aAssetId;
@end

// @package Kaltura
// @subpackage Client
// Flavor Params Output service
@interface KalturaFlavorParamsOutputService : KalturaServiceBase
// Get flavor params output object by ID
- (KalturaFlavorParamsOutput*)getWithId:(int)aId;
// List flavor params output objects by filter and pager
- (KalturaFlavorParamsOutputListResponse*)listWithFilter:(KalturaFlavorParamsOutputFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaFlavorParamsOutputListResponse*)listWithFilter:(KalturaFlavorParamsOutputFilter*)aFilter;
- (KalturaFlavorParamsOutputListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// Add & Manage Flavor Params
@interface KalturaFlavorParamsService : KalturaServiceBase
// Add new Flavor Params
- (KalturaFlavorParams*)addWithFlavorParams:(KalturaFlavorParams*)aFlavorParams;
// Get Flavor Params by ID
- (KalturaFlavorParams*)getWithId:(int)aId;
// Update Flavor Params by ID
- (KalturaFlavorParams*)updateWithId:(int)aId withFlavorParams:(KalturaFlavorParams*)aFlavorParams;
// Delete Flavor Params by ID
- (void)deleteWithId:(int)aId;
// List Flavor Params by filter with paging support (By default - all system default params will be listed too)
- (KalturaFlavorParamsListResponse*)listWithFilter:(KalturaFlavorParamsFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaFlavorParamsListResponse*)listWithFilter:(KalturaFlavorParamsFilter*)aFilter;
- (KalturaFlavorParamsListResponse*)list;
// Get Flavor Params by Conversion Profile ID
- (NSMutableArray*)getByConversionProfileIdWithConversionProfileId:(int)aConversionProfileId;
@end

// @package Kaltura
// @subpackage Client
// Manage live channel segments
@interface KalturaLiveChannelSegmentService : KalturaServiceBase
// Add new live channel segment
- (KalturaLiveChannelSegment*)addWithLiveChannelSegment:(KalturaLiveChannelSegment*)aLiveChannelSegment;
// Get live channel segment by id
- (KalturaLiveChannelSegment*)getWithId:(int)aId;
// Update live channel segment by id
- (KalturaLiveChannelSegment*)updateWithId:(int)aId withLiveChannelSegment:(KalturaLiveChannelSegment*)aLiveChannelSegment;
// Delete live channel segment by id
- (void)deleteWithId:(int)aId;
// List live channel segments by filter and pager
- (KalturaLiveChannelSegmentListResponse*)listWithFilter:(KalturaLiveChannelSegmentFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaLiveChannelSegmentListResponse*)listWithFilter:(KalturaLiveChannelSegmentFilter*)aFilter;
- (KalturaLiveChannelSegmentListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// Live Channel service lets you manage live channels
@interface KalturaLiveChannelService : KalturaServiceBase
// Adds new live channel.
- (KalturaLiveChannel*)addWithLiveChannel:(KalturaLiveChannel*)aLiveChannel;
// Get live channel by ID.
- (KalturaLiveChannel*)getWithId:(NSString*)aId;
// Update live channel. Only the properties that were set will be updated.
- (KalturaLiveChannel*)updateWithId:(NSString*)aId withLiveChannel:(KalturaLiveChannel*)aLiveChannel;
// Delete a live channel.
- (void)deleteWithId:(NSString*)aId;
// List live channels by filter with paging support.
- (KalturaLiveChannelListResponse*)listWithFilter:(KalturaLiveChannelFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaLiveChannelListResponse*)listWithFilter:(KalturaLiveChannelFilter*)aFilter;
- (KalturaLiveChannelListResponse*)list;
// Delivering the status of a live channel (on-air/offline)
- (KALTURA_BOOL)isLiveWithId:(NSString*)aId;
// Append recorded video to live entry
- (KalturaLiveEntry*)appendRecordingWithEntryId:(NSString*)aEntryId withAssetId:(NSString*)aAssetId withMediaServerIndex:(int)aMediaServerIndex withResource:(KalturaDataCenterContentResource*)aResource withDuration:(double)aDuration withIsLastChunk:(KALTURA_BOOL)aIsLastChunk;
- (KalturaLiveEntry*)appendRecordingWithEntryId:(NSString*)aEntryId withAssetId:(NSString*)aAssetId withMediaServerIndex:(int)aMediaServerIndex withResource:(KalturaDataCenterContentResource*)aResource withDuration:(double)aDuration;
// Register media server to live entry
- (KalturaLiveEntry*)registerMediaServerWithEntryId:(NSString*)aEntryId withHostname:(NSString*)aHostname withMediaServerIndex:(int)aMediaServerIndex withApplicationName:(NSString*)aApplicationName;
- (KalturaLiveEntry*)registerMediaServerWithEntryId:(NSString*)aEntryId withHostname:(NSString*)aHostname withMediaServerIndex:(int)aMediaServerIndex;
// Unregister media server from live entry
- (KalturaLiveEntry*)unregisterMediaServerWithEntryId:(NSString*)aEntryId withHostname:(NSString*)aHostname withMediaServerIndex:(int)aMediaServerIndex;
// Validates all registered media servers
- (void)validateRegisteredMediaServersWithEntryId:(NSString*)aEntryId;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaLiveReportsService : KalturaServiceBase
- (NSMutableArray*)getEventsWithReportType:(NSString*)aReportType withFilter:(KalturaLiveReportInputFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (NSMutableArray*)getEventsWithReportType:(NSString*)aReportType withFilter:(KalturaLiveReportInputFilter*)aFilter;
- (NSMutableArray*)getEventsWithReportType:(NSString*)aReportType;
- (KalturaLiveStatsListResponse*)getReportWithReportType:(NSString*)aReportType withFilter:(KalturaLiveReportInputFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaLiveStatsListResponse*)getReportWithReportType:(NSString*)aReportType withFilter:(KalturaLiveReportInputFilter*)aFilter;
- (KalturaLiveStatsListResponse*)getReportWithReportType:(NSString*)aReportType;
- (KalturaLiveReportExportResponse*)exportToCsvWithReportType:(int)aReportType withParams:(KalturaLiveReportExportParams*)aParams;
// Will serve a requested report
- (NSString*)serveReportWithId:(NSString*)aId;
@end

// @package Kaltura
// @subpackage Client
// Stats Service
@interface KalturaStatsService : KalturaServiceBase
// Will write to the event log a single line representing the event
// 	 client version - will help interprete the line structure. different client versions might have slightly different data/data formats in the line
// event_id - number is the row number in yuval's excel
// datetime - same format as MySql's datetime - can change and should reflect the time zone
// session id - can be some big random number or guid
// partner id
// entry id
// unique viewer
// widget id
// ui_conf id
// uid - the puser id as set by the ppartner
// current point - in milliseconds
// duration - milliseconds
// user ip
// process duration - in milliseconds
// control id
// seek
// new point
// referrer
// 	
// 	
// 	 KalturaStatsEvent $event
- (KALTURA_BOOL)collectWithEvent:(KalturaStatsEvent*)aEvent;
// Will collect the kmcEvent sent form the KMC client
// 	 // this will actually be an empty function because all events will be sent using GET and will anyway be logged in the apache log
- (void)kmcCollectWithKmcEvent:(KalturaStatsKmcEvent*)aKmcEvent;
- (KalturaCEError*)reportKceErrorWithKalturaCEError:(KalturaCEError*)aKalturaCEError;
// Use this action to report errors to the kaltura server.
- (void)reportErrorWithErrorCode:(NSString*)aErrorCode withErrorMessage:(NSString*)aErrorMessage;
@end

// @package Kaltura
// @subpackage Client
// Live Stream service lets you manage live stream entries
@interface KalturaLiveStreamService : KalturaServiceBase
// Adds new live stream entry.
// 	 The entry will be queued for provision.
- (KalturaLiveStreamEntry*)addWithLiveStreamEntry:(KalturaLiveStreamEntry*)aLiveStreamEntry withSourceType:(NSString*)aSourceType;
- (KalturaLiveStreamEntry*)addWithLiveStreamEntry:(KalturaLiveStreamEntry*)aLiveStreamEntry;
// Get live stream entry by ID.
- (KalturaLiveStreamEntry*)getWithEntryId:(NSString*)aEntryId withVersion:(int)aVersion;
- (KalturaLiveStreamEntry*)getWithEntryId:(NSString*)aEntryId;
// Authenticate live-stream entry against stream token and partner limitations
- (KalturaLiveStreamEntry*)authenticateWithEntryId:(NSString*)aEntryId withToken:(NSString*)aToken;
// Update live stream entry. Only the properties that were set will be updated.
- (KalturaLiveStreamEntry*)updateWithEntryId:(NSString*)aEntryId withLiveStreamEntry:(KalturaLiveStreamEntry*)aLiveStreamEntry;
// Delete a live stream entry.
- (void)deleteWithEntryId:(NSString*)aEntryId;
// List live stream entries by filter with paging support.
- (KalturaLiveStreamListResponse*)listWithFilter:(KalturaLiveStreamEntryFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaLiveStreamListResponse*)listWithFilter:(KalturaLiveStreamEntryFilter*)aFilter;
- (KalturaLiveStreamListResponse*)list;
// Update live stream entry thumbnail using a raw jpeg file
- (KalturaLiveStreamEntry*)updateOfflineThumbnailJpegWithEntryId:(NSString*)aEntryId withFileData:(NSString*)aFileData;
// Update entry thumbnail using url
- (KalturaLiveStreamEntry*)updateOfflineThumbnailFromUrlWithEntryId:(NSString*)aEntryId withUrl:(NSString*)aUrl;
// Delivering the status of a live stream (on-air/offline) if it is possible
- (KALTURA_BOOL)isLiveWithId:(NSString*)aId withProtocol:(NSString*)aProtocol;
// Add new pushPublish configuration to entry
- (KalturaLiveStreamEntry*)addLiveStreamPushPublishConfigurationWithEntryId:(NSString*)aEntryId withProtocol:(NSString*)aProtocol withUrl:(NSString*)aUrl withLiveStreamConfiguration:(KalturaLiveStreamConfiguration*)aLiveStreamConfiguration;
- (KalturaLiveStreamEntry*)addLiveStreamPushPublishConfigurationWithEntryId:(NSString*)aEntryId withProtocol:(NSString*)aProtocol withUrl:(NSString*)aUrl;
- (KalturaLiveStreamEntry*)addLiveStreamPushPublishConfigurationWithEntryId:(NSString*)aEntryId withProtocol:(NSString*)aProtocol;
// Remove push publish configuration from entry
- (KalturaLiveStreamEntry*)removeLiveStreamPushPublishConfigurationWithEntryId:(NSString*)aEntryId withProtocol:(NSString*)aProtocol;
// Append recorded video to live entry
- (KalturaLiveEntry*)appendRecordingWithEntryId:(NSString*)aEntryId withAssetId:(NSString*)aAssetId withMediaServerIndex:(int)aMediaServerIndex withResource:(KalturaDataCenterContentResource*)aResource withDuration:(double)aDuration withIsLastChunk:(KALTURA_BOOL)aIsLastChunk;
- (KalturaLiveEntry*)appendRecordingWithEntryId:(NSString*)aEntryId withAssetId:(NSString*)aAssetId withMediaServerIndex:(int)aMediaServerIndex withResource:(KalturaDataCenterContentResource*)aResource withDuration:(double)aDuration;
// Register media server to live entry
- (KalturaLiveEntry*)registerMediaServerWithEntryId:(NSString*)aEntryId withHostname:(NSString*)aHostname withMediaServerIndex:(int)aMediaServerIndex withApplicationName:(NSString*)aApplicationName;
- (KalturaLiveEntry*)registerMediaServerWithEntryId:(NSString*)aEntryId withHostname:(NSString*)aHostname withMediaServerIndex:(int)aMediaServerIndex;
// Unregister media server from live entry
- (KalturaLiveEntry*)unregisterMediaServerWithEntryId:(NSString*)aEntryId withHostname:(NSString*)aHostname withMediaServerIndex:(int)aMediaServerIndex;
// Validates all registered media servers
- (void)validateRegisteredMediaServersWithEntryId:(NSString*)aEntryId;
// Creates perioding metadata sync-point events on a live stream
- (void)createPeriodicSyncPointsWithEntryId:(NSString*)aEntryId withInterval:(int)aInterval withDuration:(int)aDuration;
@end

// @package Kaltura
// @subpackage Client
// Media Info service
@interface KalturaMediaInfoService : KalturaServiceBase
// List media info objects by filter and pager
- (KalturaMediaInfoListResponse*)listWithFilter:(KalturaMediaInfoFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaMediaInfoListResponse*)listWithFilter:(KalturaMediaInfoFilter*)aFilter;
- (KalturaMediaInfoListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// Manage media servers
@interface KalturaMediaServerService : KalturaServiceBase
// Get media server by hostname
- (KalturaMediaServer*)getWithHostname:(NSString*)aHostname;
// Update media server status
- (KalturaMediaServer*)reportStatusWithHostname:(NSString*)aHostname withMediaServerStatus:(KalturaMediaServerStatus*)aMediaServerStatus;
@end

// @package Kaltura
// @subpackage Client
// Media service lets you upload and manage media files (images / videos & audio)
@interface KalturaMediaService : KalturaServiceBase
// Add entry
- (KalturaMediaEntry*)addWithEntry:(KalturaMediaEntry*)aEntry;
// Add content to media entry which is not yet associated with content (therefore is in status NO_CONTENT).
//      If the requirement is to replace the entry's associated content, use action updateContent.
- (KalturaMediaEntry*)addContentWithEntryId:(NSString*)aEntryId withResource:(KalturaResource*)aResource;
- (KalturaMediaEntry*)addContentWithEntryId:(NSString*)aEntryId;
// Adds new media entry by importing an HTTP or FTP URL.
// 	 The entry will be queued for import and then for conversion.
- (KalturaMediaEntry*)addFromUrlWithMediaEntry:(KalturaMediaEntry*)aMediaEntry withUrl:(NSString*)aUrl;
// Adds new media entry by importing the media file from a search provider.
// 	 This action should be used with the search service result.
- (KalturaMediaEntry*)addFromSearchResultWithMediaEntry:(KalturaMediaEntry*)aMediaEntry withSearchResult:(KalturaSearchResult*)aSearchResult;
- (KalturaMediaEntry*)addFromSearchResultWithMediaEntry:(KalturaMediaEntry*)aMediaEntry;
- (KalturaMediaEntry*)addFromSearchResult;
// Add new entry after the specific media file was uploaded and the upload token id exists
- (KalturaMediaEntry*)addFromUploadedFileWithMediaEntry:(KalturaMediaEntry*)aMediaEntry withUploadTokenId:(NSString*)aUploadTokenId;
// Add new entry after the file was recored on the server and the token id exists
- (KalturaMediaEntry*)addFromRecordedWebcamWithMediaEntry:(KalturaMediaEntry*)aMediaEntry withWebcamTokenId:(NSString*)aWebcamTokenId;
// Copy entry into new entry
- (KalturaMediaEntry*)addFromEntryWithSourceEntryId:(NSString*)aSourceEntryId withMediaEntry:(KalturaMediaEntry*)aMediaEntry withSourceFlavorParamsId:(int)aSourceFlavorParamsId;
- (KalturaMediaEntry*)addFromEntryWithSourceEntryId:(NSString*)aSourceEntryId withMediaEntry:(KalturaMediaEntry*)aMediaEntry;
- (KalturaMediaEntry*)addFromEntryWithSourceEntryId:(NSString*)aSourceEntryId;
// Copy flavor asset into new entry
- (KalturaMediaEntry*)addFromFlavorAssetWithSourceFlavorAssetId:(NSString*)aSourceFlavorAssetId withMediaEntry:(KalturaMediaEntry*)aMediaEntry;
- (KalturaMediaEntry*)addFromFlavorAssetWithSourceFlavorAssetId:(NSString*)aSourceFlavorAssetId;
// Convert entry
- (int)convertWithEntryId:(NSString*)aEntryId withConversionProfileId:(int)aConversionProfileId withDynamicConversionAttributes:(NSArray*)aDynamicConversionAttributes;
- (int)convertWithEntryId:(NSString*)aEntryId withConversionProfileId:(int)aConversionProfileId;
- (int)convertWithEntryId:(NSString*)aEntryId;
// Get media entry by ID.
- (KalturaMediaEntry*)getWithEntryId:(NSString*)aEntryId withVersion:(int)aVersion;
- (KalturaMediaEntry*)getWithEntryId:(NSString*)aEntryId;
// Get MRSS by entry id
//      XML will return as an escaped string
- (NSString*)getMrssWithEntryId:(NSString*)aEntryId withExtendingItemsArray:(NSArray*)aExtendingItemsArray;
- (NSString*)getMrssWithEntryId:(NSString*)aEntryId;
// Update media entry. Only the properties that were set will be updated.
- (KalturaMediaEntry*)updateWithEntryId:(NSString*)aEntryId withMediaEntry:(KalturaMediaEntry*)aMediaEntry;
// Replace content associated with the media entry.
- (KalturaMediaEntry*)updateContentWithEntryId:(NSString*)aEntryId withResource:(KalturaResource*)aResource withConversionProfileId:(int)aConversionProfileId withAdvancedOptions:(KalturaEntryReplacementOptions*)aAdvancedOptions;
- (KalturaMediaEntry*)updateContentWithEntryId:(NSString*)aEntryId withResource:(KalturaResource*)aResource withConversionProfileId:(int)aConversionProfileId;
- (KalturaMediaEntry*)updateContentWithEntryId:(NSString*)aEntryId withResource:(KalturaResource*)aResource;
// Delete a media entry.
- (void)deleteWithEntryId:(NSString*)aEntryId;
// Approves media replacement
- (KalturaMediaEntry*)approveReplaceWithEntryId:(NSString*)aEntryId;
// Cancels media replacement
- (KalturaMediaEntry*)cancelReplaceWithEntryId:(NSString*)aEntryId;
// List media entries by filter with paging support.
- (KalturaMediaListResponse*)listWithFilter:(KalturaMediaEntryFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaMediaListResponse*)listWithFilter:(KalturaMediaEntryFilter*)aFilter;
- (KalturaMediaListResponse*)list;
// Count media entries by filter.
- (int)countWithFilter:(KalturaMediaEntryFilter*)aFilter;
- (int)count;
// Upload a media file to Kaltura, then the file can be used to create a media entry.
- (NSString*)uploadWithFileData:(NSString*)aFileData;
// Update media entry thumbnail by a specified time offset (In seconds)
// 	 If flavor params id not specified, source flavor will be used by default
- (KalturaMediaEntry*)updateThumbnailWithEntryId:(NSString*)aEntryId withTimeOffset:(int)aTimeOffset withFlavorParamsId:(int)aFlavorParamsId;
- (KalturaMediaEntry*)updateThumbnailWithEntryId:(NSString*)aEntryId withTimeOffset:(int)aTimeOffset;
// Update media entry thumbnail from a different entry by a specified time offset (In seconds)
// 	 If flavor params id not specified, source flavor will be used by default
- (KalturaMediaEntry*)updateThumbnailFromSourceEntryWithEntryId:(NSString*)aEntryId withSourceEntryId:(NSString*)aSourceEntryId withTimeOffset:(int)aTimeOffset withFlavorParamsId:(int)aFlavorParamsId;
- (KalturaMediaEntry*)updateThumbnailFromSourceEntryWithEntryId:(NSString*)aEntryId withSourceEntryId:(NSString*)aSourceEntryId withTimeOffset:(int)aTimeOffset;
// Update media entry thumbnail using a raw jpeg file
- (KalturaMediaEntry*)updateThumbnailJpegWithEntryId:(NSString*)aEntryId withFileData:(NSString*)aFileData;
// Update entry thumbnail using url
- (KalturaBaseEntry*)updateThumbnailFromUrlWithEntryId:(NSString*)aEntryId withUrl:(NSString*)aUrl;
// Request a new conversion job, this can be used to convert the media entry to a different format
- (int)requestConversionWithEntryId:(NSString*)aEntryId withFileFormat:(NSString*)aFileFormat;
// Flag inappropriate media entry for moderation
- (void)flagWithModerationFlag:(KalturaModerationFlag*)aModerationFlag;
// Reject the media entry and mark the pending flags (if any) as moderated (this will make the entry non playable)
- (void)rejectWithEntryId:(NSString*)aEntryId;
// Approve the media entry and mark the pending flags (if any) as moderated (this will make the entry playable)
- (void)approveWithEntryId:(NSString*)aEntryId;
// List all pending flags for the media entry
- (KalturaModerationFlagListResponse*)listFlagsWithEntryId:(NSString*)aEntryId withPager:(KalturaFilterPager*)aPager;
- (KalturaModerationFlagListResponse*)listFlagsWithEntryId:(NSString*)aEntryId;
// Anonymously rank a media entry, no validation is done on duplicate rankings
- (void)anonymousRankWithEntryId:(NSString*)aEntryId withRank:(int)aRank;
// Add new bulk upload batch job
// 	 Conversion profile id can be specified in the API or in the CSV file, the one in the CSV file will be stronger.
// 	 If no conversion profile was specified, partner's default will be used
- (KalturaBulkUpload*)bulkUploadAddWithFileData:(NSString*)aFileData withBulkUploadData:(KalturaBulkUploadJobData*)aBulkUploadData withBulkUploadEntryData:(KalturaBulkUploadEntryData*)aBulkUploadEntryData;
- (KalturaBulkUpload*)bulkUploadAddWithFileData:(NSString*)aFileData withBulkUploadData:(KalturaBulkUploadJobData*)aBulkUploadData;
- (KalturaBulkUpload*)bulkUploadAddWithFileData:(NSString*)aFileData;
@end

// @package Kaltura
// @subpackage Client
// A Mix is an XML unique format invented by Kaltura, it allows the user to create a mix of videos and images, in and out points, transitions, text overlays, soundtrack, effects and much more...
//  Mixing service lets you create a new mix, manage its metadata and make basic manipulations.
@interface KalturaMixingService : KalturaServiceBase
// Adds a new mix.
// 	 If the dataContent is null, a default timeline will be created.
- (KalturaMixEntry*)addWithMixEntry:(KalturaMixEntry*)aMixEntry;
// Get mix entry by id.
- (KalturaMixEntry*)getWithEntryId:(NSString*)aEntryId withVersion:(int)aVersion;
- (KalturaMixEntry*)getWithEntryId:(NSString*)aEntryId;
// Update mix entry. Only the properties that were set will be updated.
- (KalturaMixEntry*)updateWithEntryId:(NSString*)aEntryId withMixEntry:(KalturaMixEntry*)aMixEntry;
// Delete a mix entry.
- (void)deleteWithEntryId:(NSString*)aEntryId;
// List entries by filter with paging support.
// 	 Return parameter is an array of mix entries.
- (KalturaMixListResponse*)listWithFilter:(KalturaMixEntryFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaMixListResponse*)listWithFilter:(KalturaMixEntryFilter*)aFilter;
- (KalturaMixListResponse*)list;
// Count mix entries by filter.
- (int)countWithFilter:(KalturaMediaEntryFilter*)aFilter;
- (int)count;
// Clones an existing mix.
- (KalturaMixEntry*)cloneWithEntryId:(NSString*)aEntryId;
// Appends a media entry to a the end of the mix timeline, this will save the mix timeline as a new version.
- (KalturaMixEntry*)appendMediaEntryWithMixEntryId:(NSString*)aMixEntryId withMediaEntryId:(NSString*)aMediaEntryId;
// Get the mixes in which the media entry is included
- (NSMutableArray*)getMixesByMediaIdWithMediaEntryId:(NSString*)aMediaEntryId;
// Get all ready media entries that exist in the given mix id
- (NSMutableArray*)getReadyMediaEntriesWithMixId:(NSString*)aMixId withVersion:(int)aVersion;
- (NSMutableArray*)getReadyMediaEntriesWithMixId:(NSString*)aMixId;
// Anonymously rank a mix entry, no validation is done on duplicate rankings
- (void)anonymousRankWithEntryId:(NSString*)aEntryId withRank:(int)aRank;
@end

// @package Kaltura
// @subpackage Client
// Notification Service
@interface KalturaNotificationService : KalturaServiceBase
// Return the notifications for a specific entry id and type
- (KalturaClientNotification*)getClientNotificationWithEntryId:(NSString*)aEntryId withType:(int)aType;
@end

// @package Kaltura
// @subpackage Client
// partner service allows you to change/manage your partner personal details and settings as well
@interface KalturaPartnerService : KalturaServiceBase
// Create a new Partner object
- (KalturaPartner*)registerWithPartner:(KalturaPartner*)aPartner withCmsPassword:(NSString*)aCmsPassword withTemplatePartnerId:(int)aTemplatePartnerId withSilent:(KALTURA_BOOL)aSilent;
- (KalturaPartner*)registerWithPartner:(KalturaPartner*)aPartner withCmsPassword:(NSString*)aCmsPassword withTemplatePartnerId:(int)aTemplatePartnerId;
- (KalturaPartner*)registerWithPartner:(KalturaPartner*)aPartner withCmsPassword:(NSString*)aCmsPassword;
- (KalturaPartner*)registerWithPartner:(KalturaPartner*)aPartner;
// Update details and settings of an existing partner
- (KalturaPartner*)updateWithPartner:(KalturaPartner*)aPartner withAllowEmpty:(KALTURA_BOOL)aAllowEmpty;
- (KalturaPartner*)updateWithPartner:(KalturaPartner*)aPartner;
// Retrieve partner object by Id
- (KalturaPartner*)getWithId:(int)aId;
- (KalturaPartner*)get;
// Retrieve partner secret and admin secret
- (KalturaPartner*)getSecretsWithPartnerId:(int)aPartnerId withAdminEmail:(NSString*)aAdminEmail withCmsPassword:(NSString*)aCmsPassword;
// Retrieve all info attributed to the partner
// 	 This action expects no parameters. It returns information for the current KS partnerId.
- (KalturaPartner*)getInfo;
// Get usage statistics for a partner
// 	 Calculation is done according to partner's package
// 	 Additional data returned is a graph points of streaming usage in a timeframe
// 	 The resolution can be "days" or "months"
- (KalturaPartnerUsage*)getUsageWithYear:(int)aYear withMonth:(int)aMonth withResolution:(NSString*)aResolution;
- (KalturaPartnerUsage*)getUsageWithYear:(int)aYear withMonth:(int)aMonth;
- (KalturaPartnerUsage*)getUsageWithYear:(int)aYear;
- (KalturaPartnerUsage*)getUsage;
// Get usage statistics for a partner
// 	 Calculation is done according to partner's package
- (KalturaPartnerStatistics*)getStatistics;
// Retrieve a list of partner objects which the current user is allowed to access.
- (KalturaPartnerListResponse*)listPartnersForUserWithPartnerFilter:(KalturaPartnerFilter*)aPartnerFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaPartnerListResponse*)listPartnersForUserWithPartnerFilter:(KalturaPartnerFilter*)aPartnerFilter;
- (KalturaPartnerListResponse*)listPartnersForUser;
// List partners by filter with paging support
// 	 Current implementation will only list the sub partners of the partner initiating the api call (using the current KS).
// 	 This action is only partially implemented to support listing sub partners of a VAR partner.
- (KalturaPartnerListResponse*)listWithFilter:(KalturaPartnerFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaPartnerListResponse*)listWithFilter:(KalturaPartnerFilter*)aFilter;
- (KalturaPartnerListResponse*)list;
// List partner's current processes' statuses
- (KalturaFeatureStatusListResponse*)listFeatureStatus;
// Count partner's existing sub-publishers (count includes the partner itself).
- (int)countWithFilter:(KalturaPartnerFilter*)aFilter;
- (int)count;
@end

// @package Kaltura
// @subpackage Client
// PermissionItem service lets you create and manage permission items
@interface KalturaPermissionItemService : KalturaServiceBase
// Adds a new permission item object to the account.
// 	 This action is available only to Kaltura system administrators.
- (KalturaPermissionItem*)addWithPermissionItem:(KalturaPermissionItem*)aPermissionItem;
// Retrieves a permission item object using its ID.
- (KalturaPermissionItem*)getWithPermissionItemId:(int)aPermissionItemId;
// Updates an existing permission item object.
// 	 This action is available only to Kaltura system administrators.
- (KalturaPermissionItem*)updateWithPermissionItemId:(int)aPermissionItemId withPermissionItem:(KalturaPermissionItem*)aPermissionItem;
// Deletes an existing permission item object.
// 	 This action is available only to Kaltura system administrators.
- (KalturaPermissionItem*)deleteWithPermissionItemId:(int)aPermissionItemId;
// Lists permission item objects that are associated with an account.
- (KalturaPermissionItemListResponse*)listWithFilter:(KalturaPermissionItemFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaPermissionItemListResponse*)listWithFilter:(KalturaPermissionItemFilter*)aFilter;
- (KalturaPermissionItemListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// Permission service lets you create and manage user permissions
@interface KalturaPermissionService : KalturaServiceBase
// Adds a new permission object to the account.
- (KalturaPermission*)addWithPermission:(KalturaPermission*)aPermission;
// Retrieves a permission object using its ID.
- (KalturaPermission*)getWithPermissionName:(NSString*)aPermissionName;
// Updates an existing permission object.
- (KalturaPermission*)updateWithPermissionName:(NSString*)aPermissionName withPermission:(KalturaPermission*)aPermission;
// Deletes an existing permission object.
- (KalturaPermission*)deleteWithPermissionName:(NSString*)aPermissionName;
// Lists permission objects that are associated with an account.
// 	 Blocked permissions are listed unless you use a filter to exclude them.
// 	 Blocked permissions are listed unless you use a filter to exclude them.
- (KalturaPermissionListResponse*)listWithFilter:(KalturaPermissionFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaPermissionListResponse*)listWithFilter:(KalturaPermissionFilter*)aFilter;
- (KalturaPermissionListResponse*)list;
// Retrieves a list of permissions that apply to the current KS.
- (NSString*)getCurrentPermissions;
@end

// @package Kaltura
// @subpackage Client
// Playlist service lets you create,manage and play your playlists
//  Playlists could be static (containing a fixed list of entries) or dynamic (baseed on a filter)
@interface KalturaPlaylistService : KalturaServiceBase
// Add new playlist
// 	 Note that all entries used in a playlist will become public and may appear in KalturaNetwork
- (KalturaPlaylist*)addWithPlaylist:(KalturaPlaylist*)aPlaylist withUpdateStats:(KALTURA_BOOL)aUpdateStats;
- (KalturaPlaylist*)addWithPlaylist:(KalturaPlaylist*)aPlaylist;
// Retrieve a playlist
- (KalturaPlaylist*)getWithId:(NSString*)aId withVersion:(int)aVersion;
- (KalturaPlaylist*)getWithId:(NSString*)aId;
// Update existing playlist
// 	 Note - you cannot change playlist type. updated playlist must be of the same type.
- (KalturaPlaylist*)updateWithId:(NSString*)aId withPlaylist:(KalturaPlaylist*)aPlaylist withUpdateStats:(KALTURA_BOOL)aUpdateStats;
- (KalturaPlaylist*)updateWithId:(NSString*)aId withPlaylist:(KalturaPlaylist*)aPlaylist;
// Delete existing playlist
- (void)deleteWithId:(NSString*)aId;
// Clone an existing playlist
- (KalturaPlaylist*)cloneWithId:(NSString*)aId withNewPlaylist:(KalturaPlaylist*)aNewPlaylist;
- (KalturaPlaylist*)cloneWithId:(NSString*)aId;
// List available playlists
- (KalturaPlaylistListResponse*)listWithFilter:(KalturaPlaylistFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaPlaylistListResponse*)listWithFilter:(KalturaPlaylistFilter*)aFilter;
- (KalturaPlaylistListResponse*)list;
// Retrieve playlist for playing purpose
- (NSMutableArray*)executeWithId:(NSString*)aId withDetailed:(NSString*)aDetailed withPlaylistContext:(KalturaContext*)aPlaylistContext withFilter:(KalturaMediaEntryFilterForPlaylist*)aFilter;
- (NSMutableArray*)executeWithId:(NSString*)aId withDetailed:(NSString*)aDetailed withPlaylistContext:(KalturaContext*)aPlaylistContext;
- (NSMutableArray*)executeWithId:(NSString*)aId withDetailed:(NSString*)aDetailed;
- (NSMutableArray*)executeWithId:(NSString*)aId;
// Retrieve playlist for playing purpose, based on content
- (NSMutableArray*)executeFromContentWithPlaylistType:(int)aPlaylistType withPlaylistContent:(NSString*)aPlaylistContent withDetailed:(NSString*)aDetailed;
- (NSMutableArray*)executeFromContentWithPlaylistType:(int)aPlaylistType withPlaylistContent:(NSString*)aPlaylistContent;
// Revrieve playlist for playing purpose, based on media entry filters
- (NSMutableArray*)executeFromFiltersWithFilters:(NSArray*)aFilters withTotalResults:(int)aTotalResults withDetailed:(NSString*)aDetailed;
- (NSMutableArray*)executeFromFiltersWithFilters:(NSArray*)aFilters withTotalResults:(int)aTotalResults;
// Retrieve playlist statistics
- (KalturaPlaylist*)getStatsFromContentWithPlaylistType:(int)aPlaylistType withPlaylistContent:(NSString*)aPlaylistContent;
@end

// @package Kaltura
// @subpackage Client
// api for getting reports data by the report type and some inputFilter
@interface KalturaReportService : KalturaServiceBase
// report getGraphs action allows to get a graph data for a specific report.
- (NSMutableArray*)getGraphsWithReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter withDimension:(NSString*)aDimension withObjectIds:(NSString*)aObjectIds;
- (NSMutableArray*)getGraphsWithReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter withDimension:(NSString*)aDimension;
- (NSMutableArray*)getGraphsWithReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter;
// report getTotal action allows to get a graph data for a specific report.
- (KalturaReportTotal*)getTotalWithReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter withObjectIds:(NSString*)aObjectIds;
- (KalturaReportTotal*)getTotalWithReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter;
// report getBaseTotal action allows to get a the total base for storage reports
- (NSMutableArray*)getBaseTotalWithReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter withObjectIds:(NSString*)aObjectIds;
- (NSMutableArray*)getBaseTotalWithReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter;
// report getTable action allows to get a graph data for a specific report.
- (KalturaReportTable*)getTableWithReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter withPager:(KalturaFilterPager*)aPager withOrder:(NSString*)aOrder withObjectIds:(NSString*)aObjectIds;
- (KalturaReportTable*)getTableWithReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter withPager:(KalturaFilterPager*)aPager withOrder:(NSString*)aOrder;
- (KalturaReportTable*)getTableWithReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter withPager:(KalturaFilterPager*)aPager;
// will create a Csv file for the given report and return the URL to access it
- (NSString*)getUrlForReportAsCsvWithReportTitle:(NSString*)aReportTitle withReportText:(NSString*)aReportText withHeaders:(NSString*)aHeaders withReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter withDimension:(NSString*)aDimension withPager:(KalturaFilterPager*)aPager withOrder:(NSString*)aOrder withObjectIds:(NSString*)aObjectIds;
- (NSString*)getUrlForReportAsCsvWithReportTitle:(NSString*)aReportTitle withReportText:(NSString*)aReportText withHeaders:(NSString*)aHeaders withReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter withDimension:(NSString*)aDimension withPager:(KalturaFilterPager*)aPager withOrder:(NSString*)aOrder;
- (NSString*)getUrlForReportAsCsvWithReportTitle:(NSString*)aReportTitle withReportText:(NSString*)aReportText withHeaders:(NSString*)aHeaders withReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter withDimension:(NSString*)aDimension withPager:(KalturaFilterPager*)aPager;
- (NSString*)getUrlForReportAsCsvWithReportTitle:(NSString*)aReportTitle withReportText:(NSString*)aReportText withHeaders:(NSString*)aHeaders withReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter withDimension:(NSString*)aDimension;
- (NSString*)getUrlForReportAsCsvWithReportTitle:(NSString*)aReportTitle withReportText:(NSString*)aReportText withHeaders:(NSString*)aHeaders withReportType:(int)aReportType withReportInputFilter:(KalturaReportInputFilter*)aReportInputFilter;
// Will serve a requested report
- (NSString*)serveWithId:(NSString*)aId;
- (KalturaReportResponse*)executeWithId:(int)aId withParams:(NSArray*)aParams;
- (KalturaReportResponse*)executeWithId:(int)aId;
- (NSString*)getCsvWithId:(int)aId withParams:(NSArray*)aParams;
- (NSString*)getCsvWithId:(int)aId;
// Returns report CSV file executed by string params with the following convention: param1=value1;param2=value2
- (NSString*)getCsvFromStringParamsWithId:(int)aId withParams:(NSString*)aParams;
- (NSString*)getCsvFromStringParamsWithId:(int)aId;
@end

// @package Kaltura
// @subpackage Client
// Expose the schema definitions for syndication MRSS, bulk upload XML and other schema types.
@interface KalturaSchemaService : KalturaServiceBase
// Serves the requested XSD according to the type and name.
- (NSString*)serveWithType:(NSString*)aType;
@end

// @package Kaltura
// @subpackage Client
// Search service allows you to search for media in various media providers
//  This service is being used mostly by the CW component
@interface KalturaSearchService : KalturaServiceBase
// Search for media in one of the supported media providers
- (KalturaSearchResultResponse*)searchWithSearch:(KalturaSearch*)aSearch withPager:(KalturaFilterPager*)aPager;
- (KalturaSearchResultResponse*)searchWithSearch:(KalturaSearch*)aSearch;
// Retrieve extra information about media found in search action
// 	 Some providers return only part of the fields needed to create entry from, use this action to get the rest of the fields.
- (KalturaSearchResult*)getMediaInfoWithSearchResult:(KalturaSearchResult*)aSearchResult;
// Search for media given a specific URL
// 	 Kaltura supports a searchURL action on some of the media providers.
// 	 This action will return a KalturaSearchResult object based on a given URL (assuming the media provider is supported)
- (KalturaSearchResult*)searchUrlWithMediaType:(int)aMediaType withUrl:(NSString*)aUrl;
- (KalturaSearchAuthData*)externalLoginWithSearchSource:(int)aSearchSource withUserName:(NSString*)aUserName withPassword:(NSString*)aPassword;
@end

// @package Kaltura
// @subpackage Client
// Session service
@interface KalturaSessionService : KalturaServiceBase
// Start a session with Kaltura's server.
// 	 The result KS is the session key that you should pass to all services that requires a ticket.
- (NSString*)startWithSecret:(NSString*)aSecret withUserId:(NSString*)aUserId withType:(int)aType withPartnerId:(int)aPartnerId withExpiry:(int)aExpiry withPrivileges:(NSString*)aPrivileges;
- (NSString*)startWithSecret:(NSString*)aSecret withUserId:(NSString*)aUserId withType:(int)aType withPartnerId:(int)aPartnerId withExpiry:(int)aExpiry;
- (NSString*)startWithSecret:(NSString*)aSecret withUserId:(NSString*)aUserId withType:(int)aType withPartnerId:(int)aPartnerId;
- (NSString*)startWithSecret:(NSString*)aSecret withUserId:(NSString*)aUserId withType:(int)aType;
- (NSString*)startWithSecret:(NSString*)aSecret withUserId:(NSString*)aUserId;
- (NSString*)startWithSecret:(NSString*)aSecret;
// End a session with the Kaltura server, making the current KS invalid.
- (void)end;
// Start an impersonated session with Kaltura's server.
// 	 The result KS is the session key that you should pass to all services that requires a ticket.
- (NSString*)impersonateWithSecret:(NSString*)aSecret withImpersonatedPartnerId:(int)aImpersonatedPartnerId withUserId:(NSString*)aUserId withType:(int)aType withPartnerId:(int)aPartnerId withExpiry:(int)aExpiry withPrivileges:(NSString*)aPrivileges;
- (NSString*)impersonateWithSecret:(NSString*)aSecret withImpersonatedPartnerId:(int)aImpersonatedPartnerId withUserId:(NSString*)aUserId withType:(int)aType withPartnerId:(int)aPartnerId withExpiry:(int)aExpiry;
- (NSString*)impersonateWithSecret:(NSString*)aSecret withImpersonatedPartnerId:(int)aImpersonatedPartnerId withUserId:(NSString*)aUserId withType:(int)aType withPartnerId:(int)aPartnerId;
- (NSString*)impersonateWithSecret:(NSString*)aSecret withImpersonatedPartnerId:(int)aImpersonatedPartnerId withUserId:(NSString*)aUserId withType:(int)aType;
- (NSString*)impersonateWithSecret:(NSString*)aSecret withImpersonatedPartnerId:(int)aImpersonatedPartnerId withUserId:(NSString*)aUserId;
- (NSString*)impersonateWithSecret:(NSString*)aSecret withImpersonatedPartnerId:(int)aImpersonatedPartnerId;
// Start an impersonated session with Kaltura's server.
// 	 The result KS info contains the session key that you should pass to all services that requires a ticket.
// 	 Type, expiry and privileges won't be changed if they're not set
- (KalturaSessionInfo*)impersonateByKsWithSession:(NSString*)aSession withType:(int)aType withExpiry:(int)aExpiry withPrivileges:(NSString*)aPrivileges;
- (KalturaSessionInfo*)impersonateByKsWithSession:(NSString*)aSession withType:(int)aType withExpiry:(int)aExpiry;
- (KalturaSessionInfo*)impersonateByKsWithSession:(NSString*)aSession withType:(int)aType;
- (KalturaSessionInfo*)impersonateByKsWithSession:(NSString*)aSession;
// Parse session key and return its info
- (KalturaSessionInfo*)getWithSession:(NSString*)aSession;
- (KalturaSessionInfo*)get;
// Start a session for Kaltura's flash widgets
- (KalturaStartWidgetSessionResponse*)startWidgetSessionWithWidgetId:(NSString*)aWidgetId withExpiry:(int)aExpiry;
- (KalturaStartWidgetSessionResponse*)startWidgetSessionWithWidgetId:(NSString*)aWidgetId;
@end

// @package Kaltura
// @subpackage Client
// Storage Profiles service
@interface KalturaStorageProfileService : KalturaServiceBase
// Adds a storage profile to the Kaltura DB.
- (KalturaStorageProfile*)addWithStorageProfile:(KalturaStorageProfile*)aStorageProfile;
- (void)updateStatusWithStorageId:(int)aStorageId withStatus:(int)aStatus;
// Get storage profile by id
- (KalturaStorageProfile*)getWithStorageProfileId:(int)aStorageProfileId;
// Update storage profile by id
- (KalturaStorageProfile*)updateWithStorageProfileId:(int)aStorageProfileId withStorageProfile:(KalturaStorageProfile*)aStorageProfile;
- (KalturaStorageProfileListResponse*)listWithFilter:(KalturaStorageProfileFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaStorageProfileListResponse*)listWithFilter:(KalturaStorageProfileFilter*)aFilter;
- (KalturaStorageProfileListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// Add & Manage Syndication Feeds
@interface KalturaSyndicationFeedService : KalturaServiceBase
// Add new Syndication Feed
- (KalturaBaseSyndicationFeed*)addWithSyndicationFeed:(KalturaBaseSyndicationFeed*)aSyndicationFeed;
// Get Syndication Feed by ID
- (KalturaBaseSyndicationFeed*)getWithId:(NSString*)aId;
// Update Syndication Feed by ID
- (KalturaBaseSyndicationFeed*)updateWithId:(NSString*)aId withSyndicationFeed:(KalturaBaseSyndicationFeed*)aSyndicationFeed;
// Delete Syndication Feed by ID
- (void)deleteWithId:(NSString*)aId;
// List Syndication Feeds by filter with paging support
- (KalturaBaseSyndicationFeedListResponse*)listWithFilter:(KalturaBaseSyndicationFeedFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaBaseSyndicationFeedListResponse*)listWithFilter:(KalturaBaseSyndicationFeedFilter*)aFilter;
- (KalturaBaseSyndicationFeedListResponse*)list;
// get entry count for a syndication feed
- (KalturaSyndicationFeedEntryCount*)getEntryCountWithFeedId:(NSString*)aFeedId;
// request conversion for all entries that doesnt have the required flavor param
// 	 returns a comma-separated ids of conversion jobs
- (NSString*)requestConversionWithFeedId:(NSString*)aFeedId;
@end

// @package Kaltura
// @subpackage Client
// System service is used for internal system helpers & to retrieve system level information
@interface KalturaSystemService : KalturaServiceBase
- (KALTURA_BOOL)ping;
- (KALTURA_BOOL)pingDatabase;
- (int)getTime;
- (NSString*)getVersion;
@end

// @package Kaltura
// @subpackage Client
// Retrieve information and invoke actions on Thumb Asset
@interface KalturaThumbAssetService : KalturaServiceBase
// Add thumbnail asset
- (KalturaThumbAsset*)addWithEntryId:(NSString*)aEntryId withThumbAsset:(KalturaThumbAsset*)aThumbAsset;
// Update content of thumbnail asset
- (KalturaThumbAsset*)setContentWithId:(NSString*)aId withContentResource:(KalturaContentResource*)aContentResource;
// Update thumbnail asset
- (KalturaThumbAsset*)updateWithId:(NSString*)aId withThumbAsset:(KalturaThumbAsset*)aThumbAsset;
// Serves thumbnail by entry id and thumnail params id
- (NSString*)serveByEntryIdWithEntryId:(NSString*)aEntryId withThumbParamId:(int)aThumbParamId;
- (NSString*)serveByEntryIdWithEntryId:(NSString*)aEntryId;
// Serves thumbnail by its id
- (NSString*)serveWithThumbAssetId:(NSString*)aThumbAssetId withVersion:(int)aVersion withThumbParams:(KalturaThumbParams*)aThumbParams withOptions:(KalturaThumbnailServeOptions*)aOptions;
- (NSString*)serveWithThumbAssetId:(NSString*)aThumbAssetId withVersion:(int)aVersion withThumbParams:(KalturaThumbParams*)aThumbParams;
- (NSString*)serveWithThumbAssetId:(NSString*)aThumbAssetId withVersion:(int)aVersion;
- (NSString*)serveWithThumbAssetId:(NSString*)aThumbAssetId;
// Tags the thumbnail as DEFAULT_THUMB and removes that tag from all other thumbnail assets of the entry.
// 	 Create a new file sync link on the entry thumbnail that points to the thumbnail asset file sync.
- (void)setAsDefaultWithThumbAssetId:(NSString*)aThumbAssetId;
- (KalturaThumbAsset*)generateByEntryIdWithEntryId:(NSString*)aEntryId withDestThumbParamsId:(int)aDestThumbParamsId;
- (KalturaThumbAsset*)generateWithEntryId:(NSString*)aEntryId withThumbParams:(KalturaThumbParams*)aThumbParams withSourceAssetId:(NSString*)aSourceAssetId;
- (KalturaThumbAsset*)generateWithEntryId:(NSString*)aEntryId withThumbParams:(KalturaThumbParams*)aThumbParams;
- (KalturaThumbAsset*)regenerateWithThumbAssetId:(NSString*)aThumbAssetId;
- (KalturaThumbAsset*)getWithThumbAssetId:(NSString*)aThumbAssetId;
- (NSMutableArray*)getByEntryIdWithEntryId:(NSString*)aEntryId;
// List Thumbnail Assets by filter and pager
- (KalturaThumbAssetListResponse*)listWithFilter:(KalturaAssetFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaThumbAssetListResponse*)listWithFilter:(KalturaAssetFilter*)aFilter;
- (KalturaThumbAssetListResponse*)list;
- (KalturaThumbAsset*)addFromUrlWithEntryId:(NSString*)aEntryId withUrl:(NSString*)aUrl;
- (KalturaThumbAsset*)addFromImageWithEntryId:(NSString*)aEntryId withFileData:(NSString*)aFileData;
- (void)deleteWithThumbAssetId:(NSString*)aThumbAssetId;
// Get download URL for the asset
- (NSString*)getUrlWithId:(NSString*)aId withStorageId:(int)aStorageId withThumbParams:(KalturaThumbParams*)aThumbParams;
- (NSString*)getUrlWithId:(NSString*)aId withStorageId:(int)aStorageId;
- (NSString*)getUrlWithId:(NSString*)aId;
// Get remote storage existing paths for the asset
- (KalturaRemotePathListResponse*)getRemotePathsWithId:(NSString*)aId;
@end

// @package Kaltura
// @subpackage Client
// Thumbnail Params Output service
@interface KalturaThumbParamsOutputService : KalturaServiceBase
// Get thumb params output object by ID
- (KalturaThumbParamsOutput*)getWithId:(int)aId;
// List thumb params output objects by filter and pager
- (KalturaThumbParamsOutputListResponse*)listWithFilter:(KalturaThumbParamsOutputFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaThumbParamsOutputListResponse*)listWithFilter:(KalturaThumbParamsOutputFilter*)aFilter;
- (KalturaThumbParamsOutputListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// Add & Manage Thumb Params
@interface KalturaThumbParamsService : KalturaServiceBase
// Add new Thumb Params
- (KalturaThumbParams*)addWithThumbParams:(KalturaThumbParams*)aThumbParams;
// Get Thumb Params by ID
- (KalturaThumbParams*)getWithId:(int)aId;
// Update Thumb Params by ID
- (KalturaThumbParams*)updateWithId:(int)aId withThumbParams:(KalturaThumbParams*)aThumbParams;
// Delete Thumb Params by ID
- (void)deleteWithId:(int)aId;
// List Thumb Params by filter with paging support (By default - all system default params will be listed too)
- (KalturaThumbParamsListResponse*)listWithFilter:(KalturaThumbParamsFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaThumbParamsListResponse*)listWithFilter:(KalturaThumbParamsFilter*)aFilter;
- (KalturaThumbParamsListResponse*)list;
// Get Thumb Params by Conversion Profile ID
- (NSMutableArray*)getByConversionProfileIdWithConversionProfileId:(int)aConversionProfileId;
@end

// @package Kaltura
// @subpackage Client
// UiConf service lets you create and manage your UIConfs for the various flash components
//  This service is used by the KMC-ApplicationStudio
@interface KalturaUiConfService : KalturaServiceBase
// UIConf Add action allows you to add a UIConf to Kaltura DB
- (KalturaUiConf*)addWithUiConf:(KalturaUiConf*)aUiConf;
// Update an existing UIConf
- (KalturaUiConf*)updateWithId:(int)aId withUiConf:(KalturaUiConf*)aUiConf;
// Retrieve a UIConf by id
- (KalturaUiConf*)getWithId:(int)aId;
// Delete an existing UIConf
- (void)deleteWithId:(int)aId;
// Clone an existing UIConf
- (KalturaUiConf*)cloneWithId:(int)aId;
// retrieve a list of available template UIConfs
- (KalturaUiConfListResponse*)listTemplatesWithFilter:(KalturaUiConfFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaUiConfListResponse*)listTemplatesWithFilter:(KalturaUiConfFilter*)aFilter;
- (KalturaUiConfListResponse*)listTemplates;
// Retrieve a list of available UIConfs
- (KalturaUiConfListResponse*)listWithFilter:(KalturaUiConfFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaUiConfListResponse*)listWithFilter:(KalturaUiConfFilter*)aFilter;
- (KalturaUiConfListResponse*)list;
// Retrieve a list of all available versions by object type
- (NSMutableArray*)getAvailableTypes;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUploadService : KalturaServiceBase
- (NSString*)uploadWithFileData:(NSString*)aFileData;
- (KalturaUploadResponse*)getUploadedFileTokenByFileNameWithFileName:(NSString*)aFileName;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaUploadTokenService : KalturaServiceBase
// Adds new upload token to upload a file
- (KalturaUploadToken*)addWithUploadToken:(KalturaUploadToken*)aUploadToken;
- (KalturaUploadToken*)add;
// Get upload token by id
- (KalturaUploadToken*)getWithUploadTokenId:(NSString*)aUploadTokenId;
// Upload a file using the upload token id, returns an error on failure (an exception will be thrown when using one of the Kaltura clients)
- (KalturaUploadToken*)uploadWithUploadTokenId:(NSString*)aUploadTokenId withFileData:(NSString*)aFileData withResume:(KALTURA_BOOL)aResume withFinalChunk:(KALTURA_BOOL)aFinalChunk withResumeAt:(double)aResumeAt;
- (KalturaUploadToken*)uploadWithUploadTokenId:(NSString*)aUploadTokenId withFileData:(NSString*)aFileData withResume:(KALTURA_BOOL)aResume withFinalChunk:(KALTURA_BOOL)aFinalChunk;
- (KalturaUploadToken*)uploadWithUploadTokenId:(NSString*)aUploadTokenId withFileData:(NSString*)aFileData withResume:(KALTURA_BOOL)aResume;
- (KalturaUploadToken*)uploadWithUploadTokenId:(NSString*)aUploadTokenId withFileData:(NSString*)aFileData;
// Deletes the upload token by upload token id
- (void)deleteWithUploadTokenId:(NSString*)aUploadTokenId;
// List upload token by filter with pager support. 
// 	 When using a user session the service will be restricted to users objects only.
- (KalturaUploadTokenListResponse*)listWithFilter:(KalturaUploadTokenFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaUploadTokenListResponse*)listWithFilter:(KalturaUploadTokenFilter*)aFilter;
- (KalturaUploadTokenListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// UserRole service lets you create and manage user roles
@interface KalturaUserRoleService : KalturaServiceBase
// Adds a new user role object to the account.
- (KalturaUserRole*)addWithUserRole:(KalturaUserRole*)aUserRole;
// Retrieves a user role object using its ID.
- (KalturaUserRole*)getWithUserRoleId:(int)aUserRoleId;
// Updates an existing user role object.
- (KalturaUserRole*)updateWithUserRoleId:(int)aUserRoleId withUserRole:(KalturaUserRole*)aUserRole;
// Deletes an existing user role object.
- (KalturaUserRole*)deleteWithUserRoleId:(int)aUserRoleId;
// Lists user role objects that are associated with an account.
// 	 Blocked user roles are listed unless you use a filter to exclude them.
// 	 Deleted user roles are not listed unless you use a filter to include them.
- (KalturaUserRoleListResponse*)listWithFilter:(KalturaUserRoleFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaUserRoleListResponse*)listWithFilter:(KalturaUserRoleFilter*)aFilter;
- (KalturaUserRoleListResponse*)list;
// Creates a new user role object that is a duplicate of an existing role.
- (KalturaUserRole*)cloneWithUserRoleId:(int)aUserRoleId;
@end

// @package Kaltura
// @subpackage Client
// Manage partner users on Kaltura's side
//  The userId in kaltura is the unique Id in the partner's system, and the [partnerId,Id] couple are unique key in kaltura's DB
@interface KalturaUserService : KalturaServiceBase
// Adds a new user to an existing account in the Kaltura database.
// 	 Input param $id is the unique identifier in the partner's system.
- (KalturaUser*)addWithUser:(KalturaUser*)aUser;
// Updates an existing user object.
// 	 You can also use this action to update the userId.
- (KalturaUser*)updateWithUserId:(NSString*)aUserId withUser:(KalturaUser*)aUser;
// Retrieves a user object for a specified user ID.
- (KalturaUser*)getWithUserId:(NSString*)aUserId;
- (KalturaUser*)get;
// Retrieves a user object for a user's login ID and partner ID.
// 	 A login ID is the email address used by a user to log into the system.
- (KalturaUser*)getByLoginIdWithLoginId:(NSString*)aLoginId;
// Deletes a user from a partner account.
- (KalturaUser*)deleteWithUserId:(NSString*)aUserId;
// Lists user objects that are associated with an account.
// 	 Blocked users are listed unless you use a filter to exclude them.
// 	 Deleted users are not listed unless you use a filter to include them.
- (KalturaUserListResponse*)listWithFilter:(KalturaUserFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaUserListResponse*)listWithFilter:(KalturaUserFilter*)aFilter;
- (KalturaUserListResponse*)list;
// Notifies that a user is banned from an account.
- (void)notifyBanWithUserId:(NSString*)aUserId;
// Logs a user into a partner account with a partner ID, a partner user ID (puser), and a user password.
- (NSString*)loginWithPartnerId:(int)aPartnerId withUserId:(NSString*)aUserId withPassword:(NSString*)aPassword withExpiry:(int)aExpiry withPrivileges:(NSString*)aPrivileges;
- (NSString*)loginWithPartnerId:(int)aPartnerId withUserId:(NSString*)aUserId withPassword:(NSString*)aPassword withExpiry:(int)aExpiry;
- (NSString*)loginWithPartnerId:(int)aPartnerId withUserId:(NSString*)aUserId withPassword:(NSString*)aPassword;
// Logs a user into a partner account with a user login ID and a user password.
- (NSString*)loginByLoginIdWithLoginId:(NSString*)aLoginId withPassword:(NSString*)aPassword withPartnerId:(int)aPartnerId withExpiry:(int)aExpiry withPrivileges:(NSString*)aPrivileges;
- (NSString*)loginByLoginIdWithLoginId:(NSString*)aLoginId withPassword:(NSString*)aPassword withPartnerId:(int)aPartnerId withExpiry:(int)aExpiry;
- (NSString*)loginByLoginIdWithLoginId:(NSString*)aLoginId withPassword:(NSString*)aPassword withPartnerId:(int)aPartnerId;
- (NSString*)loginByLoginIdWithLoginId:(NSString*)aLoginId withPassword:(NSString*)aPassword;
// Updates a user's login data: email, password, name.
- (void)updateLoginDataWithOldLoginId:(NSString*)aOldLoginId withPassword:(NSString*)aPassword withNewLoginId:(NSString*)aNewLoginId withNewPassword:(NSString*)aNewPassword withNewFirstName:(NSString*)aNewFirstName withNewLastName:(NSString*)aNewLastName;
- (void)updateLoginDataWithOldLoginId:(NSString*)aOldLoginId withPassword:(NSString*)aPassword withNewLoginId:(NSString*)aNewLoginId withNewPassword:(NSString*)aNewPassword withNewFirstName:(NSString*)aNewFirstName;
- (void)updateLoginDataWithOldLoginId:(NSString*)aOldLoginId withPassword:(NSString*)aPassword withNewLoginId:(NSString*)aNewLoginId withNewPassword:(NSString*)aNewPassword;
- (void)updateLoginDataWithOldLoginId:(NSString*)aOldLoginId withPassword:(NSString*)aPassword withNewLoginId:(NSString*)aNewLoginId;
- (void)updateLoginDataWithOldLoginId:(NSString*)aOldLoginId withPassword:(NSString*)aPassword;
// Reset user's password and send the user an email to generate a new one.
- (void)resetPasswordWithEmail:(NSString*)aEmail;
// Set initial users password
- (void)setInitialPasswordWithHashKey:(NSString*)aHashKey withNewPassword:(NSString*)aNewPassword;
// Enables a user to log into a partner account using an email address and a password
- (KalturaUser*)enableLoginWithUserId:(NSString*)aUserId withLoginId:(NSString*)aLoginId withPassword:(NSString*)aPassword;
- (KalturaUser*)enableLoginWithUserId:(NSString*)aUserId withLoginId:(NSString*)aLoginId;
// Disables a user's ability to log into a partner account using an email address and a password.
// 	 You may use either a userId or a loginId parameter for this action.
- (KalturaUser*)disableLoginWithUserId:(NSString*)aUserId withLoginId:(NSString*)aLoginId;
- (KalturaUser*)disableLoginWithUserId:(NSString*)aUserId;
- (KalturaUser*)disableLogin;
// Index an entry by id.
- (NSString*)indexWithId:(NSString*)aId withShouldUpdate:(KALTURA_BOOL)aShouldUpdate;
- (NSString*)indexWithId:(NSString*)aId;
- (KalturaBulkUpload*)addFromBulkUploadWithFileData:(NSString*)aFileData withBulkUploadData:(KalturaBulkUploadJobData*)aBulkUploadData withBulkUploadUserData:(KalturaBulkUploadUserData*)aBulkUploadUserData;
- (KalturaBulkUpload*)addFromBulkUploadWithFileData:(NSString*)aFileData withBulkUploadData:(KalturaBulkUploadJobData*)aBulkUploadData;
- (KalturaBulkUpload*)addFromBulkUploadWithFileData:(NSString*)aFileData;
// Action which checks whther user login
- (KALTURA_BOOL)checkLoginDataExistsWithFilter:(KalturaUserLoginDataFilter*)aFilter;
@end

// @package Kaltura
// @subpackage Client
// widget service for full widget management
@interface KalturaWidgetService : KalturaServiceBase
// Add new widget, can be attached to entry or kshow
// 	 SourceWidget is ignored.
- (KalturaWidget*)addWithWidget:(KalturaWidget*)aWidget;
// Update exisiting widget
- (KalturaWidget*)updateWithId:(NSString*)aId withWidget:(KalturaWidget*)aWidget;
// Get widget by id
- (KalturaWidget*)getWithId:(NSString*)aId;
// Add widget based on existing widget.
// 	 Must provide valid sourceWidgetId
- (KalturaWidget*)cloneWithWidget:(KalturaWidget*)aWidget;
// Retrieve a list of available widget depends on the filter given
- (KalturaWidgetListResponse*)listWithFilter:(KalturaWidgetFilter*)aFilter withPager:(KalturaFilterPager*)aPager;
- (KalturaWidgetListResponse*)listWithFilter:(KalturaWidgetFilter*)aFilter;
- (KalturaWidgetListResponse*)list;
@end

// @package Kaltura
// @subpackage Client
// Internal Service is used for actions that are used internally in Kaltura applications and might be changed in the future without any notice.
@interface KalturaXInternalService : KalturaServiceBase
// Creates new download job for multiple entry ids (comma separated), an email will be sent when the job is done
// 	 This sevice support the following entries: 
// 	 - MediaEntry
// 	 - Video will be converted using the flavor params id
// 	 - Audio will be downloaded as MP3
// 	 - Image will be downloaded as Jpeg
// 	 - MixEntry will be flattened using the flavor params id
// 	 - Other entry types are not supported
// 	 Returns the admin email that the email message will be sent to
- (NSString*)xAddBulkDownloadWithEntryIds:(NSString*)aEntryIds withFlavorParamsId:(NSString*)aFlavorParamsId;
- (NSString*)xAddBulkDownloadWithEntryIds:(NSString*)aEntryIds;
@end

@interface KalturaClient : KalturaClientBase
{
	KalturaAccessControlProfileService* _accessControlProfile;
	KalturaAccessControlService* _accessControl;
	KalturaAdminUserService* _adminUser;
	KalturaBaseEntryService* _baseEntry;
	KalturaBulkUploadService* _bulkUpload;
	KalturaCategoryEntryService* _categoryEntry;
	KalturaCategoryService* _category;
	KalturaCategoryUserService* _categoryUser;
	KalturaConversionProfileAssetParamsService* _conversionProfileAssetParams;
	KalturaConversionProfileService* _conversionProfile;
	KalturaDataService* _data;
	KalturaDeliveryProfileService* _deliveryProfile;
	KalturaEmailIngestionProfileService* _EmailIngestionProfile;
	KalturaFileAssetService* _fileAsset;
	KalturaFlavorAssetService* _flavorAsset;
	KalturaFlavorParamsOutputService* _flavorParamsOutput;
	KalturaFlavorParamsService* _flavorParams;
	KalturaLiveChannelSegmentService* _liveChannelSegment;
	KalturaLiveChannelService* _liveChannel;
	KalturaLiveReportsService* _liveReports;
	KalturaStatsService* _stats;
	KalturaLiveStreamService* _liveStream;
	KalturaMediaInfoService* _mediaInfo;
	KalturaMediaServerService* _mediaServer;
	KalturaMediaService* _media;
	KalturaMixingService* _mixing;
	KalturaNotificationService* _notification;
	KalturaPartnerService* _partner;
	KalturaPermissionItemService* _permissionItem;
	KalturaPermissionService* _permission;
	KalturaPlaylistService* _playlist;
	KalturaReportService* _report;
	KalturaSchemaService* _schema;
	KalturaSearchService* _search;
	KalturaSessionService* _session;
	KalturaStorageProfileService* _storageProfile;
	KalturaSyndicationFeedService* _syndicationFeed;
	KalturaSystemService* _system;
	KalturaThumbAssetService* _thumbAsset;
	KalturaThumbParamsOutputService* _thumbParamsOutput;
	KalturaThumbParamsService* _thumbParams;
	KalturaUiConfService* _uiConf;
	KalturaUploadService* _upload;
	KalturaUploadTokenService* _uploadToken;
	KalturaUserRoleService* _userRole;
	KalturaUserService* _user;
	KalturaWidgetService* _widget;
	KalturaXInternalService* _xInternal;
}

@property (nonatomic, readonly) KalturaAccessControlProfileService* accessControlProfile;
@property (nonatomic, readonly) KalturaAccessControlService* accessControl;
@property (nonatomic, readonly) KalturaAdminUserService* adminUser;
@property (nonatomic, readonly) KalturaBaseEntryService* baseEntry;
@property (nonatomic, readonly) KalturaBulkUploadService* bulkUpload;
@property (nonatomic, readonly) KalturaCategoryEntryService* categoryEntry;
@property (nonatomic, readonly) KalturaCategoryService* category;
@property (nonatomic, readonly) KalturaCategoryUserService* categoryUser;
@property (nonatomic, readonly) KalturaConversionProfileAssetParamsService* conversionProfileAssetParams;
@property (nonatomic, readonly) KalturaConversionProfileService* conversionProfile;
@property (nonatomic, readonly) KalturaDataService* data;
@property (nonatomic, readonly) KalturaDeliveryProfileService* deliveryProfile;
@property (nonatomic, readonly) KalturaEmailIngestionProfileService* EmailIngestionProfile;
@property (nonatomic, readonly) KalturaFileAssetService* fileAsset;
@property (nonatomic, readonly) KalturaFlavorAssetService* flavorAsset;
@property (nonatomic, readonly) KalturaFlavorParamsOutputService* flavorParamsOutput;
@property (nonatomic, readonly) KalturaFlavorParamsService* flavorParams;
@property (nonatomic, readonly) KalturaLiveChannelSegmentService* liveChannelSegment;
@property (nonatomic, readonly) KalturaLiveChannelService* liveChannel;
@property (nonatomic, readonly) KalturaLiveReportsService* liveReports;
@property (nonatomic, readonly) KalturaStatsService* stats;
@property (nonatomic, readonly) KalturaLiveStreamService* liveStream;
@property (nonatomic, readonly) KalturaMediaInfoService* mediaInfo;
@property (nonatomic, readonly) KalturaMediaServerService* mediaServer;
@property (nonatomic, readonly) KalturaMediaService* media;
@property (nonatomic, readonly) KalturaMixingService* mixing;
@property (nonatomic, readonly) KalturaNotificationService* notification;
@property (nonatomic, readonly) KalturaPartnerService* partner;
@property (nonatomic, readonly) KalturaPermissionItemService* permissionItem;
@property (nonatomic, readonly) KalturaPermissionService* permission;
@property (nonatomic, readonly) KalturaPlaylistService* playlist;
@property (nonatomic, readonly) KalturaReportService* report;
@property (nonatomic, readonly) KalturaSchemaService* schema;
@property (nonatomic, readonly) KalturaSearchService* search;
@property (nonatomic, readonly) KalturaSessionService* session;
@property (nonatomic, readonly) KalturaStorageProfileService* storageProfile;
@property (nonatomic, readonly) KalturaSyndicationFeedService* syndicationFeed;
@property (nonatomic, readonly) KalturaSystemService* system;
@property (nonatomic, readonly) KalturaThumbAssetService* thumbAsset;
@property (nonatomic, readonly) KalturaThumbParamsOutputService* thumbParamsOutput;
@property (nonatomic, readonly) KalturaThumbParamsService* thumbParams;
@property (nonatomic, readonly) KalturaUiConfService* uiConf;
@property (nonatomic, readonly) KalturaUploadService* upload;
@property (nonatomic, readonly) KalturaUploadTokenService* uploadToken;
@property (nonatomic, readonly) KalturaUserRoleService* userRole;
@property (nonatomic, readonly) KalturaUserService* user;
@property (nonatomic, readonly) KalturaWidgetService* widget;
@property (nonatomic, readonly) KalturaXInternalService* xInternal;
@end

