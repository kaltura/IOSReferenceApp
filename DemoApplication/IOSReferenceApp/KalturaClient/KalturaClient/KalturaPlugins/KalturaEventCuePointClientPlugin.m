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
#import "KalturaEventCuePointClientPlugin.h"

///////////////////////// enums /////////////////////////
@implementation KalturaEventCuePointOrderBy
+ (NSString*)CREATED_AT_ASC
{
    return @"+createdAt";
}
+ (NSString*)PARTNER_SORT_VALUE_ASC
{
    return @"+partnerSortValue";
}
+ (NSString*)START_TIME_ASC
{
    return @"+startTime";
}
+ (NSString*)TRIGGERED_AT_ASC
{
    return @"+triggeredAt";
}
+ (NSString*)UPDATED_AT_ASC
{
    return @"+updatedAt";
}
+ (NSString*)CREATED_AT_DESC
{
    return @"-createdAt";
}
+ (NSString*)PARTNER_SORT_VALUE_DESC
{
    return @"-partnerSortValue";
}
+ (NSString*)START_TIME_DESC
{
    return @"-startTime";
}
+ (NSString*)TRIGGERED_AT_DESC
{
    return @"-triggeredAt";
}
+ (NSString*)UPDATED_AT_DESC
{
    return @"-updatedAt";
}
@end

@implementation KalturaEventType
+ (NSString*)BROADCAST_START
{
    return @"1";
}
+ (NSString*)BROADCAST_END
{
    return @"2";
}
@end

///////////////////////// classes /////////////////////////
@implementation KalturaEventCuePoint
@synthesize eventType = _eventType;

- (KalturaFieldType)getTypeOfEventType
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaEventCuePoint"];
    [aParams addIfDefinedKey:@"eventType" withString:self.eventType];
}

- (void)dealloc
{
    [self->_eventType release];
    [super dealloc];
}

@end

@implementation KalturaEventCuePointBaseFilter
@synthesize eventTypeEqual = _eventTypeEqual;
@synthesize eventTypeIn = _eventTypeIn;

- (KalturaFieldType)getTypeOfEventTypeEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfEventTypeIn
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaEventCuePointBaseFilter"];
    [aParams addIfDefinedKey:@"eventTypeEqual" withString:self.eventTypeEqual];
    [aParams addIfDefinedKey:@"eventTypeIn" withString:self.eventTypeIn];
}

- (void)dealloc
{
    [self->_eventTypeEqual release];
    [self->_eventTypeIn release];
    [super dealloc];
}

@end

@implementation KalturaEventCuePointFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaEventCuePointFilter"];
}

@end

///////////////////////// services /////////////////////////
