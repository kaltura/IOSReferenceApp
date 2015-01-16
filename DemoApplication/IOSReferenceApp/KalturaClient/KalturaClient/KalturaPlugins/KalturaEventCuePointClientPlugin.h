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
#import "KalturaCuePointClientPlugin.h"

///////////////////////// enums /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaEventCuePointOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)PARTNER_SORT_VALUE_ASC;
+ (NSString*)START_TIME_ASC;
+ (NSString*)TRIGGERED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)PARTNER_SORT_VALUE_DESC;
+ (NSString*)START_TIME_DESC;
+ (NSString*)TRIGGERED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEventType : NSObject
+ (NSString*)BROADCAST_START;
+ (NSString*)BROADCAST_END;
@end

///////////////////////// classes /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaEventCuePoint : KalturaCuePoint
@property (nonatomic,copy) NSString* eventType;	// enum KalturaEventType
- (KalturaFieldType)getTypeOfEventType;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEventCuePointBaseFilter : KalturaCuePointFilter
@property (nonatomic,copy) NSString* eventTypeEqual;	// enum KalturaEventType
@property (nonatomic,copy) NSString* eventTypeIn;
- (KalturaFieldType)getTypeOfEventTypeEqual;
- (KalturaFieldType)getTypeOfEventTypeIn;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaEventCuePointFilter : KalturaEventCuePointBaseFilter
@end

///////////////////////// services /////////////////////////
