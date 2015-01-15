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
#import "KalturaPlayReadyClientPlugin.h"

///////////////////////// enums /////////////////////////
@implementation KalturaPlayReadyAnalogVideoOPL
+ (int)MIN_100
{
    return 100;
}
+ (int)MIN_150
{
    return 150;
}
+ (int)MIN_200
{
    return 200;
}
@end

@implementation KalturaPlayReadyCompressedDigitalVideoOPL
+ (int)MIN_400
{
    return 400;
}
+ (int)MIN_500
{
    return 500;
}
@end

@implementation KalturaPlayReadyDigitalAudioOPL
+ (int)MIN_100
{
    return 100;
}
+ (int)MIN_150
{
    return 150;
}
+ (int)MIN_200
{
    return 200;
}
+ (int)MIN_250
{
    return 250;
}
+ (int)MIN_300
{
    return 300;
}
@end

@implementation KalturaPlayReadyLicenseRemovalPolicy
+ (int)FIXED_FROM_EXPIRATION
{
    return 1;
}
+ (int)ENTRY_SCHEDULING_END
{
    return 2;
}
+ (int)NONE
{
    return 3;
}
@end

@implementation KalturaPlayReadyMinimumLicenseSecurityLevel
+ (int)NON_COMMERCIAL_QUALITY
{
    return 150;
}
+ (int)COMMERCIAL_QUALITY
{
    return 2000;
}
@end

@implementation KalturaPlayReadyUncompressedDigitalVideoOPL
+ (int)MIN_100
{
    return 100;
}
+ (int)MIN_250
{
    return 250;
}
+ (int)MIN_270
{
    return 270;
}
+ (int)MIN_300
{
    return 300;
}
@end

@implementation KalturaPlayReadyAnalogVideoOPId
+ (NSString*)EXPLICIT_ANALOG_TV
{
    return @"2098DE8D-7DDD-4BAB-96C6-32EBB6FABEA3";
}
+ (NSString*)BEST_EFFORT_EXPLICIT_ANALOG_TV
{
    return @"225CD36F-F132-49EF-BA8C-C91EA28E4369";
}
+ (NSString*)IMAGE_CONSTRAINT_VIDEO
{
    return @"811C5110-46C8-4C6E-8163-C0482A15D47E";
}
+ (NSString*)AGC_AND_COLOR_STRIPE
{
    return @"C3FD11C6-F8B7-4D20-B008-1DB17D61F2DA";
}
+ (NSString*)IMAGE_CONSTRAINT_MONITOR
{
    return @"D783A191-E083-4BAF-B2DA-E69F910B3772";
}
@end

@implementation KalturaPlayReadyCopyEnablerType
+ (NSString*)CSS
{
    return @"3CAF2814-A7AB-467C-B4DF-54ACC56C66DC";
}
+ (NSString*)PRINTER
{
    return @"3CF2E054-F4D5-46cd-85A6-FCD152AD5FBE";
}
+ (NSString*)DEVICE
{
    return @"6848955D-516B-4EB0-90E8-8F6D5A77B85F";
}
+ (NSString*)CLIPBOARD
{
    return @"6E76C588-C3A9-47ea-A875-546D5209FF38";
}
+ (NSString*)SDC
{
    return @"79F78A0D-0B69-401e-8A90-8BEF30BCE192";
}
+ (NSString*)SDC_PREVIEW
{
    return @"81BD9AD4-A720-4ea1-B510-5D4E6FFB6A4D";
}
+ (NSString*)AACS
{
    return @"C3CF56E0-7FF2-4491-809F-53E21D3ABF07";
}
+ (NSString*)HELIX
{
    return @"CCB0B4E3-8B46-409e-A998-82556E3F5AF4";
}
+ (NSString*)CPRM
{
    return @"CDD801AD-A577-48DB-950E-46D5F1592FAE";
}
+ (NSString*)PC
{
    return @"CE480EDE-516B-40B3-90E1-D6CFC47630C5";
}
+ (NSString*)SDC_LIMITED
{
    return @"E6785609-64CC-4bfa-B82D-6B619733B746";
}
+ (NSString*)ORANGE_BOOK_CD
{
    return @"EC930B7D-1F2D-4682-A38B-8AB977721D0D";
}
@end

@implementation KalturaPlayReadyDigitalAudioOPId
+ (NSString*)SCMS
{
    return @"6D5CFA59-C250-4426-930E-FAC72C8FCFA6";
}
@end

@implementation KalturaPlayReadyPlayEnablerType
+ (NSString*)HELIX
{
    return @"002F9772-38A0-43E5-9F79-0F6361DCC62A";
}
+ (NSString*)HDCP_WIVU
{
    return @"1B4542E3-B5CF-4C99-B3BA-829AF46C92F8";
}
+ (NSString*)AIRPLAY
{
    return @"5ABF0F0D-DC29-4B82-9982-FD8E57525BFC";
}
+ (NSString*)UNKNOWN
{
    return @"786627D8-C2A6-44BE-8F88-08AE255B01A";
}
+ (NSString*)HDCP_MIRACAST
{
    return @"A340C256-0941-4D4C-AD1D-0B6735C0CB24";
}
+ (NSString*)UNKNOWN_520
{
    return @"B621D91F-EDCC-4035-8D4B-DC71760D43E9";
}
+ (NSString*)DTCP
{
    return @"D685030B-0F4F-43A6-BBAD-356F1EA0049A";
}
@end

@implementation KalturaPlayReadyPolicyOrderBy
@end

@implementation KalturaPlayReadyProfileOrderBy
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

///////////////////////// classes /////////////////////////
@implementation KalturaPlayReadyAnalogVideoOPIdHolder
@synthesize type = _type;

- (KalturaFieldType)getTypeOfType
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyAnalogVideoOPIdHolder"];
    [aParams addIfDefinedKey:@"type" withString:self.type];
}

- (void)dealloc
{
    [self->_type release];
    [super dealloc];
}

@end

@implementation KalturaPlayReadyContentKey
@synthesize keyId = _keyId;
@synthesize contentKey = _contentKey;

- (KalturaFieldType)getTypeOfKeyId
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfContentKey
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyContentKey"];
    [aParams addIfDefinedKey:@"keyId" withString:self.keyId];
    [aParams addIfDefinedKey:@"contentKey" withString:self.contentKey];
}

- (void)dealloc
{
    [self->_keyId release];
    [self->_contentKey release];
    [super dealloc];
}

@end

@implementation KalturaPlayReadyCopyEnablerHolder
@synthesize type = _type;

- (KalturaFieldType)getTypeOfType
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyCopyEnablerHolder"];
    [aParams addIfDefinedKey:@"type" withString:self.type];
}

- (void)dealloc
{
    [self->_type release];
    [super dealloc];
}

@end

@implementation KalturaPlayReadyDigitalAudioOPIdHolder
@synthesize type = _type;

- (KalturaFieldType)getTypeOfType
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyDigitalAudioOPIdHolder"];
    [aParams addIfDefinedKey:@"type" withString:self.type];
}

- (void)dealloc
{
    [self->_type release];
    [super dealloc];
}

@end

@implementation KalturaPlayReadyRight
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyRight"];
}

@end

@implementation KalturaPlayReadyPolicy
@synthesize gracePeriod = _gracePeriod;
@synthesize licenseRemovalPolicy = _licenseRemovalPolicy;
@synthesize licenseRemovalDuration = _licenseRemovalDuration;
@synthesize minSecurityLevel = _minSecurityLevel;
@synthesize rights = _rights;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_gracePeriod = KALTURA_UNDEF_INT;
    self->_licenseRemovalPolicy = KALTURA_UNDEF_INT;
    self->_licenseRemovalDuration = KALTURA_UNDEF_INT;
    self->_minSecurityLevel = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfGracePeriod
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfLicenseRemovalPolicy
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfLicenseRemovalDuration
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfMinSecurityLevel
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfRights
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfRights
{
    return @"KalturaPlayReadyRight";
}

- (void)setGracePeriodFromString:(NSString*)aPropVal
{
    self.gracePeriod = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setLicenseRemovalPolicyFromString:(NSString*)aPropVal
{
    self.licenseRemovalPolicy = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setLicenseRemovalDurationFromString:(NSString*)aPropVal
{
    self.licenseRemovalDuration = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setMinSecurityLevelFromString:(NSString*)aPropVal
{
    self.minSecurityLevel = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyPolicy"];
    [aParams addIfDefinedKey:@"gracePeriod" withInt:self.gracePeriod];
    [aParams addIfDefinedKey:@"licenseRemovalPolicy" withInt:self.licenseRemovalPolicy];
    [aParams addIfDefinedKey:@"licenseRemovalDuration" withInt:self.licenseRemovalDuration];
    [aParams addIfDefinedKey:@"minSecurityLevel" withInt:self.minSecurityLevel];
    [aParams addIfDefinedKey:@"rights" withArray:self.rights];
}

- (void)dealloc
{
    [self->_rights release];
    [super dealloc];
}

@end

@implementation KalturaPlayReadyLicenseDetails
@synthesize policy = _policy;
@synthesize beginDate = _beginDate;
@synthesize expirationDate = _expirationDate;
@synthesize removalDate = _removalDate;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_beginDate = KALTURA_UNDEF_INT;
    self->_expirationDate = KALTURA_UNDEF_INT;
    self->_removalDate = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfPolicy
{
    return KFT_Object;
}

- (NSString*)getObjectTypeOfPolicy
{
    return @"KalturaPlayReadyPolicy";
}

- (KalturaFieldType)getTypeOfBeginDate
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfExpirationDate
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfRemovalDate
{
    return KFT_Int;
}

- (void)setBeginDateFromString:(NSString*)aPropVal
{
    self.beginDate = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setExpirationDateFromString:(NSString*)aPropVal
{
    self.expirationDate = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setRemovalDateFromString:(NSString*)aPropVal
{
    self.removalDate = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyLicenseDetails"];
    [aParams addIfDefinedKey:@"policy" withObject:self.policy];
    [aParams addIfDefinedKey:@"beginDate" withInt:self.beginDate];
    [aParams addIfDefinedKey:@"expirationDate" withInt:self.expirationDate];
    [aParams addIfDefinedKey:@"removalDate" withInt:self.removalDate];
}

- (void)dealloc
{
    [self->_policy release];
    [super dealloc];
}

@end

@implementation KalturaPlayReadyPlayEnablerHolder
@synthesize type = _type;

- (KalturaFieldType)getTypeOfType
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyPlayEnablerHolder"];
    [aParams addIfDefinedKey:@"type" withString:self.type];
}

- (void)dealloc
{
    [self->_type release];
    [super dealloc];
}

@end

@implementation KalturaAccessControlPlayReadyPolicyAction
@synthesize policyId = _policyId;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_policyId = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfPolicyId
{
    return KFT_Int;
}

- (void)setPolicyIdFromString:(NSString*)aPropVal
{
    self.policyId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaAccessControlPlayReadyPolicyAction"];
    [aParams addIfDefinedKey:@"policyId" withInt:self.policyId];
}

@end

@implementation KalturaPlayReadyCopyRight
@synthesize copyCount = _copyCount;
@synthesize copyEnablers = _copyEnablers;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_copyCount = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfCopyCount
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfCopyEnablers
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfCopyEnablers
{
    return @"KalturaPlayReadyCopyEnablerHolder";
}

- (void)setCopyCountFromString:(NSString*)aPropVal
{
    self.copyCount = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyCopyRight"];
    [aParams addIfDefinedKey:@"copyCount" withInt:self.copyCount];
    [aParams addIfDefinedKey:@"copyEnablers" withArray:self.copyEnablers];
}

- (void)dealloc
{
    [self->_copyEnablers release];
    [super dealloc];
}

@end

@implementation KalturaPlayReadyPlayRight
@synthesize analogVideoOPL = _analogVideoOPL;
@synthesize analogVideoOutputProtectionList = _analogVideoOutputProtectionList;
@synthesize compressedDigitalAudioOPL = _compressedDigitalAudioOPL;
@synthesize compressedDigitalVideoOPL = _compressedDigitalVideoOPL;
@synthesize digitalAudioOutputProtectionList = _digitalAudioOutputProtectionList;
@synthesize uncompressedDigitalAudioOPL = _uncompressedDigitalAudioOPL;
@synthesize uncompressedDigitalVideoOPL = _uncompressedDigitalVideoOPL;
@synthesize firstPlayExpiration = _firstPlayExpiration;
@synthesize playEnablers = _playEnablers;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_analogVideoOPL = KALTURA_UNDEF_INT;
    self->_compressedDigitalAudioOPL = KALTURA_UNDEF_INT;
    self->_compressedDigitalVideoOPL = KALTURA_UNDEF_INT;
    self->_uncompressedDigitalAudioOPL = KALTURA_UNDEF_INT;
    self->_uncompressedDigitalVideoOPL = KALTURA_UNDEF_INT;
    self->_firstPlayExpiration = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfAnalogVideoOPL
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfAnalogVideoOutputProtectionList
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfAnalogVideoOutputProtectionList
{
    return @"KalturaPlayReadyAnalogVideoOPIdHolder";
}

- (KalturaFieldType)getTypeOfCompressedDigitalAudioOPL
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfCompressedDigitalVideoOPL
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfDigitalAudioOutputProtectionList
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfDigitalAudioOutputProtectionList
{
    return @"KalturaPlayReadyDigitalAudioOPIdHolder";
}

- (KalturaFieldType)getTypeOfUncompressedDigitalAudioOPL
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUncompressedDigitalVideoOPL
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfFirstPlayExpiration
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPlayEnablers
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfPlayEnablers
{
    return @"KalturaPlayReadyPlayEnablerHolder";
}

- (void)setAnalogVideoOPLFromString:(NSString*)aPropVal
{
    self.analogVideoOPL = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setCompressedDigitalAudioOPLFromString:(NSString*)aPropVal
{
    self.compressedDigitalAudioOPL = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setCompressedDigitalVideoOPLFromString:(NSString*)aPropVal
{
    self.compressedDigitalVideoOPL = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUncompressedDigitalAudioOPLFromString:(NSString*)aPropVal
{
    self.uncompressedDigitalAudioOPL = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUncompressedDigitalVideoOPLFromString:(NSString*)aPropVal
{
    self.uncompressedDigitalVideoOPL = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setFirstPlayExpirationFromString:(NSString*)aPropVal
{
    self.firstPlayExpiration = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyPlayRight"];
    [aParams addIfDefinedKey:@"analogVideoOPL" withInt:self.analogVideoOPL];
    [aParams addIfDefinedKey:@"analogVideoOutputProtectionList" withArray:self.analogVideoOutputProtectionList];
    [aParams addIfDefinedKey:@"compressedDigitalAudioOPL" withInt:self.compressedDigitalAudioOPL];
    [aParams addIfDefinedKey:@"compressedDigitalVideoOPL" withInt:self.compressedDigitalVideoOPL];
    [aParams addIfDefinedKey:@"digitalAudioOutputProtectionList" withArray:self.digitalAudioOutputProtectionList];
    [aParams addIfDefinedKey:@"uncompressedDigitalAudioOPL" withInt:self.uncompressedDigitalAudioOPL];
    [aParams addIfDefinedKey:@"uncompressedDigitalVideoOPL" withInt:self.uncompressedDigitalVideoOPL];
    [aParams addIfDefinedKey:@"firstPlayExpiration" withInt:self.firstPlayExpiration];
    [aParams addIfDefinedKey:@"playEnablers" withArray:self.playEnablers];
}

- (void)dealloc
{
    [self->_analogVideoOutputProtectionList release];
    [self->_digitalAudioOutputProtectionList release];
    [self->_playEnablers release];
    [super dealloc];
}

@end

@implementation KalturaPlayReadyProfile
@synthesize keySeed = _keySeed;

- (KalturaFieldType)getTypeOfKeySeed
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyProfile"];
    [aParams addIfDefinedKey:@"keySeed" withString:self.keySeed];
}

- (void)dealloc
{
    [self->_keySeed release];
    [super dealloc];
}

@end

@implementation KalturaPlayReadyPolicyBaseFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyPolicyBaseFilter"];
}

@end

@implementation KalturaPlayReadyProfileBaseFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyProfileBaseFilter"];
}

@end

@implementation KalturaPlayReadyPolicyFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyPolicyFilter"];
}

@end

@implementation KalturaPlayReadyProfileFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaPlayReadyProfileFilter"];
}

@end

///////////////////////// services /////////////////////////
@implementation KalturaPlayReadyDrmService
- (KalturaPlayReadyContentKey*)generateKey
{
    return [self.client queueObjectService:@"playready_playreadydrm" withAction:@"generateKey" withExpectedType:@"KalturaPlayReadyContentKey"];
}

- (NSMutableArray*)getContentKeysWithKeyIds:(NSString*)aKeyIds
{
    [self.client.params addIfDefinedKey:@"keyIds" withString:aKeyIds];
    return [self.client queueArrayService:@"playready_playreadydrm" withAction:@"getContentKeys" withExpectedType:@"KalturaPlayReadyContentKey"];
}

- (KalturaPlayReadyContentKey*)getEntryContentKeyWithEntryId:(NSString*)aEntryId withCreateIfMissing:(KALTURA_BOOL)aCreateIfMissing
{
    [self.client.params addIfDefinedKey:@"entryId" withString:aEntryId];
    [self.client.params addIfDefinedKey:@"createIfMissing" withBool:aCreateIfMissing];
    return [self.client queueObjectService:@"playready_playreadydrm" withAction:@"getEntryContentKey" withExpectedType:@"KalturaPlayReadyContentKey"];
}

- (KalturaPlayReadyContentKey*)getEntryContentKeyWithEntryId:(NSString*)aEntryId
{
    return [self getEntryContentKeyWithEntryId:aEntryId withCreateIfMissing:KALTURA_UNDEF_BOOL];
}

- (KalturaPlayReadyLicenseDetails*)getLicenseDetailsWithKeyId:(NSString*)aKeyId withDeviceId:(NSString*)aDeviceId withDeviceType:(int)aDeviceType withEntryId:(NSString*)aEntryId withReferrer:(NSString*)aReferrer
{
    [self.client.params addIfDefinedKey:@"keyId" withString:aKeyId];
    [self.client.params addIfDefinedKey:@"deviceId" withString:aDeviceId];
    [self.client.params addIfDefinedKey:@"deviceType" withInt:aDeviceType];
    [self.client.params addIfDefinedKey:@"entryId" withString:aEntryId];
    [self.client.params addIfDefinedKey:@"referrer" withString:aReferrer];
    return [self.client queueObjectService:@"playready_playreadydrm" withAction:@"getLicenseDetails" withExpectedType:@"KalturaPlayReadyLicenseDetails"];
}

- (KalturaPlayReadyLicenseDetails*)getLicenseDetailsWithKeyId:(NSString*)aKeyId withDeviceId:(NSString*)aDeviceId withDeviceType:(int)aDeviceType withEntryId:(NSString*)aEntryId
{
    return [self getLicenseDetailsWithKeyId:aKeyId withDeviceId:aDeviceId withDeviceType:aDeviceType withEntryId:aEntryId withReferrer:nil];
}

- (KalturaPlayReadyLicenseDetails*)getLicenseDetailsWithKeyId:(NSString*)aKeyId withDeviceId:(NSString*)aDeviceId withDeviceType:(int)aDeviceType
{
    return [self getLicenseDetailsWithKeyId:aKeyId withDeviceId:aDeviceId withDeviceType:aDeviceType withEntryId:nil];
}

@end

@implementation KalturaPlayReadyClientPlugin
@synthesize client = _client;

- (id)initWithClient:(KalturaClient*)aClient
{
    self = [super init];
    if (self == nil)
        return nil;
    self.client = aClient;
    return self;
}

- (KalturaPlayReadyDrmService*)playReadyDrm
{
    if (self->_playReadyDrm == nil)
    	self->_playReadyDrm = [[KalturaPlayReadyDrmService alloc] initWithClient:self.client];
    return self->_playReadyDrm;
}

- (void)dealloc
{
    [self->_playReadyDrm release];
	[super dealloc];
}

@end

