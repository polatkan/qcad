// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMAVECTOR_H
        #define RECMAVECTOR_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RVector.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaVector {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    static  QScriptValue getSetX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetZ
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // public methods:
    static  QScriptValue
        set
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPolar
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        get2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isZero
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSane
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isNaN
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInside
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        equalsFuzzy
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        equalsFuzzy2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceTo2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleToPlaneXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMagnitude2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMagnitude
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSquaredMagnitude
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMagnitude2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLerp
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getUnitVector
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setZ
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getZ
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInWindow
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate3D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipHorizontal
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipVertical
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        stretch
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isoProject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        transform
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        transform2DM
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        transform2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransformed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransformed2DM
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransformed2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDividedComponents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMultipliedComponents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosest
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosest2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestDistance
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestIndex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestIndex2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_add
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_subtract
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_multiply
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_divide
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNegated
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        dot
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        normalize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNormalized
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_add_assign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_subtract_assign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_multiply_assign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_divide_assign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        equals
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_not_assign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFloor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCeil
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        lteXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        gteXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        containsFuzzy
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinimum
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaximum
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinimumX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaximumX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinimumY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaximumY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAverage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getUnion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getXList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getYList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getZList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCrossProduct
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDotProduct
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        createPolar
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        lessThanX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        greaterThanX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        lessThanY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        greaterThanY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        lessThanEqualXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        greaterThanEqualXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSortedByDistance
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSortedLeftRightTopBottom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSortedByAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RVector* getSelf(const QString& fName, QScriptContext* context)
    ;static RVector* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    