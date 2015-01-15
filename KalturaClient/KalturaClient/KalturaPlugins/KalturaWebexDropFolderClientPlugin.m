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
#import "KalturaWebexDropFolderClientPlugin.h"

///////////////////////// enums /////////////////////////
///////////////////////// classes /////////////////////////
@implementation KalturaWebexDropFolder
@synthesize webexUserId = _webexUserId;
@synthesize webexPassword = _webexPassword;
@synthesize webexSiteId = _webexSiteId;
@synthesize webexPartnerId = _webexPartnerId;
@synthesize webexServiceUrl = _webexServiceUrl;
@synthesize webexHostIdMetadataFieldName = _webexHostIdMetadataFieldName;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_webexSiteId = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfWebexUserId
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfWebexPassword
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfWebexSiteId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfWebexPartnerId
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfWebexServiceUrl
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfWebexHostIdMetadataFieldName
{
    return KFT_String;
}

- (void)setWebexSiteIdFromString:(NSString*)aPropVal
{
    self.webexSiteId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaWebexDropFolder"];
    [aParams addIfDefinedKey:@"webexUserId" withString:self.webexUserId];
    [aParams addIfDefinedKey:@"webexPassword" withString:self.webexPassword];
    [aParams addIfDefinedKey:@"webexSiteId" withInt:self.webexSiteId];
    [aParams addIfDefinedKey:@"webexPartnerId" withString:self.webexPartnerId];
    [aParams addIfDefinedKey:@"webexServiceUrl" withString:self.webexServiceUrl];
    [aParams addIfDefinedKey:@"webexHostIdMetadataFieldName" withString:self.webexHostIdMetadataFieldName];
}

- (void)dealloc
{
    [self->_webexUserId release];
    [self->_webexPassword release];
    [self->_webexPartnerId release];
    [self->_webexServiceUrl release];
    [self->_webexHostIdMetadataFieldName release];
    [super dealloc];
}

@end

@implementation KalturaWebexDropFolderFile
@synthesize recordingId = _recordingId;
@synthesize webexHostId = _webexHostId;
@synthesize description = _description;
@synthesize confId = _confId;
@synthesize contentUrl = _contentUrl;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_recordingId = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfRecordingId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfWebexHostId
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDescription
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfConfId
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfContentUrl
{
    return KFT_String;
}

- (void)setRecordingIdFromString:(NSString*)aPropVal
{
    self.recordingId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaWebexDropFolderFile"];
    [aParams addIfDefinedKey:@"recordingId" withInt:self.recordingId];
    [aParams addIfDefinedKey:@"webexHostId" withString:self.webexHostId];
    [aParams addIfDefinedKey:@"description" withString:self.description];
    [aParams addIfDefinedKey:@"confId" withString:self.confId];
    [aParams addIfDefinedKey:@"contentUrl" withString:self.contentUrl];
}

- (void)dealloc
{
    [self->_webexHostId release];
    [self->_description release];
    [self->_confId release];
    [self->_contentUrl release];
    [super dealloc];
}

@end

@implementation KalturaWebexDropFolderContentProcessorJobData
@synthesize description = _description;
@synthesize webexHostId = _webexHostId;

- (KalturaFieldType)getTypeOfDescription
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfWebexHostId
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaWebexDropFolderContentProcessorJobData"];
    [aParams addIfDefinedKey:@"description" withString:self.description];
    [aParams addIfDefinedKey:@"webexHostId" withString:self.webexHostId];
}

- (void)dealloc
{
    [self->_description release];
    [self->_webexHostId release];
    [super dealloc];
}

@end

///////////////////////// services /////////////////////////
