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
#import "KalturaEventNotificationClientPlugin.h"

///////////////////////// enums /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationAuthenticationMethod : NSObject
+ (int)ANYSAFE;
+ (int)ANY;
+ (int)BASIC;
+ (int)DIGEST;
+ (int)GSSNEGOTIATE;
+ (int)NTLM;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationMethod : NSObject
+ (int)GET;
+ (int)POST;
+ (int)PUT;
+ (int)DELETE;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationSslVersion : NSObject
+ (int)V2;
+ (int)V3;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationCertificateType : NSObject
+ (NSString*)DER;
+ (NSString*)ENG;
+ (NSString*)PEM;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationSslKeyType : NSObject
+ (NSString*)DER;
+ (NSString*)ENG;
+ (NSString*)PEM;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationTemplateOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)ID_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)ID_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

///////////////////////// classes /////////////////////////
// @package Kaltura
// @subpackage Client
// Wrapper for sent notifications
@interface KalturaHttpNotification : KalturaObjectBase
// Object that triggered the notification
@property (nonatomic,retain) KalturaObjectBase* object;
// Object type that triggered the notification
@property (nonatomic,copy) NSString* eventObjectType;	// enum KalturaEventNotificationEventObjectType
// ID of the batch job that execute the notification
@property (nonatomic,assign) int eventNotificationJobId;
// ID of the template that triggered the notification
@property (nonatomic,assign) int templateId;
// Name of the template that triggered the notification
@property (nonatomic,copy) NSString* templateName;
// System name of the template that triggered the notification
@property (nonatomic,copy) NSString* templateSystemName;
// Ecent type that triggered the notification
@property (nonatomic,copy) NSString* eventType;	// enum KalturaEventNotificationEventType
- (KalturaFieldType)getTypeOfObject;
- (NSString*)getObjectTypeOfObject;
- (KalturaFieldType)getTypeOfEventObjectType;
- (KalturaFieldType)getTypeOfEventNotificationJobId;
- (KalturaFieldType)getTypeOfTemplateId;
- (KalturaFieldType)getTypeOfTemplateName;
- (KalturaFieldType)getTypeOfTemplateSystemName;
- (KalturaFieldType)getTypeOfEventType;
- (void)setEventNotificationJobIdFromString:(NSString*)aPropVal;
- (void)setTemplateIdFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationData : KalturaObjectBase
@end

// @package Kaltura
// @subpackage Client
// If this class used as the template data, the fields will be taken from the content parameters
@interface KalturaHttpNotificationDataFields : KalturaHttpNotificationData
@end

// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationDataText : KalturaHttpNotificationData
@property (nonatomic,retain) KalturaStringValue* content;
- (KalturaFieldType)getTypeOfContent;
- (NSString*)getObjectTypeOfContent;
@end

// @package Kaltura
// @subpackage Client
// Evaluates PHP statement, depends on the execution context
@interface KalturaHttpNotificationObjectData : KalturaHttpNotificationData
// Kaltura API object type
@property (nonatomic,copy) NSString* apiObjectType;
// Data format
@property (nonatomic,assign) int format;	// enum KalturaResponseType
// Ignore null attributes during serialization
@property (nonatomic,assign) KALTURA_BOOL ignoreNull;
// PHP code
@property (nonatomic,copy) NSString* code;
- (KalturaFieldType)getTypeOfApiObjectType;
- (KalturaFieldType)getTypeOfFormat;
- (KalturaFieldType)getTypeOfIgnoreNull;
- (KalturaFieldType)getTypeOfCode;
- (void)setFormatFromString:(NSString*)aPropVal;
- (void)setIgnoreNullFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationTemplate : KalturaEventNotificationTemplate
// Remote server URL
@property (nonatomic,copy) NSString* url;
// Request method.
@property (nonatomic,assign) int method;	// enum KalturaHttpNotificationMethod
// Data to send.
@property (nonatomic,retain) KalturaHttpNotificationData* data;
// The maximum number of seconds to allow cURL functions to execute.
@property (nonatomic,assign) int timeout;
// The number of seconds to wait while trying to connect.
// 	 Must be larger than zero.
@property (nonatomic,assign) int connectTimeout;
// A username to use for the connection.
@property (nonatomic,copy) NSString* username;
// A password to use for the connection.
@property (nonatomic,copy) NSString* password;
// The HTTP authentication method to use.
@property (nonatomic,assign) int authenticationMethod;	// enum KalturaHttpNotificationAuthenticationMethod
// The SSL version (2 or 3) to use.
// 	 By default PHP will try to determine this itself, although in some cases this must be set manually.
@property (nonatomic,assign) int sslVersion;	// enum KalturaHttpNotificationSslVersion
// SSL certificate to verify the peer with.
@property (nonatomic,copy) NSString* sslCertificate;
// The format of the certificate.
@property (nonatomic,copy) NSString* sslCertificateType;	// enum KalturaHttpNotificationCertificateType
// The password required to use the certificate.
@property (nonatomic,copy) NSString* sslCertificatePassword;
// The identifier for the crypto engine of the private SSL key specified in ssl key.
@property (nonatomic,copy) NSString* sslEngine;
// The identifier for the crypto engine used for asymmetric crypto operations.
@property (nonatomic,copy) NSString* sslEngineDefault;
// The key type of the private SSL key specified in ssl key - PEM / DER / ENG.
@property (nonatomic,copy) NSString* sslKeyType;	// enum KalturaHttpNotificationSslKeyType
// Private SSL key.
@property (nonatomic,copy) NSString* sslKey;
// The secret password needed to use the private SSL key specified in ssl key.
@property (nonatomic,copy) NSString* sslKeyPassword;
// Adds a e-mail custom header
@property (nonatomic,retain) NSMutableArray* customHeaders;	// of KalturaKeyValue elements
- (KalturaFieldType)getTypeOfUrl;
- (KalturaFieldType)getTypeOfMethod;
- (KalturaFieldType)getTypeOfData;
- (NSString*)getObjectTypeOfData;
- (KalturaFieldType)getTypeOfTimeout;
- (KalturaFieldType)getTypeOfConnectTimeout;
- (KalturaFieldType)getTypeOfUsername;
- (KalturaFieldType)getTypeOfPassword;
- (KalturaFieldType)getTypeOfAuthenticationMethod;
- (KalturaFieldType)getTypeOfSslVersion;
- (KalturaFieldType)getTypeOfSslCertificate;
- (KalturaFieldType)getTypeOfSslCertificateType;
- (KalturaFieldType)getTypeOfSslCertificatePassword;
- (KalturaFieldType)getTypeOfSslEngine;
- (KalturaFieldType)getTypeOfSslEngineDefault;
- (KalturaFieldType)getTypeOfSslKeyType;
- (KalturaFieldType)getTypeOfSslKey;
- (KalturaFieldType)getTypeOfSslKeyPassword;
- (KalturaFieldType)getTypeOfCustomHeaders;
- (NSString*)getObjectTypeOfCustomHeaders;
- (void)setMethodFromString:(NSString*)aPropVal;
- (void)setTimeoutFromString:(NSString*)aPropVal;
- (void)setConnectTimeoutFromString:(NSString*)aPropVal;
- (void)setAuthenticationMethodFromString:(NSString*)aPropVal;
- (void)setSslVersionFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationDispatchJobData : KalturaEventNotificationDispatchJobData
// Remote server URL
@property (nonatomic,copy) NSString* url;
// Request method.
@property (nonatomic,assign) int method;	// enum KalturaHttpNotificationMethod
// Data to send.
@property (nonatomic,copy) NSString* data;
// The maximum number of seconds to allow cURL functions to execute.
@property (nonatomic,assign) int timeout;
// The number of seconds to wait while trying to connect.
// 	 Must be larger than zero.
@property (nonatomic,assign) int connectTimeout;
// A username to use for the connection.
@property (nonatomic,copy) NSString* username;
// A password to use for the connection.
@property (nonatomic,copy) NSString* password;
// The HTTP authentication method to use.
@property (nonatomic,assign) int authenticationMethod;	// enum KalturaHttpNotificationAuthenticationMethod
// The SSL version (2 or 3) to use.
// 	 By default PHP will try to determine this itself, although in some cases this must be set manually.
@property (nonatomic,assign) int sslVersion;	// enum KalturaHttpNotificationSslVersion
// SSL certificate to verify the peer with.
@property (nonatomic,copy) NSString* sslCertificate;
// The format of the certificate.
@property (nonatomic,copy) NSString* sslCertificateType;	// enum KalturaHttpNotificationCertificateType
// The password required to use the certificate.
@property (nonatomic,copy) NSString* sslCertificatePassword;
// The identifier for the crypto engine of the private SSL key specified in ssl key.
@property (nonatomic,copy) NSString* sslEngine;
// The identifier for the crypto engine used for asymmetric crypto operations.
@property (nonatomic,copy) NSString* sslEngineDefault;
// The key type of the private SSL key specified in ssl key - PEM / DER / ENG.
@property (nonatomic,copy) NSString* sslKeyType;	// enum KalturaHttpNotificationSslKeyType
// Private SSL key.
@property (nonatomic,copy) NSString* sslKey;
// The secret password needed to use the private SSL key specified in ssl key.
@property (nonatomic,copy) NSString* sslKeyPassword;
// Adds a e-mail custom header
@property (nonatomic,retain) NSMutableArray* customHeaders;	// of KalturaKeyValue elements
// The secret to sign the notification with
@property (nonatomic,copy) NSString* signSecret;
- (KalturaFieldType)getTypeOfUrl;
- (KalturaFieldType)getTypeOfMethod;
- (KalturaFieldType)getTypeOfData;
- (KalturaFieldType)getTypeOfTimeout;
- (KalturaFieldType)getTypeOfConnectTimeout;
- (KalturaFieldType)getTypeOfUsername;
- (KalturaFieldType)getTypeOfPassword;
- (KalturaFieldType)getTypeOfAuthenticationMethod;
- (KalturaFieldType)getTypeOfSslVersion;
- (KalturaFieldType)getTypeOfSslCertificate;
- (KalturaFieldType)getTypeOfSslCertificateType;
- (KalturaFieldType)getTypeOfSslCertificatePassword;
- (KalturaFieldType)getTypeOfSslEngine;
- (KalturaFieldType)getTypeOfSslEngineDefault;
- (KalturaFieldType)getTypeOfSslKeyType;
- (KalturaFieldType)getTypeOfSslKey;
- (KalturaFieldType)getTypeOfSslKeyPassword;
- (KalturaFieldType)getTypeOfCustomHeaders;
- (NSString*)getObjectTypeOfCustomHeaders;
- (KalturaFieldType)getTypeOfSignSecret;
- (void)setMethodFromString:(NSString*)aPropVal;
- (void)setTimeoutFromString:(NSString*)aPropVal;
- (void)setConnectTimeoutFromString:(NSString*)aPropVal;
- (void)setAuthenticationMethodFromString:(NSString*)aPropVal;
- (void)setSslVersionFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationTemplateBaseFilter : KalturaEventNotificationTemplateFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaHttpNotificationTemplateFilter : KalturaHttpNotificationTemplateBaseFilter
@end

///////////////////////// services /////////////////////////
