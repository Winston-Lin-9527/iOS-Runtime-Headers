/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDHint <NSObject>
@optional
-(BOOL)isFirstHint;
-(CGSize*)effectiveSize;
-(CGSize*)maximumSize;

@required
+(Class)archivedHintClass;
-(BOOL)overlapsWithSelection:(id)arg1;
-(void)offsetByDelta:(int)arg1;
-(id)firstChildHint;
-(id)lastChildHint;
-(id)copyForArchiving;

@end
