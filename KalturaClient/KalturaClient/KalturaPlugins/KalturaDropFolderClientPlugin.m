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
#import "KalturaDropFolderClientPlugin.h"

///////////////////////// enums /////////////////////////
@implementation KalturaDropFolderContentFileHandlerMatchPolicy
+ (int)ADD_AS_NEW
{
    return 1;
}
+ (int)MATCH_EXISTING_OR_ADD_AS_NEW
{
    return 2;
}
+ (int)MATCH_EXISTING_OR_KEEP_IN_FOLDER
{
    return 3;
}
@end

@implementation KalturaDropFolderFileDeletePolicy
+ (int)MANUAL_DELETE
{
    return 1;
}
+ (int)AUTO_DELETE
{
    return 2;
}
@end

@implementation KalturaDropFolderFileStatus
+ (int)UPLOADING
{
    return 1;
}
+ (int)PENDING
{
    return 2;
}
+ (int)WAITING
{
    return 3;
}
+ (int)HANDLED
{
    return 4;
}
+ (int)IGNORE
{
    return 5;
}
+ (int)DELETED
{
    return 6;
}
+ (int)PURGED
{
    return 7;
}
+ (int)NO_MATCH
{
    return 8;
}
+ (int)ERROR_HANDLING
{
    return 9;
}
+ (int)ERROR_DELETING
{
    return 10;
}
+ (int)DOWNLOADING
{
    return 11;
}
+ (int)ERROR_DOWNLOADING
{
    return 12;
}
@end

@implementation KalturaDropFolderStatus
+ (int)DISABLED
{
    return 0;
}
+ (int)ENABLED
{
    return 1;
}
+ (int)DELETED
{
    return 2;
}
@end

@implementation KalturaDropFolderFileErrorCode
+ (NSString*)ERROR_UPDATE_ENTRY
{
    return @"1";
}
+ (NSString*)ERROR_ADD_ENTRY
{
    return @"2";
}
+ (NSString*)FLAVOR_NOT_FOUND
{
    return @"3";
}
+ (NSString*)FLAVOR_MISSING_IN_FILE_NAME
{
    return @"4";
}
+ (NSString*)SLUG_REGEX_NO_MATCH
{
    return @"5";
}
+ (NSString*)ERROR_READING_FILE
{
    return @"6";
}
+ (NSString*)ERROR_DOWNLOADING_FILE
{
    return @"7";
}
+ (NSString*)LOCAL_FILE_WRONG_SIZE
{
    return @"dropFolderXmlBulkUpload.LOCAL_FILE_WRONG_SIZE";
}
+ (NSString*)LOCAL_FILE_WRONG_CHECKSUM
{
    return @"dropFolderXmlBulkUpload.LOCAL_FILE_WRONG_CHECKSUM";
}
+ (NSString*)ERROR_WRITING_TEMP_FILE
{
    return @"dropFolderXmlBulkUpload.ERROR_WRITING_TEMP_FILE";
}
+ (NSString*)ERROR_ADDING_BULK_UPLOAD
{
    return @"dropFolderXmlBulkUpload.ERROR_ADDING_BULK_UPLOAD";
}
@end

@implementation KalturaDropFolderFileHandlerType
+ (NSString*)CONTENT
{
    return @"1";
}
+ (NSString*)XML
{
    return @"dropFolderXmlBulkUpload.XML";
}
@end

@implementation KalturaDropFolderFileOrderBy
+ (NSString*)ID_ASC
{
    return @"+id";
}
+ (NSString*)ID_DESC
{
    return @"-id";
}
+ (NSString*)FILE_NAME_ASC
{
    return @"+fileName";
}
+ (NSString*)FILE_NAME_DESC
{
    return @"-fileName";
}
+ (NSString*)FILE_SIZE_ASC
{
    return @"+fileSize";
}
+ (NSString*)FILE_SIZE_DESC
{
    return @"-fileSize";
}
+ (NSString*)FILE_SIZE_LAST_SET_AT_ASC
{
    return @"+fileSizeLastSetAt";
}
+ (NSString*)FILE_SIZE_LAST_SET_AT_DESC
{
    return @"-fileSizeLastSetAt";
}
+ (NSString*)PARSED_SLUG_ASC
{
    return @"+parsedSlug";
}
+ (NSString*)PARSED_SLUG_DESC
{
    return @"-parsedSlug";
}
+ (NSString*)PARSED_FLAVOR_ASC
{
    return @"+parsedFlavor";
}
+ (NSString*)PARSED_FLAVOR_DESC
{
    return @"-parsedFlavor";
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

@implementation KalturaDropFolderOrderBy
+ (NSString*)ID_ASC
{
    return @"+id";
}
+ (NSString*)ID_DESC
{
    return @"-id";
}
+ (NSString*)NAME_ASC
{
    return @"+name";
}
+ (NSString*)NAME_DESC
{
    return @"-name";
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

@implementation KalturaDropFolderType
+ (NSString*)LOCAL
{
    return @"1";
}
+ (NSString*)FTP
{
    return @"2";
}
+ (NSString*)SCP
{
    return @"3";
}
+ (NSString*)SFTP
{
    return @"4";
}
@end

@implementation KalturaFtpDropFolderOrderBy
+ (NSString*)ID_ASC
{
    return @"+id";
}
+ (NSString*)ID_DESC
{
    return @"-id";
}
+ (NSString*)NAME_ASC
{
    return @"+name";
}
+ (NSString*)NAME_DESC
{
    return @"-name";
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

@implementation KalturaRemoteDropFolderOrderBy
+ (NSString*)ID_ASC
{
    return @"+id";
}
+ (NSString*)ID_DESC
{
    return @"-id";
}
+ (NSString*)NAME_ASC
{
    return @"+name";
}
+ (NSString*)NAME_DESC
{
    return @"-name";
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

@implementation KalturaScpDropFolderOrderBy
+ (NSString*)ID_ASC
{
    return @"+id";
}
+ (NSString*)ID_DESC
{
    return @"-id";
}
+ (NSString*)NAME_ASC
{
    return @"+name";
}
+ (NSString*)NAME_DESC
{
    return @"-name";
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

@implementation KalturaSftpDropFolderOrderBy
+ (NSString*)ID_ASC
{
    return @"+id";
}
+ (NSString*)ID_DESC
{
    return @"-id";
}
+ (NSString*)NAME_ASC
{
    return @"+name";
}
+ (NSString*)NAME_DESC
{
    return @"-name";
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

@implementation KalturaSshDropFolderOrderBy
+ (NSString*)ID_ASC
{
    return @"+id";
}
+ (NSString*)ID_DESC
{
    return @"-id";
}
+ (NSString*)NAME_ASC
{
    return @"+name";
}
+ (NSString*)NAME_DESC
{
    return @"-name";
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
@interface KalturaDropFolderFileHandlerConfig()
@property (nonatomic,copy) NSString* handlerType;
@end

@implementation KalturaDropFolderFileHandlerConfig
@synthesize handlerType = _handlerType;

- (KalturaFieldType)getTypeOfHandlerType
{
    return KFT_String;
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolderFileHandlerConfig"];
}

- (void)dealloc
{
    [self->_handlerType release];
    [super dealloc];
}

@end

@interface KalturaDropFolder()
@property (nonatomic,assign) int id;
@property (nonatomic,assign) int createdAt;
@property (nonatomic,assign) int updatedAt;
@end

@implementation KalturaDropFolder
@synthesize id = _id;
@synthesize partnerId = _partnerId;
@synthesize name = _name;
@synthesize description = _description;
@synthesize type = _type;
@synthesize status = _status;
@synthesize conversionProfileId = _conversionProfileId;
@synthesize dc = _dc;
@synthesize path = _path;
@synthesize fileSizeCheckInterval = _fileSizeCheckInterval;
@synthesize fileDeletePolicy = _fileDeletePolicy;
@synthesize autoFileDeleteDays = _autoFileDeleteDays;
@synthesize fileHandlerType = _fileHandlerType;
@synthesize fileNamePatterns = _fileNamePatterns;
@synthesize fileHandlerConfig = _fileHandlerConfig;
@synthesize tags = _tags;
@synthesize ignoreFileNamePatterns = _ignoreFileNamePatterns;
@synthesize createdAt = _createdAt;
@synthesize updatedAt = _updatedAt;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_id = KALTURA_UNDEF_INT;
    self->_partnerId = KALTURA_UNDEF_INT;
    self->_status = KALTURA_UNDEF_INT;
    self->_conversionProfileId = KALTURA_UNDEF_INT;
    self->_dc = KALTURA_UNDEF_INT;
    self->_fileSizeCheckInterval = KALTURA_UNDEF_INT;
    self->_fileDeletePolicy = KALTURA_UNDEF_INT;
    self->_autoFileDeleteDays = KALTURA_UNDEF_INT;
    self->_createdAt = KALTURA_UNDEF_INT;
    self->_updatedAt = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDescription
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfStatus
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfConversionProfileId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfDc
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPath
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileSizeCheckInterval
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfFileDeletePolicy
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfAutoFileDeleteDays
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfFileHandlerType
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileNamePatterns
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileHandlerConfig
{
    return KFT_Object;
}

- (NSString*)getObjectTypeOfFileHandlerConfig
{
    return @"KalturaDropFolderFileHandlerConfig";
}

- (KalturaFieldType)getTypeOfTags
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfIgnoreFileNamePatterns
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfCreatedAt
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUpdatedAt
{
    return KFT_Int;
}

- (void)setIdFromString:(NSString*)aPropVal
{
    self.id = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerIdFromString:(NSString*)aPropVal
{
    self.partnerId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setStatusFromString:(NSString*)aPropVal
{
    self.status = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setConversionProfileIdFromString:(NSString*)aPropVal
{
    self.conversionProfileId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setDcFromString:(NSString*)aPropVal
{
    self.dc = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setFileSizeCheckIntervalFromString:(NSString*)aPropVal
{
    self.fileSizeCheckInterval = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setFileDeletePolicyFromString:(NSString*)aPropVal
{
    self.fileDeletePolicy = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setAutoFileDeleteDaysFromString:(NSString*)aPropVal
{
    self.autoFileDeleteDays = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setCreatedAtFromString:(NSString*)aPropVal
{
    self.createdAt = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUpdatedAtFromString:(NSString*)aPropVal
{
    self.updatedAt = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolder"];
    [aParams addIfDefinedKey:@"partnerId" withInt:self.partnerId];
    [aParams addIfDefinedKey:@"name" withString:self.name];
    [aParams addIfDefinedKey:@"description" withString:self.description];
    [aParams addIfDefinedKey:@"type" withString:self.type];
    [aParams addIfDefinedKey:@"status" withInt:self.status];
    [aParams addIfDefinedKey:@"conversionProfileId" withInt:self.conversionProfileId];
    [aParams addIfDefinedKey:@"dc" withInt:self.dc];
    [aParams addIfDefinedKey:@"path" withString:self.path];
    [aParams addIfDefinedKey:@"fileSizeCheckInterval" withInt:self.fileSizeCheckInterval];
    [aParams addIfDefinedKey:@"fileDeletePolicy" withInt:self.fileDeletePolicy];
    [aParams addIfDefinedKey:@"autoFileDeleteDays" withInt:self.autoFileDeleteDays];
    [aParams addIfDefinedKey:@"fileHandlerType" withString:self.fileHandlerType];
    [aParams addIfDefinedKey:@"fileNamePatterns" withString:self.fileNamePatterns];
    [aParams addIfDefinedKey:@"fileHandlerConfig" withObject:self.fileHandlerConfig];
    [aParams addIfDefinedKey:@"tags" withString:self.tags];
    [aParams addIfDefinedKey:@"ignoreFileNamePatterns" withString:self.ignoreFileNamePatterns];
}

- (void)dealloc
{
    [self->_name release];
    [self->_description release];
    [self->_type release];
    [self->_path release];
    [self->_fileHandlerType release];
    [self->_fileNamePatterns release];
    [self->_fileHandlerConfig release];
    [self->_tags release];
    [self->_ignoreFileNamePatterns release];
    [super dealloc];
}

@end

@interface KalturaDropFolderFile()
@property (nonatomic,assign) int id;
@property (nonatomic,assign) int partnerId;
@property (nonatomic,assign) int fileSizeLastSetAt;
@property (nonatomic,assign) int status;
@property (nonatomic,assign) int createdAt;
@property (nonatomic,assign) int updatedAt;
@end

@implementation KalturaDropFolderFile
@synthesize id = _id;
@synthesize partnerId = _partnerId;
@synthesize dropFolderId = _dropFolderId;
@synthesize fileName = _fileName;
@synthesize fileSize = _fileSize;
@synthesize fileSizeLastSetAt = _fileSizeLastSetAt;
@synthesize status = _status;
@synthesize parsedSlug = _parsedSlug;
@synthesize parsedFlavor = _parsedFlavor;
@synthesize errorCode = _errorCode;
@synthesize errorDescription = _errorDescription;
@synthesize lastModificationTime = _lastModificationTime;
@synthesize createdAt = _createdAt;
@synthesize updatedAt = _updatedAt;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_id = KALTURA_UNDEF_INT;
    self->_partnerId = KALTURA_UNDEF_INT;
    self->_dropFolderId = KALTURA_UNDEF_INT;
    self->_fileSize = KALTURA_UNDEF_FLOAT;
    self->_fileSizeLastSetAt = KALTURA_UNDEF_INT;
    self->_status = KALTURA_UNDEF_INT;
    self->_createdAt = KALTURA_UNDEF_INT;
    self->_updatedAt = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfDropFolderId
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfFileName
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileSize
{
    return KFT_Float;
}

- (KalturaFieldType)getTypeOfFileSizeLastSetAt
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfStatus
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfParsedSlug
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfParsedFlavor
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfErrorCode
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfErrorDescription
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfLastModificationTime
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfCreatedAt
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUpdatedAt
{
    return KFT_Int;
}

- (void)setIdFromString:(NSString*)aPropVal
{
    self.id = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerIdFromString:(NSString*)aPropVal
{
    self.partnerId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setDropFolderIdFromString:(NSString*)aPropVal
{
    self.dropFolderId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setFileSizeFromString:(NSString*)aPropVal
{
    self.fileSize = [KalturaSimpleTypeParser parseFloat:aPropVal];
}

- (void)setFileSizeLastSetAtFromString:(NSString*)aPropVal
{
    self.fileSizeLastSetAt = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setStatusFromString:(NSString*)aPropVal
{
    self.status = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setCreatedAtFromString:(NSString*)aPropVal
{
    self.createdAt = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUpdatedAtFromString:(NSString*)aPropVal
{
    self.updatedAt = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolderFile"];
    [aParams addIfDefinedKey:@"dropFolderId" withInt:self.dropFolderId];
    [aParams addIfDefinedKey:@"fileName" withString:self.fileName];
    [aParams addIfDefinedKey:@"fileSize" withFloat:self.fileSize];
    [aParams addIfDefinedKey:@"parsedSlug" withString:self.parsedSlug];
    [aParams addIfDefinedKey:@"parsedFlavor" withString:self.parsedFlavor];
    [aParams addIfDefinedKey:@"errorCode" withString:self.errorCode];
    [aParams addIfDefinedKey:@"errorDescription" withString:self.errorDescription];
    [aParams addIfDefinedKey:@"lastModificationTime" withString:self.lastModificationTime];
}

- (void)dealloc
{
    [self->_fileName release];
    [self->_parsedSlug release];
    [self->_parsedFlavor release];
    [self->_errorCode release];
    [self->_errorDescription release];
    [self->_lastModificationTime release];
    [super dealloc];
}

@end

@interface KalturaDropFolderFileListResponse()
@property (nonatomic,retain) NSMutableArray* objects;
@property (nonatomic,assign) int totalCount;
@end

@implementation KalturaDropFolderFileListResponse
@synthesize objects = _objects;
@synthesize totalCount = _totalCount;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_totalCount = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfObjects
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfObjects
{
    return @"KalturaDropFolderFile";
}

- (KalturaFieldType)getTypeOfTotalCount
{
    return KFT_Int;
}

- (void)setTotalCountFromString:(NSString*)aPropVal
{
    self.totalCount = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolderFileListResponse"];
}

- (void)dealloc
{
    [self->_objects release];
    [super dealloc];
}

@end

@interface KalturaDropFolderListResponse()
@property (nonatomic,retain) NSMutableArray* objects;
@property (nonatomic,assign) int totalCount;
@end

@implementation KalturaDropFolderListResponse
@synthesize objects = _objects;
@synthesize totalCount = _totalCount;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_totalCount = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfObjects
{
    return KFT_Array;
}

- (NSString*)getObjectTypeOfObjects
{
    return @"KalturaDropFolder";
}

- (KalturaFieldType)getTypeOfTotalCount
{
    return KFT_Int;
}

- (void)setTotalCountFromString:(NSString*)aPropVal
{
    self.totalCount = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolderListResponse"];
}

- (void)dealloc
{
    [self->_objects release];
    [super dealloc];
}

@end

@implementation KalturaDropFolderBaseFilter
@synthesize idEqual = _idEqual;
@synthesize idIn = _idIn;
@synthesize partnerIdEqual = _partnerIdEqual;
@synthesize partnerIdIn = _partnerIdIn;
@synthesize nameLike = _nameLike;
@synthesize typeEqual = _typeEqual;
@synthesize typeIn = _typeIn;
@synthesize statusEqual = _statusEqual;
@synthesize statusIn = _statusIn;
@synthesize conversionProfileIdEqual = _conversionProfileIdEqual;
@synthesize conversionProfileIdIn = _conversionProfileIdIn;
@synthesize dcEqual = _dcEqual;
@synthesize dcIn = _dcIn;
@synthesize pathLike = _pathLike;
@synthesize fileHandlerTypeEqual = _fileHandlerTypeEqual;
@synthesize fileHandlerTypeIn = _fileHandlerTypeIn;
@synthesize fileNamePatternsLike = _fileNamePatternsLike;
@synthesize fileNamePatternsMultiLikeOr = _fileNamePatternsMultiLikeOr;
@synthesize fileNamePatternsMultiLikeAnd = _fileNamePatternsMultiLikeAnd;
@synthesize tagsLike = _tagsLike;
@synthesize tagsMultiLikeOr = _tagsMultiLikeOr;
@synthesize tagsMultiLikeAnd = _tagsMultiLikeAnd;
@synthesize createdAtGreaterThanOrEqual = _createdAtGreaterThanOrEqual;
@synthesize createdAtLessThanOrEqual = _createdAtLessThanOrEqual;
@synthesize updatedAtGreaterThanOrEqual = _updatedAtGreaterThanOrEqual;
@synthesize updatedAtLessThanOrEqual = _updatedAtLessThanOrEqual;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_idEqual = KALTURA_UNDEF_INT;
    self->_partnerIdEqual = KALTURA_UNDEF_INT;
    self->_statusEqual = KALTURA_UNDEF_INT;
    self->_conversionProfileIdEqual = KALTURA_UNDEF_INT;
    self->_dcEqual = KALTURA_UNDEF_INT;
    self->_createdAtGreaterThanOrEqual = KALTURA_UNDEF_INT;
    self->_createdAtLessThanOrEqual = KALTURA_UNDEF_INT;
    self->_updatedAtGreaterThanOrEqual = KALTURA_UNDEF_INT;
    self->_updatedAtLessThanOrEqual = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfIdEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfIdIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPartnerIdEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerIdIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfNameLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTypeEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTypeIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfStatusEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfStatusIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfConversionProfileIdEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfConversionProfileIdIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDcEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfDcIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPathLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileHandlerTypeEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileHandlerTypeIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileNamePatternsLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileNamePatternsMultiLikeOr
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileNamePatternsMultiLikeAnd
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTagsLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTagsMultiLikeOr
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfTagsMultiLikeAnd
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual
{
    return KFT_Int;
}

- (void)setIdEqualFromString:(NSString*)aPropVal
{
    self.idEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerIdEqualFromString:(NSString*)aPropVal
{
    self.partnerIdEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setStatusEqualFromString:(NSString*)aPropVal
{
    self.statusEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setConversionProfileIdEqualFromString:(NSString*)aPropVal
{
    self.conversionProfileIdEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setDcEqualFromString:(NSString*)aPropVal
{
    self.dcEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal
{
    self.createdAtGreaterThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal
{
    self.createdAtLessThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal
{
    self.updatedAtGreaterThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal
{
    self.updatedAtLessThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolderBaseFilter"];
    [aParams addIfDefinedKey:@"idEqual" withInt:self.idEqual];
    [aParams addIfDefinedKey:@"idIn" withString:self.idIn];
    [aParams addIfDefinedKey:@"partnerIdEqual" withInt:self.partnerIdEqual];
    [aParams addIfDefinedKey:@"partnerIdIn" withString:self.partnerIdIn];
    [aParams addIfDefinedKey:@"nameLike" withString:self.nameLike];
    [aParams addIfDefinedKey:@"typeEqual" withString:self.typeEqual];
    [aParams addIfDefinedKey:@"typeIn" withString:self.typeIn];
    [aParams addIfDefinedKey:@"statusEqual" withInt:self.statusEqual];
    [aParams addIfDefinedKey:@"statusIn" withString:self.statusIn];
    [aParams addIfDefinedKey:@"conversionProfileIdEqual" withInt:self.conversionProfileIdEqual];
    [aParams addIfDefinedKey:@"conversionProfileIdIn" withString:self.conversionProfileIdIn];
    [aParams addIfDefinedKey:@"dcEqual" withInt:self.dcEqual];
    [aParams addIfDefinedKey:@"dcIn" withString:self.dcIn];
    [aParams addIfDefinedKey:@"pathLike" withString:self.pathLike];
    [aParams addIfDefinedKey:@"fileHandlerTypeEqual" withString:self.fileHandlerTypeEqual];
    [aParams addIfDefinedKey:@"fileHandlerTypeIn" withString:self.fileHandlerTypeIn];
    [aParams addIfDefinedKey:@"fileNamePatternsLike" withString:self.fileNamePatternsLike];
    [aParams addIfDefinedKey:@"fileNamePatternsMultiLikeOr" withString:self.fileNamePatternsMultiLikeOr];
    [aParams addIfDefinedKey:@"fileNamePatternsMultiLikeAnd" withString:self.fileNamePatternsMultiLikeAnd];
    [aParams addIfDefinedKey:@"tagsLike" withString:self.tagsLike];
    [aParams addIfDefinedKey:@"tagsMultiLikeOr" withString:self.tagsMultiLikeOr];
    [aParams addIfDefinedKey:@"tagsMultiLikeAnd" withString:self.tagsMultiLikeAnd];
    [aParams addIfDefinedKey:@"createdAtGreaterThanOrEqual" withInt:self.createdAtGreaterThanOrEqual];
    [aParams addIfDefinedKey:@"createdAtLessThanOrEqual" withInt:self.createdAtLessThanOrEqual];
    [aParams addIfDefinedKey:@"updatedAtGreaterThanOrEqual" withInt:self.updatedAtGreaterThanOrEqual];
    [aParams addIfDefinedKey:@"updatedAtLessThanOrEqual" withInt:self.updatedAtLessThanOrEqual];
}

- (void)dealloc
{
    [self->_idIn release];
    [self->_partnerIdIn release];
    [self->_nameLike release];
    [self->_typeEqual release];
    [self->_typeIn release];
    [self->_statusIn release];
    [self->_conversionProfileIdIn release];
    [self->_dcIn release];
    [self->_pathLike release];
    [self->_fileHandlerTypeEqual release];
    [self->_fileHandlerTypeIn release];
    [self->_fileNamePatternsLike release];
    [self->_fileNamePatternsMultiLikeOr release];
    [self->_fileNamePatternsMultiLikeAnd release];
    [self->_tagsLike release];
    [self->_tagsMultiLikeOr release];
    [self->_tagsMultiLikeAnd release];
    [super dealloc];
}

@end

@implementation KalturaDropFolderContentFileHandlerConfig
@synthesize contentMatchPolicy = _contentMatchPolicy;
@synthesize slugRegex = _slugRegex;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_contentMatchPolicy = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfContentMatchPolicy
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfSlugRegex
{
    return KFT_String;
}

- (void)setContentMatchPolicyFromString:(NSString*)aPropVal
{
    self.contentMatchPolicy = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolderContentFileHandlerConfig"];
    [aParams addIfDefinedKey:@"contentMatchPolicy" withInt:self.contentMatchPolicy];
    [aParams addIfDefinedKey:@"slugRegex" withString:self.slugRegex];
}

- (void)dealloc
{
    [self->_slugRegex release];
    [super dealloc];
}

@end

@implementation KalturaDropFolderFileBaseFilter
@synthesize idEqual = _idEqual;
@synthesize idIn = _idIn;
@synthesize partnerIdEqual = _partnerIdEqual;
@synthesize partnerIdIn = _partnerIdIn;
@synthesize dropFolderIdEqual = _dropFolderIdEqual;
@synthesize dropFolderIdIn = _dropFolderIdIn;
@synthesize fileNameEqual = _fileNameEqual;
@synthesize fileNameIn = _fileNameIn;
@synthesize fileNameLike = _fileNameLike;
@synthesize statusEqual = _statusEqual;
@synthesize statusIn = _statusIn;
@synthesize parsedSlugEqual = _parsedSlugEqual;
@synthesize parsedSlugIn = _parsedSlugIn;
@synthesize parsedSlugLike = _parsedSlugLike;
@synthesize parsedFlavorEqual = _parsedFlavorEqual;
@synthesize parsedFlavorIn = _parsedFlavorIn;
@synthesize parsedFlavorLike = _parsedFlavorLike;
@synthesize errorCodeEqual = _errorCodeEqual;
@synthesize errorCodeIn = _errorCodeIn;
@synthesize createdAtGreaterThanOrEqual = _createdAtGreaterThanOrEqual;
@synthesize createdAtLessThanOrEqual = _createdAtLessThanOrEqual;
@synthesize updatedAtGreaterThanOrEqual = _updatedAtGreaterThanOrEqual;
@synthesize updatedAtLessThanOrEqual = _updatedAtLessThanOrEqual;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_idEqual = KALTURA_UNDEF_INT;
    self->_partnerIdEqual = KALTURA_UNDEF_INT;
    self->_dropFolderIdEqual = KALTURA_UNDEF_INT;
    self->_statusEqual = KALTURA_UNDEF_INT;
    self->_createdAtGreaterThanOrEqual = KALTURA_UNDEF_INT;
    self->_createdAtLessThanOrEqual = KALTURA_UNDEF_INT;
    self->_updatedAtGreaterThanOrEqual = KALTURA_UNDEF_INT;
    self->_updatedAtLessThanOrEqual = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfIdEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfIdIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPartnerIdEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfPartnerIdIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfDropFolderIdEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfDropFolderIdIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileNameEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileNameIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfFileNameLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfStatusEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfStatusIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfParsedSlugEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfParsedSlugIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfParsedSlugLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfParsedFlavorEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfParsedFlavorIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfParsedFlavorLike
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfErrorCodeEqual
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfErrorCodeIn
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfCreatedAtGreaterThanOrEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfCreatedAtLessThanOrEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUpdatedAtGreaterThanOrEqual
{
    return KFT_Int;
}

- (KalturaFieldType)getTypeOfUpdatedAtLessThanOrEqual
{
    return KFT_Int;
}

- (void)setIdEqualFromString:(NSString*)aPropVal
{
    self.idEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setPartnerIdEqualFromString:(NSString*)aPropVal
{
    self.partnerIdEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setDropFolderIdEqualFromString:(NSString*)aPropVal
{
    self.dropFolderIdEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setStatusEqualFromString:(NSString*)aPropVal
{
    self.statusEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setCreatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal
{
    self.createdAtGreaterThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setCreatedAtLessThanOrEqualFromString:(NSString*)aPropVal
{
    self.createdAtLessThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUpdatedAtGreaterThanOrEqualFromString:(NSString*)aPropVal
{
    self.updatedAtGreaterThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)setUpdatedAtLessThanOrEqualFromString:(NSString*)aPropVal
{
    self.updatedAtLessThanOrEqual = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolderFileBaseFilter"];
    [aParams addIfDefinedKey:@"idEqual" withInt:self.idEqual];
    [aParams addIfDefinedKey:@"idIn" withString:self.idIn];
    [aParams addIfDefinedKey:@"partnerIdEqual" withInt:self.partnerIdEqual];
    [aParams addIfDefinedKey:@"partnerIdIn" withString:self.partnerIdIn];
    [aParams addIfDefinedKey:@"dropFolderIdEqual" withInt:self.dropFolderIdEqual];
    [aParams addIfDefinedKey:@"dropFolderIdIn" withString:self.dropFolderIdIn];
    [aParams addIfDefinedKey:@"fileNameEqual" withString:self.fileNameEqual];
    [aParams addIfDefinedKey:@"fileNameIn" withString:self.fileNameIn];
    [aParams addIfDefinedKey:@"fileNameLike" withString:self.fileNameLike];
    [aParams addIfDefinedKey:@"statusEqual" withInt:self.statusEqual];
    [aParams addIfDefinedKey:@"statusIn" withString:self.statusIn];
    [aParams addIfDefinedKey:@"parsedSlugEqual" withString:self.parsedSlugEqual];
    [aParams addIfDefinedKey:@"parsedSlugIn" withString:self.parsedSlugIn];
    [aParams addIfDefinedKey:@"parsedSlugLike" withString:self.parsedSlugLike];
    [aParams addIfDefinedKey:@"parsedFlavorEqual" withString:self.parsedFlavorEqual];
    [aParams addIfDefinedKey:@"parsedFlavorIn" withString:self.parsedFlavorIn];
    [aParams addIfDefinedKey:@"parsedFlavorLike" withString:self.parsedFlavorLike];
    [aParams addIfDefinedKey:@"errorCodeEqual" withString:self.errorCodeEqual];
    [aParams addIfDefinedKey:@"errorCodeIn" withString:self.errorCodeIn];
    [aParams addIfDefinedKey:@"createdAtGreaterThanOrEqual" withInt:self.createdAtGreaterThanOrEqual];
    [aParams addIfDefinedKey:@"createdAtLessThanOrEqual" withInt:self.createdAtLessThanOrEqual];
    [aParams addIfDefinedKey:@"updatedAtGreaterThanOrEqual" withInt:self.updatedAtGreaterThanOrEqual];
    [aParams addIfDefinedKey:@"updatedAtLessThanOrEqual" withInt:self.updatedAtLessThanOrEqual];
}

- (void)dealloc
{
    [self->_idIn release];
    [self->_partnerIdIn release];
    [self->_dropFolderIdIn release];
    [self->_fileNameEqual release];
    [self->_fileNameIn release];
    [self->_fileNameLike release];
    [self->_statusIn release];
    [self->_parsedSlugEqual release];
    [self->_parsedSlugIn release];
    [self->_parsedSlugLike release];
    [self->_parsedFlavorEqual release];
    [self->_parsedFlavorIn release];
    [self->_parsedFlavorLike release];
    [self->_errorCodeEqual release];
    [self->_errorCodeIn release];
    [super dealloc];
}

@end

@implementation KalturaRemoteDropFolder
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaRemoteDropFolder"];
}

@end

@implementation KalturaDropFolderFileFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolderFileFilter"];
}

@end

@implementation KalturaDropFolderFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolderFilter"];
}

@end

@implementation KalturaFtpDropFolder
@synthesize host = _host;
@synthesize port = _port;
@synthesize username = _username;
@synthesize password = _password;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_port = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfHost
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPort
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

- (void)setPortFromString:(NSString*)aPropVal
{
    self.port = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaFtpDropFolder"];
    [aParams addIfDefinedKey:@"host" withString:self.host];
    [aParams addIfDefinedKey:@"port" withInt:self.port];
    [aParams addIfDefinedKey:@"username" withString:self.username];
    [aParams addIfDefinedKey:@"password" withString:self.password];
}

- (void)dealloc
{
    [self->_host release];
    [self->_username release];
    [self->_password release];
    [super dealloc];
}

@end

@implementation KalturaSshDropFolder
@synthesize host = _host;
@synthesize port = _port;
@synthesize username = _username;
@synthesize password = _password;
@synthesize privateKey = _privateKey;
@synthesize publicKey = _publicKey;
@synthesize passPhrase = _passPhrase;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_port = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfHost
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPort
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

- (KalturaFieldType)getTypeOfPrivateKey
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPublicKey
{
    return KFT_String;
}

- (KalturaFieldType)getTypeOfPassPhrase
{
    return KFT_String;
}

- (void)setPortFromString:(NSString*)aPropVal
{
    self.port = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSshDropFolder"];
    [aParams addIfDefinedKey:@"host" withString:self.host];
    [aParams addIfDefinedKey:@"port" withInt:self.port];
    [aParams addIfDefinedKey:@"username" withString:self.username];
    [aParams addIfDefinedKey:@"password" withString:self.password];
    [aParams addIfDefinedKey:@"privateKey" withString:self.privateKey];
    [aParams addIfDefinedKey:@"publicKey" withString:self.publicKey];
    [aParams addIfDefinedKey:@"passPhrase" withString:self.passPhrase];
}

- (void)dealloc
{
    [self->_host release];
    [self->_username release];
    [self->_password release];
    [self->_privateKey release];
    [self->_publicKey release];
    [self->_passPhrase release];
    [super dealloc];
}

@end

@implementation KalturaDropFolderFileResource
@synthesize dropFolderFileId = _dropFolderFileId;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_dropFolderFileId = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfDropFolderFileId
{
    return KFT_Int;
}

- (void)setDropFolderFileIdFromString:(NSString*)aPropVal
{
    self.dropFolderFileId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolderFileResource"];
    [aParams addIfDefinedKey:@"dropFolderFileId" withInt:self.dropFolderFileId];
}

@end

@implementation KalturaDropFolderImportJobData
@synthesize dropFolderFileId = _dropFolderFileId;

- (id)init
{
    self = [super init];
    if (self == nil)
        return nil;
    self->_dropFolderFileId = KALTURA_UNDEF_INT;
    return self;
}

- (KalturaFieldType)getTypeOfDropFolderFileId
{
    return KFT_Int;
}

- (void)setDropFolderFileIdFromString:(NSString*)aPropVal
{
    self.dropFolderFileId = [KalturaSimpleTypeParser parseInt:aPropVal];
}

- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaDropFolderImportJobData"];
    [aParams addIfDefinedKey:@"dropFolderFileId" withInt:self.dropFolderFileId];
}

@end

@implementation KalturaRemoteDropFolderBaseFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaRemoteDropFolderBaseFilter"];
}

@end

@implementation KalturaScpDropFolder
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaScpDropFolder"];
}

@end

@implementation KalturaSftpDropFolder
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSftpDropFolder"];
}

@end

@implementation KalturaRemoteDropFolderFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaRemoteDropFolderFilter"];
}

@end

@implementation KalturaFtpDropFolderBaseFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaFtpDropFolderBaseFilter"];
}

@end

@implementation KalturaSshDropFolderBaseFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSshDropFolderBaseFilter"];
}

@end

@implementation KalturaFtpDropFolderFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaFtpDropFolderFilter"];
}

@end

@implementation KalturaSshDropFolderFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSshDropFolderFilter"];
}

@end

@implementation KalturaScpDropFolderBaseFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaScpDropFolderBaseFilter"];
}

@end

@implementation KalturaSftpDropFolderBaseFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSftpDropFolderBaseFilter"];
}

@end

@implementation KalturaScpDropFolderFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaScpDropFolderFilter"];
}

@end

@implementation KalturaSftpDropFolderFilter
- (void)toParams:(KalturaParams*)aParams isSuper:(BOOL)aIsSuper
{
    [super toParams:aParams isSuper:YES];
    if (!aIsSuper)
        [aParams putKey:@"objectType" withString:@"KalturaSftpDropFolderFilter"];
}

@end

///////////////////////// services /////////////////////////
@implementation KalturaDropFolderService
- (KalturaDropFolder*)addWithDropFolder:(KalturaDropFolder*)aDropFolder
{
    [self.client.params addIfDefinedKey:@"dropFolder" withObject:aDropFolder];
    return [self.client queueObjectService:@"dropfolder_dropfolder" withAction:@"add" withExpectedType:@"KalturaDropFolder"];
}

- (KalturaDropFolder*)getWithDropFolderId:(int)aDropFolderId
{
    [self.client.params addIfDefinedKey:@"dropFolderId" withInt:aDropFolderId];
    return [self.client queueObjectService:@"dropfolder_dropfolder" withAction:@"get" withExpectedType:@"KalturaDropFolder"];
}

- (KalturaDropFolder*)updateWithDropFolderId:(int)aDropFolderId withDropFolder:(KalturaDropFolder*)aDropFolder
{
    [self.client.params addIfDefinedKey:@"dropFolderId" withInt:aDropFolderId];
    [self.client.params addIfDefinedKey:@"dropFolder" withObject:aDropFolder];
    return [self.client queueObjectService:@"dropfolder_dropfolder" withAction:@"update" withExpectedType:@"KalturaDropFolder"];
}

- (KalturaDropFolder*)deleteWithDropFolderId:(int)aDropFolderId
{
    [self.client.params addIfDefinedKey:@"dropFolderId" withInt:aDropFolderId];
    return [self.client queueObjectService:@"dropfolder_dropfolder" withAction:@"delete" withExpectedType:@"KalturaDropFolder"];
}

- (KalturaDropFolderListResponse*)listWithFilter:(KalturaDropFolderFilter*)aFilter withPager:(KalturaFilterPager*)aPager
{
    [self.client.params addIfDefinedKey:@"filter" withObject:aFilter];
    [self.client.params addIfDefinedKey:@"pager" withObject:aPager];
    return [self.client queueObjectService:@"dropfolder_dropfolder" withAction:@"list" withExpectedType:@"KalturaDropFolderListResponse"];
}

- (KalturaDropFolderListResponse*)listWithFilter:(KalturaDropFolderFilter*)aFilter
{
    return [self listWithFilter:aFilter withPager:nil];
}

- (KalturaDropFolderListResponse*)list
{
    return [self listWithFilter:nil];
}

@end

@implementation KalturaDropFolderFileService
- (KalturaDropFolderFile*)addWithDropFolderFile:(KalturaDropFolderFile*)aDropFolderFile
{
    [self.client.params addIfDefinedKey:@"dropFolderFile" withObject:aDropFolderFile];
    return [self.client queueObjectService:@"dropfolder_dropfolderfile" withAction:@"add" withExpectedType:@"KalturaDropFolderFile"];
}

- (KalturaDropFolderFile*)getWithDropFolderFileId:(int)aDropFolderFileId
{
    [self.client.params addIfDefinedKey:@"dropFolderFileId" withInt:aDropFolderFileId];
    return [self.client queueObjectService:@"dropfolder_dropfolderfile" withAction:@"get" withExpectedType:@"KalturaDropFolderFile"];
}

- (KalturaDropFolderFile*)updateWithDropFolderFileId:(int)aDropFolderFileId withDropFolderFile:(KalturaDropFolderFile*)aDropFolderFile
{
    [self.client.params addIfDefinedKey:@"dropFolderFileId" withInt:aDropFolderFileId];
    [self.client.params addIfDefinedKey:@"dropFolderFile" withObject:aDropFolderFile];
    return [self.client queueObjectService:@"dropfolder_dropfolderfile" withAction:@"update" withExpectedType:@"KalturaDropFolderFile"];
}

- (KalturaDropFolderFile*)updateStatusWithDropFolderFileId:(int)aDropFolderFileId withStatus:(int)aStatus
{
    [self.client.params addIfDefinedKey:@"dropFolderFileId" withInt:aDropFolderFileId];
    [self.client.params addIfDefinedKey:@"status" withInt:aStatus];
    return [self.client queueObjectService:@"dropfolder_dropfolderfile" withAction:@"updateStatus" withExpectedType:@"KalturaDropFolderFile"];
}

- (KalturaDropFolderFile*)deleteWithDropFolderFileId:(int)aDropFolderFileId
{
    [self.client.params addIfDefinedKey:@"dropFolderFileId" withInt:aDropFolderFileId];
    return [self.client queueObjectService:@"dropfolder_dropfolderfile" withAction:@"delete" withExpectedType:@"KalturaDropFolderFile"];
}

- (KalturaDropFolderFileListResponse*)listWithFilter:(KalturaDropFolderFileFilter*)aFilter withPager:(KalturaFilterPager*)aPager
{
    [self.client.params addIfDefinedKey:@"filter" withObject:aFilter];
    [self.client.params addIfDefinedKey:@"pager" withObject:aPager];
    return [self.client queueObjectService:@"dropfolder_dropfolderfile" withAction:@"list" withExpectedType:@"KalturaDropFolderFileListResponse"];
}

- (KalturaDropFolderFileListResponse*)listWithFilter:(KalturaDropFolderFileFilter*)aFilter
{
    return [self listWithFilter:aFilter withPager:nil];
}

- (KalturaDropFolderFileListResponse*)list
{
    return [self listWithFilter:nil];
}

- (KalturaDropFolderFile*)ignoreWithDropFolderFileId:(int)aDropFolderFileId
{
    [self.client.params addIfDefinedKey:@"dropFolderFileId" withInt:aDropFolderFileId];
    return [self.client queueObjectService:@"dropfolder_dropfolderfile" withAction:@"ignore" withExpectedType:@"KalturaDropFolderFile"];
}

@end

@implementation KalturaDropFolderClientPlugin
@synthesize client = _client;

- (id)initWithClient:(KalturaClient*)aClient
{
    self = [super init];
    if (self == nil)
        return nil;
    self.client = aClient;
    return self;
}

- (KalturaDropFolderService*)dropFolder
{
    if (self->_dropFolder == nil)
    	self->_dropFolder = [[KalturaDropFolderService alloc] initWithClient:self.client];
    return self->_dropFolder;
}

- (KalturaDropFolderFileService*)dropFolderFile
{
    if (self->_dropFolderFile == nil)
    	self->_dropFolderFile = [[KalturaDropFolderFileService alloc] initWithClient:self.client];
    return self->_dropFolderFile;
}

- (void)dealloc
{
    [self->_dropFolder release];
    [self->_dropFolderFile release];
	[super dealloc];
}

@end

