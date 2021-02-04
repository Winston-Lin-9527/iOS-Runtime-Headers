/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class AKAnisetteData;

@interface TRLegacyAnisetteDataResponse : TRResponseMessage {

	AKAnisetteData* _anisetteData;

}

@property (nonatomic,copy) AKAnisetteData * anisetteData;              //@synthesize anisetteData=_anisetteData - In the implementation block
+(BOOL)supportsSecureCoding;
-(AKAnisetteData *)anisetteData;
-(void)setAnisetteData:(AKAnisetteData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
