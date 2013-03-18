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
#import "KalturaEmailNotificationClientPlugin.h"

///////////////////////// enums /////////////////////////
@implementation KalturaEmailNotificationTemplatePriority
+ (int)HIGH
{
    return 1;
}
+ (int)NORMAL
{
    return 3;
}
+ (int)LOW
{
    return 5;
}
@end

@implementation KalturaEmailNotificationTemplateOrderBy
+ (NSString*)ID_ASC
{
    return @"+id";
}
+ (NSString*)ID_DESC
{
    return @"-id";
}
+ (NSString*)CREATED_AT_ASC
{
    return @"+createdAt";
}
+ (NSString*)CREATED_AT_DESC
{
    return @"-createdAt";
}
+ (NSString*)UPDATED_AT_ASC
{
    return @"+updatedAt";
}
+ (NSString*)UPDATED_AT_DESC
{
    return @"-updatedAt";
}
@end

///////////////////////// classes /////////////////////////
@implementation KalturaEmailNotificationDispatchJobData
@synthesize fromEmail = _fromEmail;
@synthesize fromName = _fromName;
@synthesize to = _to;
@synthesize cc = _cc;
@synthesize bcc = _bcc;
@synthesize replyTo = _replyTo;
@synthesize priority = _priority;
@synthesize confirmReadingTo = _confirmReadingTo;
@synthesize hostname = _hostname;
@synthesize messageID = _messageID;
@synthesize customHeaders = _customHeaders;
@synthesize contentParameters = _contentParameters;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_priority = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfFromEmail
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFromName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTo
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfTo
{
    return @"KalturaKeyValue";
}

- (KalturaFieldType)getTypeOfCc
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfCc
{
    return @"KalturaKeyValue";
}

- (KalturaFieldType)getTypeOfBcc
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfBcc
{
    return @"KalturaKeyValue";
}

- (KalturaFieldType)getTypeOfReplyTo
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfReplyTo
{
    return @"KalturaKeyValue";
}

- (KalturaFieldType)getTypeOfPriority
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfConfirmReadingTo
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfHostname
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfMessageID
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

- (KalturaFieldType)getTypeOfContentParameters
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfContentParameters
{
    return @"KalturaKeyValue";
}

- (void)setPriorityFromString:(NSString*)aPropVal
{
    self.priority = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaEmailNotificationDispatchJobData"];
    [aParams addIfDefinedKey:@"fromEmail" withString:self.fromEmail];
    [aParams addIfDefinedKey:@"fromName" withString:self.fromName];
    [aParams addIfDefinedKey:@"to" withArray:self.to];
    [aParams addIfDefinedKey:@"cc" withArray:self.cc];
    [aParams addIfDefinedKey:@"bcc" withArray:self.bcc];
    [aParams addIfDefinedKey:@"replyTo" withArray:self.replyTo];
    [aParams addIfDefinedKey:@"priority" withInt:self.priority];
    [aParams addIfDefinedKey:@"confirmReadingTo" withString:self.confirmReadingTo];
    [aParams addIfDefinedKey:@"hostname" withString:self.hostname];
    [aParams addIfDefinedKey:@"messageID" withString:self.messageID];
    [aParams addIfDefinedKey:@"customHeaders" withArray:self.customHeaders];
    [aParams addIfDefinedKey:@"contentParameters" withArray:self.contentParameters];
}

- (void)dealloc
{
    [self->_fromEmail release];
    [self->_fromName release];
    [self->_to release];
    [self->_cc release];
    [self->_bcc release];
    [self->_replyTo release];
    [self->_confirmReadingTo release];
    [self->_hostname release];
    [self->_messageID release];
    [self->_customHeaders release];
    [self->_contentParameters release];
    [super dealloc];
}

@end

@implementation KalturaEmailNotificationTemplateBaseFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaEmailNotificationTemplateBaseFilter"];
}

@end

@implementation KalturaEmailNotificationTemplateFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaEmailNotificationTemplateFilter"];
}

@end

///////////////////////// services /////////////////////////
