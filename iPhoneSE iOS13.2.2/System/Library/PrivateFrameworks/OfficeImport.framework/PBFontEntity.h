/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PBFontEntity : NSObject {

	NSString* mFaceName;
	int mCharSet;
	int mType;
	int mFamily;

}
-(int)type;
-(int)family;
-(id)faceName;
-(int)charSet;
-(id)initWithName:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4 ;
@end
