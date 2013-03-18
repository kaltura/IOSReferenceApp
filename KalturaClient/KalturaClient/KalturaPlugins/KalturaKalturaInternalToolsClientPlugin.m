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
#import "KalturaKalturaInternalToolsClientPlugin.h"

///////////////////////// enums /////////////////////////
///////////////////////// classes /////////////////////////
@implementation KalturaInternalToolsSession
@synthesize partner_id = _partner_id;
@synthesize valid_until = _valid_until;
@synthesize partner_pattern = _partner_pattern;
@synthesize type = _type;
@synthesize error = _error;
@synthesize rand = _rand;
@synthesize user = _user;
@synthesize privileges = _privileges;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_partner_id = KALTURA_UNDEF_INT;
    self->_valid_until = KALTURA_UNDEF_INT;
    self->_type = KALTURA_UNDEF_INT;
    self->_rand = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfPartner_id
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfValid_until
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartner_pattern
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfType
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfError
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfRand
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUser
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPrivileges
{
    return KFT_String;
}

- (void)setPartner_idFromString:(NSString*)aPropVal
{
    self.partner_id = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setValid_untilFromString:(NSString*)aPropVal
{
    self.valid_until = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setTypeFromString:(NSString*)aPropVal
{
    self.type = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setRandFromString:(NSString*)aPropVal
{
    self.rand = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaInternalToolsSession"];
    [aParams addIfDefinedKey:@"partner_id" withInt:self.partner_id];
    [aParams addIfDefinedKey:@"valid_until" withInt:self.valid_until];
    [aParams addIfDefinedKey:@"partner_pattern" withString:self.partner_pattern];
    [aParams addIfDefinedKey:@"type" withInt:self.type];
    [aParams addIfDefinedKey:@"error" withString:self.error];
    [aParams addIfDefinedKey:@"rand" withInt:self.rand];
    [aParams addIfDefinedKey:@"user" withString:self.user];
    [aParams addIfDefinedKey:@"privileges" withString:self.privileges];
}

- (void)dealloc
{
    [self->_partner_pattern release];
    [self->_error release];
    [self->_user release];
    [self->_privileges release];
    [super dealloc];
}

@end

///////////////////////// services /////////////////////////
@implementation KalturaKalturaInternalToolsSystemHelperService
- (KalturaInternalToolsSession*)fromSecureStringWithStr:(NSString*)aStr
{
    [self.client.params addIfDefinedKey:@"str" withString:aStr];
    return [self.client queueObjectService:@"kalturainternaltools_kalturainternaltoolssystemhelper" withAction:@"fromSecureString" withExpectedType:@"KalturaInternalToolsSession"];
}

- (NSString*)iptocountryWithRemote_addr:(NSString*)aRemote_addr
{
    [self.client.params addIfDefinedKey:@"remote_addr" withString:aRemote_addr];
    return [self.client queueStringService:@"kalturainternaltools_kalturainternaltoolssystemhelper" withAction:@"iptocountry"];
}

- (NSString*)getRemoteAddress
{
    return [self.client queueStringService:@"kalturainternaltools_kalturainternaltoolssystemhelper" withAction:@"getRemoteAddress"];
}

@end

@implementation KalturaKalturaInternalToolsClientPlugin
@synthesize client = _client;

- (id)initWithClient:(KalturaClient*)aClient
{
    self = [super init];
    if (self == nil)
        return nil;
    self.client = aClient;
    return self;
}

- (KalturaKalturaInternalToolsSystemHelperService*)KalturaInternalToolsSystemHelper
{
    if (self->_KalturaInternalToolsSystemHelper == nil)
    	self->_KalturaInternalToolsSystemHelper = [[KalturaKalturaInternalToolsSystemHelperService alloc] initWithClient:self.client];
    return self->_KalturaInternalToolsSystemHelper;
}

- (void)dealloc
{
    [self->_KalturaInternalToolsSystemHelper release];
	[super dealloc];
}

@end

