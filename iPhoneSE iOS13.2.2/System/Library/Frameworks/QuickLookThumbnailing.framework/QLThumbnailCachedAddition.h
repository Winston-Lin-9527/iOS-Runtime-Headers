/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GSAddition;

@interface QLThumbnailCachedAddition : NSObject {

	GSAddition* _addition;
	unsigned long long _fileID;

}

@property (retain) GSAddition * addition;              //@synthesize addition=_addition - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(GSAddition *)addition;
-(void)setAddition:(GSAddition *)arg1 ;
-(id)initWithAddition:(id)arg1 ;
-(BOOL)isStillValid;
@end
