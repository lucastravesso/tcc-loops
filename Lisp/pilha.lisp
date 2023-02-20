(defvar pilha '()) ; cria uma lista vazia

(let ((inicio (get-universal-time))) ; marca o hor�rio de in�cio
  (dotimes (i 1000000) ; adiciona um milh�o de elementos na lista
    (setf pilha (cons i pilha)))
  (let ((fim (- (get-universal-time) inicio))) ; calcula o tempo decorrido
    (format t "Hor�rio de finaliza��o: ~s~%" fim)
    (format t "Uso de mem�ria: ~s MB~%" (/ (length (prin1-to-string pilha)) 1048576.0)))) ; calcula o uso de mem�ria em MB
;; Define uma lista vazia
(defvar *pilha* '())

;; Armazena o hor�rio de in�cio
(defvar *hora-de-inicio* (get-universal-time))

;; Adiciona 1 milh�o de n�meros � lista
(dotimes (i 1000000)
  (push i *pilha*))

;; Exibe o hor�rio de finaliza��o
(format t "Hor�rio de finaliza��o: ~d~%" (- (get-universal-time) *hora-de-inicio*))

;; Exibe o uso de mem�ria
(format t "Uso de mem�ria: ~d MB~%" (/ (length (prin1-to-string *pilha*)) 1048576))