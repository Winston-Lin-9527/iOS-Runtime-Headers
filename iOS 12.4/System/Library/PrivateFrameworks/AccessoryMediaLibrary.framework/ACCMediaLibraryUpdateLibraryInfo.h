/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessoryMediaLibrary/AccessoryMediaLibrary-Structs.h>
@class NSString;

@interface ACCMediaLibraryUpdateLibraryInfo : NSObject {

	int _type;
	NSString* _mediaLibraryUID;
	NSString* _name;

}

@property (nonatomic,retain) NSString * mediaLibraryUID;              //@synthesize mediaLibraryUID=_mediaLibraryUID - In the implementation block
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
-(id)initWithDict:(id)arg1 ;
-(id)copyDict;
-(id)initWithMediaLibrary:(id)arg1 dict:(id)arg2 ;
-(void)fillStruct:(SCD_Struct_AC3*)arg1 ;
-(void)setMediaLibraryUID:(NSString *)arg1 ;
-(NSString *)mediaLibraryUID;
-(id)initWithMediaLibrary:(id)arg1 name:(id)arg2 type:(int)arg3 ;
-(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
@end
