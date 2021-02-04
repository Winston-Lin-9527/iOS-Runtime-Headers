/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>

@class NSString;

@interface PLPrimaryResourceDataStoreFilePathKey : PLPrimaryResourceDataStoreKey {

	PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct _keyStruct;
	NSString* _filePathSuffix;

}

@property (assign,nonatomic) PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct keyStruct;              //@synthesize keyStruct=_keyStruct - In the implementation block
@property (nonatomic,copy) NSString * filePathSuffix;                                                 //@synthesize filePathSuffix=_filePathSuffix - In the implementation block
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct)keyStruct;
-(id)descriptionForAssetID:(id)arg1 ;
-(void)setKeyStruct:(PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct)arg1 ;
-(NSString *)filePathSuffix;
-(void)setFilePathSuffix:(NSString *)arg1 ;
-(id)store;
-(id)keyData;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 ;
@end
