(defvar pilha '()) ; cria uma lista vazia

(let ((inicio (get-universal-time))) ; marca o horário de início
  (dotimes (i 1000000) ; adiciona um milhão de elementos na lista
    (setf pilha (cons i pilha)))
  (let ((fim (- (get-universal-time) inicio))) ; calcula o tempo decorrido
    (format t "Horário de finalização: ~s~%" fim)
    (format t "Uso de memória: ~s MB~%" (/ (length (prin1-to-string pilha)) 1048576.0)))) ; calcula o uso de memória em MB
;; Define uma lista vazia
(defvar *pilha* '())

;; Armazena o horário de início
(defvar *hora-de-inicio* (get-universal-time))

;; Adiciona 1 milhão de números à lista
(dotimes (i 1000000)
  (push i *pilha*))

;; Exibe o horário de finalização
(format t "Horário de finalização: ~d~%" (- (get-universal-time) *hora-de-inicio*))

;; Exibe o uso de memória
(format t "Uso de memória: ~d MB~%" (/ (length (prin1-to-string *pilha*)) 1048576))