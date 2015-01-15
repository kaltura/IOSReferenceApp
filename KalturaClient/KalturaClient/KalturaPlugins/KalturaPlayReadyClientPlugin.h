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
@interface KalturaPlayReadyAnalogVideoOPL : NSObject
+ (int)MIN_100;
+ (int)MIN_150;
+ (int)MIN_200;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyCompressedDigitalVideoOPL : NSObject
+ (int)MIN_400;
+ (int)MIN_500;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyDigitalAudioOPL : NSObject
+ (int)MIN_100;
+ (int)MIN_150;
+ (int)MIN_200;
+ (int)MIN_250;
+ (int)MIN_300;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyLicenseRemovalPolicy : NSObject
+ (int)FIXED_FROM_EXPIRATION;
+ (int)ENTRY_SCHEDULING_END;
+ (int)NONE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyMinimumLicenseSecurityLevel : NSObject
+ (int)NON_COMMERCIAL_QUALITY;
+ (int)COMMERCIAL_QUALITY;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyUncompressedDigitalVideoOPL : NSObject
+ (int)MIN_100;
+ (int)MIN_250;
+ (int)MIN_270;
+ (int)MIN_300;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyAnalogVideoOPId : NSObject
+ (NSString*)EXPLICIT_ANALOG_TV;
+ (NSString*)BEST_EFFORT_EXPLICIT_ANALOG_TV;
+ (NSString*)IMAGE_CONSTRAINT_VIDEO;
+ (NSString*)AGC_AND_COLOR_STRIPE;
+ (NSString*)IMAGE_CONSTRAINT_MONITOR;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyCopyEnablerType : NSObject
+ (NSString*)CSS;
+ (NSString*)PRINTER;
+ (NSString*)DEVICE;
+ (NSString*)CLIPBOARD;
+ (NSString*)SDC;
+ (NSString*)SDC_PREVIEW;
+ (NSString*)AACS;
+ (NSString*)HELIX;
+ (NSString*)CPRM;
+ (NSString*)PC;
+ (NSString*)SDC_LIMITED;
+ (NSString*)ORANGE_BOOK_CD;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyDigitalAudioOPId : NSObject
+ (NSString*)SCMS;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyPlayEnablerType : NSObject
+ (NSString*)HELIX;
+ (NSString*)HDCP_WIVU;
+ (NSString*)AIRPLAY;
+ (NSString*)UNKNOWN;
+ (NSString*)HDCP_MIRACAST;
+ (NSString*)UNKNOWN_520;
+ (NSString*)DTCP;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyPolicyOrderBy : NSObject
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyProfileOrderBy : NSObject
+ (NSString*)ID_ASC;
+ (NSString*)NAME_ASC;
+ (NSString*)ID_DESC;
+ (NSString*)NAME_DESC;
@end

///////////////////////// classes /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyAnalogVideoOPIdHolder : KalturaObjectBase
// The type of the play enabler
@property (nonatomic,copy) NSString* type;	// enum KalturaPlayReadyAnalogVideoOPId
- (KalturaFieldType)getTypeOfType;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyContentKey : KalturaObjectBase
// Guid - key id of the specific content
@property (nonatomic,copy) NSString* keyId;
// License content key 64 bit encoded
@property (nonatomic,copy) NSString* contentKey;
- (KalturaFieldType)getTypeOfKeyId;
- (KalturaFieldType)getTypeOfContentKey;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyCopyEnablerHolder : KalturaObjectBase
// The type of the copy enabler
@property (nonatomic,copy) NSString* type;	// enum KalturaPlayReadyCopyEnablerType
- (KalturaFieldType)getTypeOfType;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyDigitalAudioOPIdHolder : KalturaObjectBase
// The type of the play enabler
@property (nonatomic,copy) NSString* type;	// enum KalturaPlayReadyDigitalAudioOPId
- (KalturaFieldType)getTypeOfType;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyRight : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyPolicy : KalturaDrmPolicy
@property (nonatomic,assign) int gracePeriod;
@property (nonatomic,assign) int licenseRemovalPolicy;	// enum KalturaPlayReadyLicenseRemovalPolicy
@property (nonatomic,assign) int licenseRemovalDuration;
@property (nonatomic,assign) int minSecurityLevel;	// enum KalturaPlayReadyMinimumLicenseSecurityLevel
@property (nonatomic,retain) NSMutableArray* rights;	// of KalturaPlayReadyRight elements
- (KalturaFieldType)getTypeOfGracePeriod;
- (KalturaFieldType)getTypeOfLicenseRemovalPolicy;
- (KalturaFieldType)getTypeOfLicenseRemovalDuration;
- (KalturaFieldType)getTypeOfMinSecurityLevel;
- (KalturaFieldType)getTypeOfRights;
- (NSString*)getObjectTypeOfRights;
- (void)setGracePeriodFromString:(NSString*)aPropVal;
- (void)setLicenseRemovalPolicyFromString:(NSString*)aPropVal;
- (void)setLicenseRemovalDurationFromString:(NSString*)aPropVal;
- (void)setMinSecurityLevelFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyLicenseDetails : KalturaObjectBase
// PlayReady policy object
@property (nonatomic,retain) KalturaPlayReadyPolicy* policy;
// License begin date
@property (nonatomic,assign) int beginDate;
// License expiration date
@property (nonatomic,assign) int expirationDate;
// License removal date
@property (nonatomic,assign) int removalDate;
- (KalturaFieldType)getTypeOfPolicy;
- (NSString*)getObjectTypeOfPolicy;
- (KalturaFieldType)getTypeOfBeginDate;
- (KalturaFieldType)getTypeOfExpirationDate;
- (KalturaFieldType)getTypeOfRemovalDate;
- (void)setBeginDateFromString:(NSString*)aPropVal;
- (void)setExpirationDateFromString:(NSString*)aPropVal;
- (void)setRemovalDateFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyPlayEnablerHolder : KalturaObjectBase
// The type of the play enabler
@property (nonatomic,copy) NSString* type;	// enum KalturaPlayReadyPlayEnablerType
- (KalturaFieldType)getTypeOfType;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaAccessControlPlayReadyPolicyAction : KalturaRuleAction
// Play ready policy id
@property (nonatomic,assign) int policyId;
- (KalturaFieldType)getTypeOfPolicyId;
- (void)setPolicyIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyCopyRight : KalturaPlayReadyRight
@property (nonatomic,assign) int copyCount;
@property (nonatomic,retain) NSMutableArray* copyEnablers;	// of KalturaPlayReadyCopyEnablerHolder elements
- (KalturaFieldType)getTypeOfCopyCount;
- (KalturaFieldType)getTypeOfCopyEnablers;
- (NSString*)getObjectTypeOfCopyEnablers;
- (void)setCopyCountFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyPlayRight : KalturaPlayReadyRight
@property (nonatomic,assign) int analogVideoOPL;	// enum KalturaPlayReadyAnalogVideoOPL
@property (nonatomic,retain) NSMutableArray* analogVideoOutputProtectionList;	// of KalturaPlayReadyAnalogVideoOPIdHolder elements
@property (nonatomic,assign) int compressedDigitalAudioOPL;	// enum KalturaPlayReadyDigitalAudioOPL
@property (nonatomic,assign) int compressedDigitalVideoOPL;	// enum KalturaPlayReadyCompressedDigitalVideoOPL
@property (nonatomic,retain) NSMutableArray* digitalAudioOutputProtectionList;	// of KalturaPlayReadyDigitalAudioOPIdHolder elements
@property (nonatomic,assign) int uncompressedDigitalAudioOPL;	// enum KalturaPlayReadyDigitalAudioOPL
@property (nonatomic,assign) int uncompressedDigitalVideoOPL;	// enum KalturaPlayReadyUncompressedDigitalVideoOPL
@property (nonatomic,assign) int firstPlayExpiration;
@property (nonatomic,retain) NSMutableArray* playEnablers;	// of KalturaPlayReadyPlayEnablerHolder elements
- (KalturaFieldType)getTypeOfAnalogVideoOPL;
- (KalturaFieldType)getTypeOfAnalogVideoOutputProtectionList;
- (NSString*)getObjectTypeOfAnalogVideoOutputProtectionList;
- (KalturaFieldType)getTypeOfCompressedDigitalAudioOPL;
- (KalturaFieldType)getTypeOfCompressedDigitalVideoOPL;
- (KalturaFieldType)getTypeOfDigitalAudioOutputProtectionList;
- (NSString*)getObjectTypeOfDigitalAudioOutputProtectionList;
- (KalturaFieldType)getTypeOfUncompressedDigitalAudioOPL;
- (KalturaFieldType)getTypeOfUncompressedDigitalVideoOPL;
- (KalturaFieldType)getTypeOfFirstPlayExpiration;
- (KalturaFieldType)getTypeOfPlayEnablers;
- (NSString*)getObjectTypeOfPlayEnablers;
- (void)setAnalogVideoOPLFromString:(NSString*)aPropVal;
- (void)setCompressedDigitalAudioOPLFromString:(NSString*)aPropVal;
- (void)setCompressedDigitalVideoOPLFromString:(NSString*)aPropVal;
- (void)setUncompressedDigitalAudioOPLFromString:(NSString*)aPropVal;
- (void)setUncompressedDigitalVideoOPLFromString:(NSString*)aPropVal;
- (void)setFirstPlayExpirationFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyProfile : KalturaDrmProfile
@property (nonatomic,copy) NSString* keySeed;
- (KalturaFieldType)getTypeOfKeySeed;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyPolicyBaseFilter : KalturaDrmPolicyFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyProfileBaseFilter : KalturaDrmProfileFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyPolicyFilter : KalturaPlayReadyPolicyBaseFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyProfileFilter : KalturaPlayReadyProfileBaseFilter
@end

///////////////////////// services /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaPlayReadyDrmService : KalturaServiceBase
// Generate key id and content key for PlayReady encryption
- (KalturaPlayReadyContentKey*)generateKey;
// Get content keys for input key ids
- (NSMutableArray*)getContentKeysWithKeyIds:(NSString*)aKeyIds;
// Get content key and key id for the given entry
- (KalturaPlayReadyContentKey*)getEntryContentKeyWithEntryId:(NSString*)aEntryId withCreateIfMissing:(KALTURA_BOOL)aCreateIfMissing;
- (KalturaPlayReadyContentKey*)getEntryContentKeyWithEntryId:(NSString*)aEntryId;
// Get Play Ready policy and dates for license creation
- (KalturaPlayReadyLicenseDetails*)getLicenseDetailsWithKeyId:(NSString*)aKeyId withDeviceId:(NSString*)aDeviceId withDeviceType:(int)aDeviceType withEntryId:(NSString*)aEntryId withReferrer:(NSString*)aReferrer;
- (KalturaPlayReadyLicenseDetails*)getLicenseDetailsWithKeyId:(NSString*)aKeyId withDeviceId:(NSString*)aDeviceId withDeviceType:(int)aDeviceType withEntryId:(NSString*)aEntryId;
- (KalturaPlayReadyLicenseDetails*)getLicenseDetailsWithKeyId:(NSString*)aKeyId withDeviceId:(NSString*)aDeviceId withDeviceType:(int)aDeviceType;
@end

@interface KalturaPlayReadyClientPlugin : KalturaClientPlugin
{
	KalturaPlayReadyDrmService* _playReadyDrm;
}

@property (nonatomic, assign) KalturaClientBase* client;
@property (nonatomic, readonly) KalturaPlayReadyDrmService* playReadyDrm;
@end

