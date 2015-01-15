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
#import "KalturaHttpNotificationClientPlugin.h"

///////////////////////// enums /////////////////////////
@implementation KalturaHttpNotificationAuthenticationMethod
+ (int)ANYSAFE
{
    return -18;
}
+ (int)ANY
{
    return -17;
}
+ (int)BASIC
{
    return 1;
}
+ (int)DIGEST
{
    return 2;
}
+ (int)GSSNEGOTIATE
{
    return 4;
}
+ (int)NTLM
{
    return 8;
}
@end

@implementation KalturaHttpNotificationMethod
+ (int)GET
{
    return 1;
}
+ (int)POST
{
    return 2;
}
+ (int)PUT
{
    return 3;
}
+ (int)DELETE
{
    return 4;
}
@end

@implementation KalturaHttpNotificationSslVersion
+ (int)V2
{
    return 2;
}
+ (int)V3
{
    return 3;
}
@end

@implementation KalturaHttpNotificationCertificateType
+ (NSString*)DER
{
    return @"DER";
}
+ (NSString*)ENG
{
    return @"ENG";
}
+ (NSString*)PEM
{
    return @"PEM";
}
@end

@implementation KalturaHttpNotificationSslKeyType
+ (NSString*)DER
{
    return @"DER";
}
+ (NSString*)ENG
{
    return @"ENG";
}
+ (NSString*)PEM
{
    return @"PEM";
}
@end

@implementation KalturaHttpNotificationTemplateOrderBy
+ (NSString*)CREATED_AT_ASC
{
    return @"+createdAt";
}
+ (NSString*)ID_ASC
{
    return @"+id";
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
+ (NSString*)UPDATED_AT_DESC
{
    return @"-updatedAt";
}
@end

///////////////////////// classes /////////////////////////
@implementation KalturaHttpNotification
@synthesize object = _object;
@synthesize eventObjectType = _eventObjectType;
@synthesize eventNotificationJobId = _eventNotificationJobId;
@synthesize templateId = _templateId;
@synthesize templateName = _templateName;
@synthesize templateSystemName = _templateSystemName;
@synthesize eventType = _eventType;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_eventNotificationJobId = KALTURA_UNDEF_INT;
    self->_templateId = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfObject
{
    return KFT_Object;
}

- (NSString*)getObjectTypeOfObject
{
    return @"KalturaObjectBase";
}

- (KalturaFieldType)getTypeOfEventObjectType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfEventNotificationJobId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfTemplateId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfTemplateName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTemplateSystemName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfEventType
{
    return KFT_String;
}

- (void)setEventNotificationJobIdFromString:(NSString*)aPropVal
{
    self.eventNotificationJobId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setTemplateIdFromString:(NSString*)aPropVal
{
    self.templateId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaHttpNotification"];
    [aParams addIfDefinedKey:@"object" withObject:self.object];
    [aParams addIfDefinedKey:@"eventObjectType" withString:self.eventObjectType];
    [aParams addIfDefinedKey:@"eventNotificationJobId" withInt:self.eventNotificationJobId];
    [aParams addIfDefinedKey:@"templateId" withInt:self.templateId];
    [aParams addIfDefinedKey:@"templateName" withString:self.templateName];
    [aParams addIfDefinedKey:@"templateSystemName" withString:self.templateSystemName];
    [aParams addIfDefinedKey:@"eventType" withString:self.eventType];
}

- (void)dealloc
{
    [self->_object release];
    [self->_eventObjectType release];
    [self->_templateName release];
    [self->_templateSystemName release];
    [self->_eventType release];
    [super dealloc];
}

@end

@implementation KalturaHttpNotificationData
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaHttpNotificationData"];
}

@end

@implementation KalturaHttpNotificationDataFields
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaHttpNotificationDataFields"];
}

@end

@implementation KalturaHttpNotificationDataText
@synthesize content = _content;

- (KalturaFieldType)getTypeOfContent
{
    return KFT_Object;
}

- (NSString*)getObjectTypeOfContent
{
    return @"KalturaStringValue";
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaHttpNotificationDataText"];
    [aParams addIfDefinedKey:@"content" withObject:self.content];
}

- (void)dealloc
{
    [self->_content release];
    [super dealloc];
}

@end

@implementation KalturaHttpNotificationObjectData
@synthesize apiObjectType = _apiObjectType;
@synthesize format = _format;
@synthesize ignoreNull = _ignoreNull;
@synthesize code = _code;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_format = KALTURA_UNDEF_INT;
    self->_ignoreNull = KALTURA_UNDEF_BOOL;
    return self;
}

- (KalturaFieldType)getTypeOfApiObjectType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFormat
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfIgnoreNull
{
    return KFT_Bool;
}

- (KalturaFieldType)getTypeOfCode
{
    return KFT_String;
}

- (void)setFormatFromString:(NSString*)aPropVal
{
    self.format = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setIgnoreNullFromString:(NSString*)aPropVal
{
    self.ignoreNull = [KalturaSimpleTypeParser parseBool:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaHttpNotificationObjectData"];
    [aParams addIfDefinedKey:@"apiObjectType" withString:self.apiObjectType];
    [aParams addIfDefinedKey:@"format" withInt:self.format];
    [aParams addIfDefinedKey:@"ignoreNull" withBool:self.ignoreNull];
    [aParams addIfDefinedKey:@"code" withString:self.code];
}

- (void)dealloc
{
    [self->_apiObjectType release];
    [self->_code release];
    [super dealloc];
}

@end

@implementation KalturaHttpNotificationTemplate
@synthesize url = _url;
@synthesize method = _method;
@synthesize data = _data;
@synthesize timeout = _timeout;
@synthesize connectTimeout = _connectTimeout;
@synthesize username = _username;
@synthesize password = _password;
@synthesize authenticationMethod = _authenticationMethod;
@synthesize sslVersion = _sslVersion;
@synthesize sslCertificate = _sslCertificate;
@synthesize sslCertificateType = _sslCertificateType;
@synthesize sslCertificatePassword = _sslCertificatePassword;
@synthesize sslEngine = _sslEngine;
@synthesize sslEngineDefault = _sslEngineDefault;
@synthesize sslKeyType = _sslKeyType;
@synthesize sslKey = _sslKey;
@synthesize sslKeyPassword = _sslKeyPassword;
@synthesize customHeaders = _customHeaders;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_method = KALTURA_UNDEF_INT;
    self->_timeout = KALTURA_UNDEF_INT;
    self->_connectTimeout = KALTURA_UNDEF_INT;
    self->_authenticationMethod = KALTURA_UNDEF_INT;
    self->_sslVersion = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfUrl
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfMethod
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfData
{
    return KFT_Object;
}

- (NSString*)getObjectTypeOfData
{
    return @"KalturaHttpNotificationData";
}

- (KalturaFieldType)getTypeOfTimeout
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfConnectTimeout
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUsername
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPassword
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfAuthenticationMethod
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfSslVersion
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfSslCertificate
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslCertificateType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslCertificatePassword
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslEngine
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslEngineDefault
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslKeyType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslKey
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslKeyPassword
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfCustomHeaders
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfCustomHeaders
{
    return @"KalturaKeyValue";
}

- (void)setMethodFromString:(NSString*)aPropVal
{
    self.method = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setTimeoutFromString:(NSString*)aPropVal
{
    self.timeout = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setConnectTimeoutFromString:(NSString*)aPropVal
{
    self.connectTimeout = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setAuthenticationMethodFromString:(NSString*)aPropVal
{
    self.authenticationMethod = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setSslVersionFromString:(NSString*)aPropVal
{
    self.sslVersion = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaHttpNotificationTemplate"];
    [aParams addIfDefinedKey:@"url" withString:self.url];
    [aParams addIfDefinedKey:@"method" withInt:self.method];
    [aParams addIfDefinedKey:@"data" withObject:self.data];
    [aParams addIfDefinedKey:@"timeout" withInt:self.timeout];
    [aParams addIfDefinedKey:@"connectTimeout" withInt:self.connectTimeout];
    [aParams addIfDefinedKey:@"username" withString:self.username];
    [aParams addIfDefinedKey:@"password" withString:self.password];
    [aParams addIfDefinedKey:@"authenticationMethod" withInt:self.authenticationMethod];
    [aParams addIfDefinedKey:@"sslVersion" withInt:self.sslVersion];
    [aParams addIfDefinedKey:@"sslCertificate" withString:self.sslCertificate];
    [aParams addIfDefinedKey:@"sslCertificateType" withString:self.sslCertificateType];
    [aParams addIfDefinedKey:@"sslCertificatePassword" withString:self.sslCertificatePassword];
    [aParams addIfDefinedKey:@"sslEngine" withString:self.sslEngine];
    [aParams addIfDefinedKey:@"sslEngineDefault" withString:self.sslEngineDefault];
    [aParams addIfDefinedKey:@"sslKeyType" withString:self.sslKeyType];
    [aParams addIfDefinedKey:@"sslKey" withString:self.sslKey];
    [aParams addIfDefinedKey:@"sslKeyPassword" withString:self.sslKeyPassword];
    [aParams addIfDefinedKey:@"customHeaders" withArray:self.customHeaders];
}

- (void)dealloc
{
    [self->_url release];
    [self->_data release];
    [self->_username release];
    [self->_password release];
    [self->_sslCertificate release];
    [self->_sslCertificateType release];
    [self->_sslCertificatePassword release];
    [self->_sslEngine release];
    [self->_sslEngineDefault release];
    [self->_sslKeyType release];
    [self->_sslKey release];
    [self->_sslKeyPassword release];
    [self->_customHeaders release];
    [super dealloc];
}

@end

@implementation KalturaHttpNotificationDispatchJobData
@synthesize url = _url;
@synthesize method = _method;
@synthesize data = _data;
@synthesize timeout = _timeout;
@synthesize connectTimeout = _connectTimeout;
@synthesize username = _username;
@synthesize password = _password;
@synthesize authenticationMethod = _authenticationMethod;
@synthesize sslVersion = _sslVersion;
@synthesize sslCertificate = _sslCertificate;
@synthesize sslCertificateType = _sslCertificateType;
@synthesize sslCertificatePassword = _sslCertificatePassword;
@synthesize sslEngine = _sslEngine;
@synthesize sslEngineDefault = _sslEngineDefault;
@synthesize sslKeyType = _sslKeyType;
@synthesize sslKey = _sslKey;
@synthesize sslKeyPassword = _sslKeyPassword;
@synthesize customHeaders = _customHeaders;
@synthesize signSecret = _signSecret;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_method = KALTURA_UNDEF_INT;
    self->_timeout = KALTURA_UNDEF_INT;
    self->_connectTimeout = KALTURA_UNDEF_INT;
    self->_authenticationMethod = KALTURA_UNDEF_INT;
    self->_sslVersion = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfUrl
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfMethod
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfData
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTimeout
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfConnectTimeout
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUsername
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPassword
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfAuthenticationMethod
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfSslVersion
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfSslCertificate
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslCertificateType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslCertificatePassword
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslEngine
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslEngineDefault
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslKeyType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslKey
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfSslKeyPassword
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfCustomHeaders
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfCustomHeaders
{
    return @"KalturaKeyValue";
}

- (KalturaFieldType)getTypeOfSignSecret
{
    return KFT_String;
}

- (void)setMethodFromString:(NSString*)aPropVal
{
    self.method = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setTimeoutFromString:(NSString*)aPropVal
{
    self.timeout = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setConnectTimeoutFromString:(NSString*)aPropVal
{
    self.connectTimeout = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setAuthenticationMethodFromString:(NSString*)aPropVal
{
    self.authenticationMethod = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setSslVersionFromString:(NSString*)aPropVal
{
    self.sslVersion = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaHttpNotificationDispatchJobData"];
    [aParams addIfDefinedKey:@"url" withString:self.url];
    [aParams addIfDefinedKey:@"method" withInt:self.method];
    [aParams addIfDefinedKey:@"data" withString:self.data];
    [aParams addIfDefinedKey:@"timeout" withInt:self.timeout];
    [aParams addIfDefinedKey:@"connectTimeout" withInt:self.connectTimeout];
    [aParams addIfDefinedKey:@"username" withString:self.username];
    [aParams addIfDefinedKey:@"password" withString:self.password];
    [aParams addIfDefinedKey:@"authenticationMethod" withInt:self.authenticationMethod];
    [aParams addIfDefinedKey:@"sslVersion" withInt:self.sslVersion];
    [aParams addIfDefinedKey:@"sslCertificate" withString:self.sslCertificate];
    [aParams addIfDefinedKey:@"sslCertificateType" withString:self.sslCertificateType];
    [aParams addIfDefinedKey:@"sslCertificatePassword" withString:self.sslCertificatePassword];
    [aParams addIfDefinedKey:@"sslEngine" withString:self.sslEngine];
    [aParams addIfDefinedKey:@"sslEngineDefault" withString:self.sslEngineDefault];
    [aParams addIfDefinedKey:@"sslKeyType" withString:self.sslKeyType];
    [aParams addIfDefinedKey:@"sslKey" withString:self.sslKey];
    [aParams addIfDefinedKey:@"sslKeyPassword" withString:self.sslKeyPassword];
    [aParams addIfDefinedKey:@"customHeaders" withArray:self.customHeaders];
    [aParams addIfDefinedKey:@"signSecret" withString:self.signSecret];
}

- (void)dealloc
{
    [self->_url release];
    [self->_data release];
    [self->_username release];
    [self->_password release];
    [self->_sslCertificate release];
    [self->_sslCertificateType release];
    [self->_sslCertificatePassword release];
    [self->_sslEngine release];
    [self->_sslEngineDefault release];
    [self->_sslKeyType release];
    [self->_sslKey release];
    [self->_sslKeyPassword release];
    [self->_customHeaders release];
    [self->_signSecret release];
    [super dealloc];
}

@end

@implementation KalturaHttpNotificationTemplateBaseFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaHttpNotificationTemplateBaseFilter"];
}

@end

@implementation KalturaHttpNotificationTemplateFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaHttpNotificationTemplateFilter"];
}

@end

///////////////////////// services /////////////////////////
