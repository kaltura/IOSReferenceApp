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
// @package External
// @subpackage Kaltura
#import "../KalturaClient.h"

///////////////////////// enums /////////////////////////
///////////////////////// classes /////////////////////////
// @package External
// @subpackage Kaltura
@interface KalturaInternalToolsSession : KalturaObjectBase
@property (nonatomic,assign) int partner_id;
@property (nonatomic,assign) int valid_until;
@property (nonatomic,copy) NSString* partner_pattern;
@property (nonatomic,assign) int type;	// enum KalturaSessionType
@property (nonatomic,copy) NSString* error;
@property (nonatomic,assign) int rand;
@property (nonatomic,copy) NSString* user;
@property (nonatomic,copy) NSString* privileges;
- (KalturaFieldType)getTypeOfPartner_id;
- (KalturaFieldType)getTypeOfValid_until;
- (KalturaFieldType)getTypeOfPartner_pattern;
- (KalturaFieldType)getTypeOfType;
- (KalturaFieldType)getTypeOfError;
- (KalturaFieldType)getTypeOfRand;
- (KalturaFieldType)getTypeOfUser;
- (KalturaFieldType)getTypeOfPrivileges;
- (void)setPartner_idFromString:(NSString*)aPropVal;
- (void)setValid_untilFromString:(NSString*)aPropVal;
- (void)setTypeFromString:(NSString*)aPropVal;
- (void)setRandFromString:(NSString*)aPropVal;
@end

///////////////////////// services /////////////////////////
// @package External
// @subpackage Kaltura
// Internal Tools Service
@interface KalturaKalturaInternalToolsSystemHelperService : KalturaServiceBase
// KS from Secure String
- (KalturaInternalToolsSession*)fromSecureStringWithStr:(NSString*)aStr;
// from ip to country
- (NSString*)iptocountryWithRemote_addr:(NSString*)aRemote_addr;
- (NSString*)getRemoteAddress;
@end

@interface KalturaKalturaInternalToolsClientPlugin : KalturaClientPlugin
{
	KalturaKalturaInternalToolsSystemHelperService* _KalturaInternalToolsSystemHelper;
}

@property (nonatomic, assign) KalturaClientBase* client;
@property (nonatomic, readonly) KalturaKalturaInternalToolsSystemHelperService* KalturaInternalToolsSystemHelper;
@end

