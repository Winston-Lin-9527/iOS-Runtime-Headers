/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/_BSSqlitePreparedSimpleStatement.h>

@class NSString;

@interface _BSSqliteDeferredPreparedSimpleStatement : _BSSqlitePreparedSimpleStatement {

	NSString* _deferredSql;

}
-(id)initWithDatabaseConnection:(id)arg1 deferredSql:(id)arg2 ;
-(BOOL)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
@end
